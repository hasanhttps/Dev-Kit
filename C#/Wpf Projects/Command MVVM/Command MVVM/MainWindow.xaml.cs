using Command_MVVM.Commands;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Media;

namespace Command_MVVM
{

    public partial class MainWindow : Window, INotifyPropertyChanged
    {
        private string? sometext;

        public string? Sometext {
            get => sometext;
            set
            {
                sometext = value;
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(Sometext));
            }
        }
        //public MessageCommand? messageCommand{ get; set; }
        public ICommand? command { get; set; }

        public RealCommand? realCommand { get; set; }
        public MainWindow()
        {
            InitializeComponent();

            //messageCommand = new(Sometext);
            command = new RealCommand(Save);
            realCommand = new(Edit, canEdit);

            DataContext = this;
        }

        public event PropertyChangedEventHandler? PropertyChanged;

        public void Save(object? param)
        {
            MessageBox.Show(Sometext);
        }

        public bool canEdit(object? par)
        {
            return Sometext?.Length >= 8;
        }


        public void Edit(object? par)
        {
            if(par is StackPanel sp)
            {
                sp.Background = new SolidColorBrush(Colors.Black);
            }
            MessageBox.Show(par?.ToString());
        }

    }
}
