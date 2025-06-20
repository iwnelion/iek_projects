using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace joanaBuzaExam
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int n1 = int.Parse(textBox1.Text);
            int n2 = int.Parse(textBox2.Text);
            int n3 = int.Parse(textBox3.Text);
            int n4 = int.Parse(textBox4.Text);
            int n5 = int.Parse(textBox5.Text);
            int sum=0;
            bool okay = true;

            if (n1 <= 7)
            {
                sum += n1;
            }
            else
            {
                apot.Text = "Μέγιστη τιμή 7 στο Α1!";
                okay = false;
                
            }

            if (n2 <= 4)
            {
                sum += n2;
            }
            else
            {
                apot.Text = "Μέγιστη τιμή 4 στο Α2!";
                okay = false;
            }

            if (n3 <= 5)
            {
                sum += n3;
            }
            else
            {
                apot.Text = "Μέγιστη τιμή 5 στο Α3!";
                okay = false;
            }

            if (n4 <= 4)
            {
                sum += n4;
            }
            else
            {
                apot.Text = "Μέγιστη τιμή 4 στο Α4!";
                okay = false;
            }

            if (n5 <= 5)
            {
                sum += n5;
            }
            else
            {
                apot.Text = "Μέγιστη τιμή 5 στο Α5!";
                okay = false;
            }

            textBox6.Text = sum.ToString();

            if (sum >= 12 && okay==true)
            {
                apot.Text = "Συγχαρητήρια! Περάσατε!";
            }
            else if (sum <= 11 && okay==true)
            {
                apot.Text = "Λυπάμαι, πρέπει να ξαναπροσπαθήσετε.";
            }

        }
    }
}