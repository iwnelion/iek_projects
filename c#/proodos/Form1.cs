using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace joanabuzaproodos
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void orderBtn_Click(object sender, EventArgs e)
        {
            float totalCost = 10;
            string user=username.Text;
            bool eidos;
            string ilika="";

            if (newC.Checked)
            {
                eidos = true;
                totalCost -= 4;
            }
            if (old.Checked)
            {
                eidos = true;
                totalCost -= 2;
            }

            if (zambon.Checked)
            {
                ilika += "ζαμπόν ";
                totalCost += 2;
            }
            if (manitaria.Checked)
            {
                ilika += "μανιτάρια ";
                totalCost += 2;
            }
            if (bacon.Checked)
            {
                ilika += "bacon ";
                totalCost += 2;
            }
            if (piperia.Checked)
            {
                ilika += "πιπεριά ";
                totalCost += 2;
            }


            MessageBox.Show("Hello user "+user+" Παραγγείλατε πίτσα με " + ilika + "." + "\nΟ λογαρισμός σας είναι: "+totalCost + " ευρώ");
        }

        private void afrati_Click(object sender, EventArgs e)
        {
            pizza1.Visible = true;
            pizza2.Visible = false;
        }

        private void tragani_Click(object sender, EventArgs e)
        {
            pizza1.Visible = false;
            pizza2.Visible = true;
        }
    }
}
