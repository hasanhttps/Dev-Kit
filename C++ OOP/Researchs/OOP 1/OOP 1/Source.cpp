#include <iostream>
#include <assert.h>// Asserti istifade etmek ucundur assert oz errorumuzu yaratmaq ucundur. Pythondaki raiceException isini gorur.
using namespace std;


class Student {// Oz sexsi data-type'imizdir.
// Default olaraq class private olduguna gore Public yazib onu istifadeye aciq etmeliyik.
	
	int age;// Private'da yaradiriq.
	
public:
	char* name;// Deyer vermesek ve print etsek bu deyisenlere garbage data verecek
	char* surname;

	// Accses modifiers

	// 1. Public   =>  Hem class hemde classdan torenmis classlar istifade ede bilir. Objectlerde icaze verir.
	// 2. Private  =>  Yalniz class'in oz daxilinde islenir.
	// 3. Protected  => Clasin oz daxilinde ve classdan toremesinde istifade edilir. Objectde istifade edilmir.

	// 4 cur Constructor var :

	// 1. Default constructor
	// 2. Constructor with parametrs
	// 3. Copy constructor
	// 4. Move constructor

	// Constructor mutleq publicde olmalidir.

	// 1. Default constructor

	Student() {// Adi mutleq class'in adi ile eyni olmalidir.
		name = nullptr;
		surname = nullptr;
		age = NULL;
		cout << "Salam" << endl;
	}

	// 2. Constructor with params

	// Biz constructor ile eyni adlari classin atributlari ile qoya bilmerik lakin this yazaraq isi hell etmek olur.
	// this => bu bizim classin type'inin pointeridir.
	
	Student(const char* name, const char* surname, int age) {
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy_s(this->name, len, name);
		int lens = strlen(surname) + 1;
		this->surname = new char[lens];
		strcpy_s(this->surname, lens, surname);
		setAge(age);

	}

	// Destructor (~) => Classin objectini silen zaman islenen funksiya

	~Student() {// Studenti silinen zaman isleyen funksiya. Bununla heapden deyer sile bilerik.
		cout << "Destroyed" << endl;
		delete name;// This olmasa bele compiler bunun clasin type'i oldugunu bilir ve onu silir.
		name = nullptr;
	}


	//Student(const char* n, const char* s, int a) {
	//	name = new char[strlen(n) + 1] {};
	//	strcpy_s(name, strlen(n) + 1, n);// Name'in icine verdiyimiz say qeder n'i kopyalayacaq.
	//}

	
	void print() {
		cout << "Name : " << (name != nullptr ? name : "NULL") << endl;
		cout << "Surname : " << (name != nullptr ? name : "NULL") << endl;
		cout << "Age : " << age << endl;
	}

	// Out of Class

	// Classlarda prototype isini gorur isdesek constructor ucun idesek methodlar ucun yaza bilerik classin icini agzina qeder doldurmaq duzgun bir sey deil.

	// Example

	void getName();

	int getAge();

	void setAge(int);
};

void Student::getName() {// Bu sekilde out of class yarada 
	cout << "Name : " << name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age >= 10 && age <= 89) {
		this->age = age;
		return;
	}
	assert(!"Yas 10'dan boyuk ve 89'dan kicik olmalidir !");// Bu oz errorumuzu yaratmaq ucundur ! ile islennmelidir cunki normalda true verir ve biz onu ! 
	// ile false ederek error atmasini temin edirik
}

int main() {
	
	// Initialization of class object


	// Consturctor with params

	Student a ("Hesen", "Abdullazade", 24);
	a.setAge(2);
	cout << a.getAge() << endl;

	// Default constructor

	/*Student a;
	Student b;

	a.print();*/

	// Student s1[10];// Bele cagirsaq constructor 10 defe isleyecek cunki 10 dene Student tipli class ile 10 defe class'i cagirmis oluruq.

	/*
	a.name = new char[]{ "Hesen" };
	a.surname = new char[]{ "Abdullazade" };
	a.age = 14;
	a.print();
	b.name = new char[] { "Javid" };
	b.surname = new char[] { "Atamoghlanov" };
	b.age = 24;
	b.print();
	s1[0] = a;
	s1[1] = b;
	*/


	/*
	OOP  =>  Object Oriented Programming
	
	OOP  Encapsulation Inheritance Abstarction Polymorphism
	anlayislarini ozunde birlesdiren Object yonumlu paradiqmadir. (Anlayis)
	
	4 esas prinsipi var

	1. Encapsulation  =>  Classimizin icerisindeki deyreleri, atributlari, deyisenleri,(fields) qorumaya alir ve kapsullasdirir.

	Encapsulation diger anlayislardan ferqlidir lakin digerleri bir - birlerinden asilidir.

	2. Inheritance  =>  (Toreme) Bir classin diger classdan toremesi ve onun metodlarini ve fieldlarini istifade etmesi

	3. Abstarction  =>  Objecti yaradila bilmir.

	4. Polymorphism  =>  Bir methodun islenme yerine gore ozunu ferqli cur aparmasi

	Class => Ozunde eyni ve muxtelif type'lari ozunde birlesdiren blockdur.

	Object => Class'dan yaradilmish deyer.

	Struct ve class'in ferqleri

	Struct default olaraq Public yaranir. Default olaraq stackda yaranir. Objectlerini ise ozumuz secirik.
	Class default olaraq Private yaranir. Default olaraq heapde yaranir. Objectlerini ise ozumuz secirik.

	*/



}