namespace Euklides
{
    partial class EuklidesForm
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
            this.button_start = new System.Windows.Forms.Button();
            this.label_result = new System.Windows.Forms.Label();
            this.radioButton_minus = new System.Windows.Forms.RadioButton();
            this.radioButton_division = new System.Windows.Forms.RadioButton();
            this.numericUpDown1 = new System.Windows.Forms.NumericUpDown();
            this.numericUpDown2 = new System.Windows.Forms.NumericUpDown();
            this.label_results = new System.Windows.Forms.Label();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown2)).BeginInit();
            this.SuspendLayout();
            // 
            // button_start
            // 
            this.button_start.Location = new System.Drawing.Point(39, 84);
            this.button_start.Name = "button_start";
            this.button_start.Size = new System.Drawing.Size(75, 23);
            this.button_start.TabIndex = 0;
            this.button_start.Text = "Oblicz";
            this.button_start.UseVisualStyleBackColor = true;
            this.button_start.Click += new System.EventHandler(this.button_start_Click);
            // 
            // label_result
            // 
            this.label_result.AutoSize = true;
            this.label_result.Location = new System.Drawing.Point(36, 124);
            this.label_result.Name = "label_result";
            this.label_result.Size = new System.Drawing.Size(156, 13);
            this.label_result.TabIndex = 1;
            this.label_result.Text = "Najmniejszy wspólny dzielnik to:";
            // 
            // radioButton_minus
            // 
            this.radioButton_minus.AutoSize = true;
            this.radioButton_minus.Location = new System.Drawing.Point(172, 32);
            this.radioButton_minus.Name = "radioButton_minus";
            this.radioButton_minus.Size = new System.Drawing.Size(89, 17);
            this.radioButton_minus.TabIndex = 2;
            this.radioButton_minus.TabStop = true;
            this.radioButton_minus.Text = "Odejmowanie";
            this.radioButton_minus.UseVisualStyleBackColor = true;
            // 
            // radioButton_division
            // 
            this.radioButton_division.AutoSize = true;
            this.radioButton_division.Location = new System.Drawing.Point(172, 59);
            this.radioButton_division.Name = "radioButton_division";
            this.radioButton_division.Size = new System.Drawing.Size(68, 17);
            this.radioButton_division.TabIndex = 3;
            this.radioButton_division.TabStop = true;
            this.radioButton_division.Text = "Dzielenie";
            this.radioButton_division.UseVisualStyleBackColor = true;
            // 
            // numericUpDown1
            // 
            this.numericUpDown1.Location = new System.Drawing.Point(39, 29);
            this.numericUpDown1.Maximum = new decimal(new int[] {
            -1,
            2147483647,
            0,
            0});
            this.numericUpDown1.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.numericUpDown1.Name = "numericUpDown1";
            this.numericUpDown1.Size = new System.Drawing.Size(120, 20);
            this.numericUpDown1.TabIndex = 4;
            this.numericUpDown1.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // numericUpDown2
            // 
            this.numericUpDown2.Location = new System.Drawing.Point(39, 56);
            this.numericUpDown2.Maximum = new decimal(new int[] {
            -1,
            2147483647,
            0,
            0});
            this.numericUpDown2.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.numericUpDown2.Name = "numericUpDown2";
            this.numericUpDown2.Size = new System.Drawing.Size(120, 20);
            this.numericUpDown2.TabIndex = 5;
            this.numericUpDown2.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // label_results
            // 
            this.label_results.AutoSize = true;
            this.label_results.Location = new System.Drawing.Point(39, 141);
            this.label_results.Name = "label_results";
            this.label_results.Size = new System.Drawing.Size(0, 13);
            this.label_results.TabIndex = 6;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(516, 169);
            this.Controls.Add(this.label_results);
            this.Controls.Add(this.numericUpDown2);
            this.Controls.Add(this.numericUpDown1);
            this.Controls.Add(this.radioButton_division);
            this.Controls.Add(this.radioButton_minus);
            this.Controls.Add(this.label_result);
            this.Controls.Add(this.button_start);
            this.Name = "Form1";
            this.Text = "Algorytm Euklidesa";
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown2)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_start;
        private System.Windows.Forms.Label label_result;
        private System.Windows.Forms.RadioButton radioButton_minus;
        private System.Windows.Forms.RadioButton radioButton_division;
        private System.Windows.Forms.NumericUpDown numericUpDown1;
        private System.Windows.Forms.NumericUpDown numericUpDown2;
        private System.Windows.Forms.Label label_results;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
    }
}

