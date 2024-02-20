using System;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Windows.Forms;


namespace WinForms_Circular_Button
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            CircularButton circularButton = new CircularButton();
            circularButton.Size = new Size(60, 60);
            circularButton.Location = new Point(50, 50);
            circularButton.BackColor = Color.LightGray;
            circularButton.ForeColor = Color.Black;
            circularButton.Text = "Click me";

            this.Controls.Add(circularButton);
        }
    }
}