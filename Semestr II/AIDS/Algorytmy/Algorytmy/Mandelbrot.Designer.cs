namespace MandelbrotDraw
{
    partial class mandelbrot
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.pictureBox_mandelbrot = new System.Windows.Forms.PictureBox();
            this.button_Start = new System.Windows.Forms.Button();
            this.numericUpDown_Zoom = new System.Windows.Forms.NumericUpDown();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.radioButton_Up = new System.Windows.Forms.RadioButton();
            this.radioButton_Right = new System.Windows.Forms.RadioButton();
            this.radioButton_Left = new System.Windows.Forms.RadioButton();
            this.radioButton_Middle = new System.Windows.Forms.RadioButton();
            this.trackBar_zoom = new System.Windows.Forms.TrackBar();
            this.panel1 = new System.Windows.Forms.Panel();
            this.radioButton_mandelbrot = new System.Windows.Forms.RadioButton();
            this.radioButton_burningShip = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox_mandelbrot)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown_Zoom)).BeginInit();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_zoom)).BeginInit();
            this.panel1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // pictureBox_mandelbrot
            // 
            this.pictureBox_mandelbrot.Dock = System.Windows.Forms.DockStyle.Left;
            this.pictureBox_mandelbrot.Location = new System.Drawing.Point(0, 0);
            this.pictureBox_mandelbrot.Margin = new System.Windows.Forms.Padding(0);
            this.pictureBox_mandelbrot.Name = "pictureBox_mandelbrot";
            this.pictureBox_mandelbrot.Size = new System.Drawing.Size(600, 601);
            this.pictureBox_mandelbrot.TabIndex = 0;
            this.pictureBox_mandelbrot.TabStop = false;
            // 
            // button_Start
            // 
            this.button_Start.Location = new System.Drawing.Point(6, 45);
            this.button_Start.Name = "button_Start";
            this.button_Start.Size = new System.Drawing.Size(75, 23);
            this.button_Start.TabIndex = 1;
            this.button_Start.Text = "START";
            this.button_Start.UseVisualStyleBackColor = true;
            this.button_Start.Click += new System.EventHandler(this.button_Start_Click);
            // 
            // numericUpDown_Zoom
            // 
            this.numericUpDown_Zoom.Location = new System.Drawing.Point(6, 19);
            this.numericUpDown_Zoom.Maximum = new decimal(new int[] {
            5,
            0,
            0,
            0});
            this.numericUpDown_Zoom.Name = "numericUpDown_Zoom";
            this.numericUpDown_Zoom.Size = new System.Drawing.Size(120, 20);
            this.numericUpDown_Zoom.TabIndex = 2;
            this.numericUpDown_Zoom.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(131, 21);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(63, 13);
            this.label1.TabIndex = 4;
            this.label1.Text = "ZOOM (0-5)";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radioButton_burningShip);
            this.groupBox1.Controls.Add(this.radioButton_mandelbrot);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.numericUpDown_Zoom);
            this.groupBox1.Controls.Add(this.button_Start);
            this.groupBox1.Location = new System.Drawing.Point(3, 3);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(200, 128);
            this.groupBox1.TabIndex = 5;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Ustawienia";
            // 
            // radioButton_Up
            // 
            this.radioButton_Up.AutoSize = true;
            this.radioButton_Up.Location = new System.Drawing.Point(9, 104);
            this.radioButton_Up.Name = "radioButton_Up";
            this.radioButton_Up.Size = new System.Drawing.Size(48, 17);
            this.radioButton_Up.TabIndex = 6;
            this.radioButton_Up.TabStop = true;
            this.radioButton_Up.Text = "Góra";
            this.radioButton_Up.UseVisualStyleBackColor = true;
            // 
            // radioButton_Right
            // 
            this.radioButton_Right.AutoSize = true;
            this.radioButton_Right.Location = new System.Drawing.Point(9, 80);
            this.radioButton_Right.Name = "radioButton_Right";
            this.radioButton_Right.Size = new System.Drawing.Size(55, 17);
            this.radioButton_Right.TabIndex = 5;
            this.radioButton_Right.TabStop = true;
            this.radioButton_Right.Text = "Prawa";
            this.radioButton_Right.UseVisualStyleBackColor = true;
            // 
            // radioButton_Left
            // 
            this.radioButton_Left.AutoSize = true;
            this.radioButton_Left.Location = new System.Drawing.Point(9, 56);
            this.radioButton_Left.Name = "radioButton_Left";
            this.radioButton_Left.Size = new System.Drawing.Size(51, 17);
            this.radioButton_Left.TabIndex = 4;
            this.radioButton_Left.TabStop = true;
            this.radioButton_Left.Text = "Lewa";
            this.radioButton_Left.UseVisualStyleBackColor = true;
            // 
            // radioButton_Middle
            // 
            this.radioButton_Middle.AutoSize = true;
            this.radioButton_Middle.Location = new System.Drawing.Point(9, 32);
            this.radioButton_Middle.Name = "radioButton_Middle";
            this.radioButton_Middle.Size = new System.Drawing.Size(59, 17);
            this.radioButton_Middle.TabIndex = 3;
            this.radioButton_Middle.TabStop = true;
            this.radioButton_Middle.Text = "Srodek";
            this.radioButton_Middle.UseVisualStyleBackColor = true;
            // 
            // trackBar_zoom
            // 
            this.trackBar_zoom.Location = new System.Drawing.Point(3, 442);
            this.trackBar_zoom.Maximum = 100;
            this.trackBar_zoom.Name = "trackBar_zoom";
            this.trackBar_zoom.Size = new System.Drawing.Size(235, 45);
            this.trackBar_zoom.TabIndex = 6;
            this.trackBar_zoom.Value = 1;
            this.trackBar_zoom.Scroll += new System.EventHandler(this.trackBar_zoom_Scroll);
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.groupBox2);
            this.panel1.Controls.Add(this.trackBar_zoom);
            this.panel1.Controls.Add(this.groupBox1);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Right;
            this.panel1.Location = new System.Drawing.Point(617, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(242, 601);
            this.panel1.TabIndex = 7;
            // 
            // radioButton_mandelbrot
            // 
            this.radioButton_mandelbrot.AutoSize = true;
            this.radioButton_mandelbrot.Location = new System.Drawing.Point(88, 50);
            this.radioButton_mandelbrot.Name = "radioButton_mandelbrot";
            this.radioButton_mandelbrot.Size = new System.Drawing.Size(78, 17);
            this.radioButton_mandelbrot.TabIndex = 8;
            this.radioButton_mandelbrot.TabStop = true;
            this.radioButton_mandelbrot.Text = "Mandelbrot";
            this.radioButton_mandelbrot.UseVisualStyleBackColor = true;
            // 
            // radioButton_burningShip
            // 
            this.radioButton_burningShip.AutoSize = true;
            this.radioButton_burningShip.Location = new System.Drawing.Point(88, 74);
            this.radioButton_burningShip.Name = "radioButton_burningShip";
            this.radioButton_burningShip.Size = new System.Drawing.Size(99, 17);
            this.radioButton_burningShip.TabIndex = 9;
            this.radioButton_burningShip.TabStop = true;
            this.radioButton_burningShip.Text = "Płonący Statek";
            this.radioButton_burningShip.UseVisualStyleBackColor = true;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.radioButton_Right);
            this.groupBox2.Controls.Add(this.radioButton_Left);
            this.groupBox2.Controls.Add(this.radioButton_Middle);
            this.groupBox2.Controls.Add(this.radioButton_Up);
            this.groupBox2.Location = new System.Drawing.Point(3, 137);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(200, 175);
            this.groupBox2.TabIndex = 8;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Pozycja";
            // 
            // mandelbrot
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(859, 601);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.pictureBox_mandelbrot);
            this.MaximumSize = new System.Drawing.Size(875, 640);
            this.MinimumSize = new System.Drawing.Size(875, 640);
            this.Name = "mandelbrot";
            this.Text = "Mandelbrot";
            this.Shown += new System.EventHandler(this.mandelbrot_Shown);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox_mandelbrot)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown_Zoom)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackBar_zoom)).EndInit();
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox_mandelbrot;
        private System.Windows.Forms.Button button_Start;
        private System.Windows.Forms.NumericUpDown numericUpDown_Zoom;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radioButton_Up;
        private System.Windows.Forms.RadioButton radioButton_Right;
        private System.Windows.Forms.RadioButton radioButton_Left;
        private System.Windows.Forms.RadioButton radioButton_Middle;
        private System.Windows.Forms.TrackBar trackBar_zoom;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.RadioButton radioButton_burningShip;
        private System.Windows.Forms.RadioButton radioButton_mandelbrot;
        private System.Windows.Forms.GroupBox groupBox2;
    }
}

