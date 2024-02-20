namespace DbProviderFactoryLesson
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            cmboxProviders = new ComboBox();
            textRequest = new TextBox();
            btn_execute = new Button();
            dataGridView1 = new DataGridView();
            label2 = new Label();
            textConStr = new TextBox();
            label1 = new Label();
            btn_getAllProviders = new Button();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // cmboxProviders
            // 
            cmboxProviders.FormattingEnabled = true;
            cmboxProviders.Location = new Point(8, 12);
            cmboxProviders.Name = "cmboxProviders";
            cmboxProviders.Size = new Size(256, 29);
            cmboxProviders.TabIndex = 0;
            cmboxProviders.SelectedIndexChanged += cmboxProviders_SelectedIndexChanged;
            // 
            // textRequest
            // 
            textRequest.Font = new Font("Segoe UI", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            textRequest.Location = new Point(8, 205);
            textRequest.Name = "textRequest";
            textRequest.Size = new Size(876, 35);
            textRequest.TabIndex = 1;
            // 
            // btn_execute
            // 
            btn_execute.Font = new Font("Segoe UI Semibold", 14.25F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
            btn_execute.Location = new Point(890, 205);
            btn_execute.Name = "btn_execute";
            btn_execute.Size = new Size(218, 35);
            btn_execute.TabIndex = 2;
            btn_execute.Text = "Execute Request";
            btn_execute.UseVisualStyleBackColor = true;
            btn_execute.Click += btn_execute_Click;
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(8, 250);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowTemplate.Height = 25;
            dataGridView1.Size = new Size(1102, 275);
            dataGridView1.TabIndex = 3;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point);
            label2.Location = new Point(8, 170);
            label2.Name = "label2";
            label2.Size = new Size(162, 32);
            label2.TabIndex = 4;
            label2.Text = "SQL  Request";
            // 
            // textConStr
            // 
            textConStr.Font = new Font("Segoe UI", 15.75F, FontStyle.Regular, GraphicsUnit.Point);
            textConStr.Location = new Point(8, 98);
            textConStr.Name = "textConStr";
            textConStr.ReadOnly = true;
            textConStr.Size = new Size(1100, 35);
            textConStr.TabIndex = 1;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point);
            label1.Location = new Point(8, 63);
            label1.Name = "label1";
            label1.Size = new Size(220, 32);
            label1.TabIndex = 4;
            label1.Text = "Connection String";
            // 
            // btn_getAllProviders
            // 
            btn_getAllProviders.Font = new Font("Segoe UI Semibold", 14.25F, FontStyle.Bold, GraphicsUnit.Point);
            btn_getAllProviders.Location = new Point(890, 12);
            btn_getAllProviders.Name = "btn_getAllProviders";
            btn_getAllProviders.Size = new Size(218, 35);
            btn_getAllProviders.TabIndex = 2;
            btn_getAllProviders.Text = "Get All Provider";
            btn_getAllProviders.UseVisualStyleBackColor = true;
            btn_getAllProviders.Click += btn_getAllProviders_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(9F, 21F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1118, 529);
            Controls.Add(label1);
            Controls.Add(label2);
            Controls.Add(dataGridView1);
            Controls.Add(btn_getAllProviders);
            Controls.Add(btn_execute);
            Controls.Add(textConStr);
            Controls.Add(textRequest);
            Controls.Add(cmboxProviders);
            Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point);
            Margin = new Padding(4);
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private ComboBox cmboxProviders;
        private TextBox textRequest;
        private Button btn_execute;
        private DataGridView dataGridView1;
        private Label label2;
        private TextBox textConStr;
        private Label label1;
        private Button btn_getAllProviders;
    }
}