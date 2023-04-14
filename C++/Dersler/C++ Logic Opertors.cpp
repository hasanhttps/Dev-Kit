#include<stdio.h>



int main() {
	
	/*
	
	Bool veritipi(Datatype) true or false
	
	Mantiksal ifadeler dogru ise true;
	Mantiksal ifadeler yanlis ise false;
	ayni zamanda 0 dan baska tum sayilar false degeridir.
	
	
	Mantiksal operatorler:
	
	
	< -----------> kucuk mudur. a < b seklinde,
	> -----------> buyuk mudur. a > b seklinde,
	<= ----------> kucuk mudur ve ya beraber midir. a <= b seklinde,
	>= ----------> buyuk mudur ve ya esit midir. a >= b seklinde,
	== ----------> esit midir. a == b seklinde,
	!= ----------> esit degil midir. a != b seklinde.
	
	
	Mantiksal baglaclar:
	
	Bir cok mantiksal ifadeyi baglayan araclardir(Logic operatorlardir).
	
	
	&& --------->  mantiksal and("ve") baglaci.
	
	|| --------->  ya da baglaci(or).Hepsi false ise false return yapar.Hepsi true ise true,biri true ise true return yapar.
	
	! ---------->  degil baglaci(not).True'i false yapar ayni zamanda false'i true yapar.
	
	
	
	***   ----SARTLI CUMLELER----   ***
	
	a = x > y ? x : y;     ---------   eger x y'den buyuk ise(? isareti bu anlami katiyor) hepsi x 'e esit oluyor degilse(: ile isaret edilmis) hepsinin esiti y oluyor.
	
	*/
	
	//Bir kac alistirma ;
	
	
//	int a = 40 , b = 41 ;
//	
//	
//	if (a > b){
//		printf("True");
//	}
//	else {
//		printf("False");
//	}
//	
	
	
	int a, b = 25, c = 30;
	
	a = b < c ? b : c ;//B cden boyuk oldugu ucun cavab true  cixacaq daha sonra true valuesi ?(ise) terefinden oxunduqda duzgun oldugu gorunecek ve deyerin cavabini b'e beraber edecek.
	// b c'den kici olosaydi cavabv false olacaqdi ise terefinden oxunacaqdi false cavabi : (else) oxuyaraq c'ni deyere atayacaqdir(assign edecek(menimsedecek)).
	//Cox istifade edilmir.
	
	printf("%d",a);
	
	
	
	
	
	
	
	
	
	return 0;
}















