using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MVVM.Models
{
    public class Car : Entity
    {
        public string? Make { get; set; }
        public string? Model { get; set; }
        public int Year{ get; set; }
    }
}
