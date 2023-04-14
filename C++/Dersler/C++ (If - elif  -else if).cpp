#include<stdio.h>


/*
bool datatype -- true(dogru) ya da false(yanlis) return yapar.
*/

int main(){
	float ortalama;
	
	int note;
	
	printf("Notunuzu girin : ");
	scanf("%d",&note);
	printf("Ortalamanizi girin : ");
	scanf("%f",&ortalama);
	
	if (note > 60){
		//yapilacak islemler
		printf("Hos geldiniz");
	}
	
	else if (note <= 60 && note > 50) {
		printf("Bute kaldiniz.");
		
		if (ortalama < 2.5 ){
			printf("Bute kalsaniz bile seneye basvurunuz ve siki calisiniz ,cunki ortalamaniz dusuk .Ortalamaniz -- %.1f ",ortalama);
		}
		
		
	}
		
	
	else{
		printf("Dersden kaldiniz!");
	}
		
	
	//Istesek if den sonra 1 setir xod yazacayiqsa {} isaresini qoymaya bilerik syntaxis xetasi deil.4
	
//	if (note>60) printf("Hos geldiniz");
//		
//	else printf("Dersden kaldiniz!");//Suslu parantez olmadigina gore setir mutleq ifin else ifin ve ya elsenin yaninda yazilmalidir.	

	
	return 0;
}
