using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace joanaBuza
{
    public partial class vathmologia : Form
    {
        public vathmologia()
        {
            InitializeComponent();
        }

        private void ok_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void avg_Click(object sender, EventArgs e)
        {
            double gr1 = double.Parse(g1.Text);
            double gr2 = double.Parse(g2.Text);
            double gr3 = double.Parse(g3.Text);
            double gr4 = double.Parse(g4.Text);

            double sum = gr1 + gr2 + gr3 + gr4;
            double avg_final = sum / 4;

            mo_label.Text = avg_final.ToString();
            MessageBox.Show(avg_final.ToString());
        }
    }
}
