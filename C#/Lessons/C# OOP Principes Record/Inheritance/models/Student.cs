namespace Inheritance.models {
    internal class Student : Person {

        public int[] _marks { get; set; }

        public Student() {
            Id = Guid.NewGuid();
            Name = null;
            Surname = null;
            Age = 0;
        }

        public Student(int[] marks) : this(){ // Delegate
            _marks = marks;
        }

        public Student(Guid id, string name, string surname, int age, params int[] marks) : 
            base(id, name, surname, age) { 
            _marks = marks;

        }
    }
}
