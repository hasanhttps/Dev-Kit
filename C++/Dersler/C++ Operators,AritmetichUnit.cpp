#include<stdio.h>



int main() {
	
	/*
	
	#Aritmetich Operators
	
	
	1) TOPLAMA : (x + y) -- >> X ve Y'i toplar.
	2) CIKMA : (x-y) -- >> X'den Y'i cikarir
	3) CARPMA : (x*y) -- >> X ve Y'i carpar.
	4) BOLME : (x/y) -- >> X'i Y'ye boler.
	5) KALAN : (x%y) -- >> X ile y'in bolumunden kalani return eder.
	
	
	
	#Assign Operators
	
	
	1) ARTI(Value) : (+x) -- >> X sayisini arti ile carpar. (Sonuc degismez yani)
	2) EKSI(Value) : (-x) -- >> X sayisini eksi ile carpar. (Arti ise eksi olur , eksi ise arti olur)
	*/
	
	
	int b = 2;
	int d = 1;
	int z;
	
	z =b*d;
	
	
	printf("Carpma -- %d\n",z);
	
	
	int x = 2;
	int y = -1;
	
	printf("Assign(-x) -- %d\nAssign(-y) -- %d\n",-x,-y);
	
	
	int a = 5;
	int c = 11;
	
	printf("Toplama -- %d\n",c+a);
	printf("Cikma -- %d\n",c-a);
	printf("Bolme -- %d\n",c/a);
	printf("Kalan(%) -- %d\n",c%a);
	
	// "/" isareti c++'da bolunmeden alinan tam kismi return yapar.
	
	
	/*
	x+y*z,-x,+x,(x/7)*y gibi ifadeler aritmetik ifdadelerdir.
	
	
	islem sirasi:
	1) ilk once tekli operatorler yapilir(-x,+x).1ci oncelik bunlardadir.Kendi aralarinda sagdan sola.
	2) ikinci oncelik ikili operatorlerdedir ( * , / , % ).2ci oncelik kendi aralarinda soldan saga.
	3) ucuncu oncelik ikili operatorlerden bazilari olan ( + ve - )dir.3.cu oncelik + ve - dir.Kendi aralarinda soldan saga islem gorurler.
	
	
	
	***PARANTEZIN ICERISI HEP ILK YAPILIR MATEMATIKLE AYNI***
	*/
	
	
	
	return 0;
	
	
	
}
