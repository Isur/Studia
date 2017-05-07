using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MandelbrotDraw
{
    public partial class mandelbrot : Form
    {
        Image imgOryginal;
      
        public mandelbrot()
        {
            InitializeComponent();
            radioButton_Middle.Checked = true;
            trackBar_zoom.Enabled = false;
        }

        private void mandelbrot_Shown(object sender, EventArgs e)
        {
         
        }
        private void button_Start_Click(object sender, EventArgs e)
        {
            this.Refresh();
            trackBar_zoom.Enabled = true;
            trackBar_zoom.Value = 1;
            double real;
            double imaginary;
            int i;
            double shiftX = 2;
            double shiftY = 2;
            double zoom = (double) numericUpDown_Zoom.Value;
            if(zoom > 3.0)
            {
                zoom = 3.0 + ((double)numericUpDown_Zoom.Value / 10); 
            }
            if(radioButton_Up.Checked == true)
            {
               shiftX = 2;
               shiftY = 0.76;
            }
            else if (radioButton_Middle.Checked == true)
            {
                shiftX = 2;
                shiftY = 2;
            }
            else if (radioButton_Left.Checked == true)
            {
                shiftX = 0.66;
                shiftY = 2;
            }
            else if (radioButton_Right.Checked == true)
            {
                shiftX = 4;
                shiftY = 2;
            }

            Bitmap mandelbrotek = new Bitmap(pictureBox_mandelbrot.Width, pictureBox_mandelbrot.Height);

            for (int x = 0; x < pictureBox_mandelbrot.Width; x++)
            {
                for (int y = 0; y < pictureBox_mandelbrot.Height; y++)
                {
                    real = (double)(x-pictureBox_mandelbrot.Width/shiftX) / (double)(pictureBox_mandelbrot.Width/( 4-zoom));
                    imaginary = (double)(y - pictureBox_mandelbrot.Height/shiftY) / (double)(pictureBox_mandelbrot.Height/(4-zoom));
                    Complex c = new Complex(real, imaginary);
                    Complex z = new Complex(0, 0);
                    i = 0;
                    if(radioButton_mandelbrot.Checked == true)
                    {
                        do
                        {
                            i++;
                            z.Square();
                            z.Add(c);
                            if (z.Modulo() > 2.0)
                            {
                                break;
                            }
                        } while (i < 1000);
                    }
                    else if(radioButton_burningShip.Checked == true)
                    {
                        do
                        {
                            i++;
                            z.AbsoluteSquare();
                            z.Add(c);
                            if (z.Modulo() > 2.0)
                            {
                                break;
                            }
                        } while (i < 1000);
                    }
                    if (i < 20)
                    {
                        mandelbrotek.SetPixel(x, y, Color.Black);
                    }
                    else if (i < 50)
                    {
                        mandelbrotek.SetPixel(x, y, Color.Yellow);
                    }
                    else if (i < 75)
                    {
                        mandelbrotek.SetPixel(x, y, Color.Red);
                    }
                    else if (i < 100)
                    {
                        mandelbrotek.SetPixel(x, y, Color.Orange);
                    }
                    else 
                    {
                        mandelbrotek.SetPixel(x, y, Color.Blue);
                    } 


                }
                pictureBox_mandelbrot.Image = mandelbrotek;
                imgOryginal = pictureBox_mandelbrot.Image;
            }
           
        }
        Image Zoom(Image img, Size size)
        {
            Bitmap zoomImage = new Bitmap(img, img.Width + (img.Width * size.Width / 100), img.Height + (img.Height * size.Height / 100));
            Graphics g = Graphics.FromImage(zoomImage);
            g.InterpolationMode = System.Drawing.Drawing2D.InterpolationMode.HighQualityBicubic;
            return zoomImage;
        }
        private void trackBar_zoom_Scroll(object sender, EventArgs e)
        {
              if(trackBar_zoom.Value >= 0)
              {
                  pictureBox_mandelbrot.Image = Zoom(imgOryginal, new Size(trackBar_zoom.Value, trackBar_zoom.Value));
              }
        }

    }
}
