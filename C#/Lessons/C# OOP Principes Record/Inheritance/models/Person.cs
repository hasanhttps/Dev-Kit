namespace Inheritance.models {
    internal class Person {
        public Guid Id { get; set; }
        public string Name { get; set; }
        public string Surname { get; set; }
        public int Age { get; set; }

        public Person()
        {

        }

        public Person(Guid ıd, string name, string surname, int age) {
            Id = ıd;
            Name = name;
            Surname = surname;
            Age = age;
        }
    }
}
