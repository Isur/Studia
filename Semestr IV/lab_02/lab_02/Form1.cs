using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace lab_02
{
    public partial class Form1 : Form
    {
        string user = "";
        public Form1()
        {
            InitializeComponent();
        }

        #region MyMethods
        private bool IsFilled(TextBox tb)
        {
            if(tb.Text == "")
            {
                errorProvider1.SetError(tb, "Wypełnij pole");
                return false;
            }
            errorProvider1.SetError(tb, "");
            return true;

        }

        private void ClearForm()
        {
            textBoxName.Clear();
            textBoxSurname.Clear();
            numericUpDownAge.Value = 25;
            user = "";
        }

        private bool AddUser(string user)
        {
            if (listBoxUsers.Items.Contains(user))
                return false;
            listBoxUsers.Items.Add(user);
            return true;
        }

        private bool EditUser(string user)
        {
           if (listBoxUsers.Items.Contains(user))
                return false;
            if (MessageBox.Show("Chcesz zmienic dane na: ", user, MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                listBoxUsers.Items[listBoxUsers.SelectedIndex] = user;
                return false;
            }
           return true;
        }
        private bool IsLastLetter(string text)
        {
                return (char.IsLetter(text[text.Length - 1]));
        }

        #endregion

        #region EventsMethods
        private void buttonAdd_Click(object sender, EventArgs e)
        {
            if (IsFilled(textBoxName) & IsFilled(textBoxSurname))
            {
                user += textBoxName.Text.Trim() + " " + textBoxSurname.Text.Trim() + " " + numericUpDownAge.Value;
                if (AddUser(user))
                {
                    ClearForm();
                    textBoxName.Focus();
                }
            }

        }

        private void textBoxName_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(e.KeyChar == 13)
            {
                textBoxSurname.Focus();
            }
        }

        private void textBoxSurname_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == 13)
            {
                numericUpDownAge.Focus();
            }
        }

        private void numericUpDownAge_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == 13)
            {
                buttonAdd_Click(sender, e);
            }
        }
        private void textBoxName_TextChanged(object sender, EventArgs e)
        {
            TextBox tb = sender as TextBox;
            if (tb.Text.Length > 0)
            {
                if (!IsLastLetter(tb.Text))
                {
                    MessageBox.Show("Wpisałeś nie literę.");
                    tb.Text = tb.Text.Remove(tb.Text.Length - 1);
                    tb.Focus();
                    tb.SelectionStart = tb.Text.Length;
                }
            }
        }
        private void listBoxUsers_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(listBoxUsers.SelectedIndex == -1)
            {
                textBoxName.Text = "";
                textBoxSurname.Text = "";
                numericUpDownAge.Value = 25;
            }else
            {
                decimal age;
                string[] words = listBoxUsers.SelectedItem.ToString().Split(' ');
                textBoxName.Text = words[0];
                textBoxSurname.Text = words[1];
               if( decimal.TryParse(words[2], out age))
                {
                    numericUpDownAge.Value = age;
                }
            }
        }
        private void buttonEdit_Click(object sender, EventArgs e)
        {
            if (IsFilled(textBoxName) & IsFilled(textBoxSurname))
            {
                user += textBoxName.Text.Trim() + " " + textBoxSurname.Text.Trim() + " " + numericUpDownAge.Value;
                if (EditUser(user))
                {
                    ClearForm();
                    textBoxName.Focus();
                }
            }
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            if (File.Exists("save.txt"))
            {
                string[] lines = File.ReadAllLines("save.txt");
                for (int i = 0; i < lines.Length; i++)
                {
                    listBoxUsers.Items.Add(lines[i]);
                }
            }
        }

        private void buttonSave_Click(object sender, EventArgs e)
        {
            string[] lines = new string[listBoxUsers.Items.Count];
            for (int i = 0; i < listBoxUsers.Items.Count; i++)
            {
                lines[i] = listBoxUsers.Items[i].ToString();
            }
            File.WriteAllLines("save.txt",lines);
        }

        #endregion

        private void buttonLoad_Click(object sender, EventArgs e)
        {
            if (File.Exists("save.txt"))
            {
                string[] lines = File.ReadAllLines("save.txt");
                for (int i = 0; i < lines.Length; i++)
                {
                    listBoxUsers.Items.Add(lines[i]);
                }
            }
        }
    }
}
