using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace joanaBuza
{
    public partial class Form1 : Form
    {
        string semester;
        string lesson;
        public Form1()
        {
            InitializeComponent();
        }

        private void close_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void κλείσιμοToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void submit_Click(object sender, EventArgs e)
        {
            if (a_semester.Checked)
            {
                semester = "Α εξάμηνο";
                ;
            }
            if (b_semester.Checked)
            {
                semester = "Β εξάμηνο";
            }
            if (c_semester.Checked)
            {
                semester = "Γ εξάμηνο";
            }
            if (d_semester.Checked)
            {
                semester = "Δ εξάμηνο";
            }

            if (programming.CheckState == CheckState.Checked)
            {
                lesson += "Προγραμματισμός ";
            }
            if (games.CheckState == CheckState.Checked)
            {
                lesson += "Κατασκευή παιχνιδιών ";
            }
            if (db.CheckState == CheckState.Checked)
            {
                lesson += "Βάσεις δεδομένων ";
            }
            if (network.CheckState == CheckState.Checked)
            {
                lesson += "Δίκτυα ";
            }

            MessageBox.Show(name.Text + " " + semester + " " + lesson);
        }

        //i clicked it on accident and if i remove it the application breaks
        private void programming_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void μέσοςΌροςToolStripMenuItem_Click(object sender, EventArgs e)
        {
            vathmologia fm = new vathmologia();
            fm.ShowDialog();
        }

        private void αποθήκευσηToolStripMenuItem_Click(object sender, EventArgs e)
        {
            string dataToSave= name.Text + " επέλεξες: " + semester + " " + lesson;
            DialogResult saveResult = saveFileDialog1.ShowDialog();
            if (saveResult == DialogResult.OK)
            {
                try
                {
                    string path = saveFileDialog1.FileName;
                    StreamWriter sw = new StreamWriter(path);
                    sw.Write(dataToSave);
                    sw.Close();
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }
        }
    }
}
