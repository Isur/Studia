using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Euklides
{
    public partial class EuklidesForm : Form
    {
        public EuklidesForm()
        {
            InitializeComponent();
            radioButton_minus.Checked = true;
        }

        private void button_start_Click(object sender, EventArgs e)
        { 
            EuklidesCalculation euk = new EuklidesCalculation((long)numericUpDown1.Value, (long)numericUpDown2.Value);
            if(radioButton_minus.Checked == true)
            {
                label_results.Text = "NWD( " + numericUpDown1.Value + ", " + numericUpDown2.Value + ")  = " + euk.CalculationMinus();           
            }
            else if(radioButton_division.Checked == true)
            {
                label_results.Text = "NWD( " + numericUpDown1.Value + ", " + numericUpDown2.Value + ")  = " + euk.CalculationDivision();
            }
        }
    }
}
