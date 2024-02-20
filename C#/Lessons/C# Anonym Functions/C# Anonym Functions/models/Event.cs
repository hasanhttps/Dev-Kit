using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AnonymFunctions.models.Event {

    public delegate bool MyDelegate(int a);

    public class NumberControl {
        public event MyDelegate? NumberStatus;

        private int myVar;

        public int MyProperty {
            get { return myVar; }
            set { 
                if (NumberStatus(value)) {
                    myVar = value;
                } else throw new Exception("Gelen data duzgun deil.");
            }
        }

        public NumberControl(MyDelegate? MY) {
            NumberStatus += MY;
        }
    }

}
