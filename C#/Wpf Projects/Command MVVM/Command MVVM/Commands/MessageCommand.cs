using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using System.Windows.Media.Animation;

namespace Command_MVVM.Commands
{
    public class MessageCommand : ICommand
    {
        public event EventHandler? CanExecuteChanged;

        public string? obj { get; set; }
       public MessageCommand(string? obj)
        {
            this.obj = obj;
        }

        public bool CanExecute(object? parameter)
        {
            return obj?.Length >= 8;
        }

        public void Execute(object? parameter)
        {
            MessageBox.Show("Hakuna Matata");
        }
    }
}
