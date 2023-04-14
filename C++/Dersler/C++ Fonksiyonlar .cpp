#include<stdio.h>


/*
Fonksiyon Tanimlama

DonusTipi fonksiyonadi(Parametreler){
	//Fonksiyon Blogu
	
	Yapilacak islemler
}

Fonksiyan -- >> Belirli bir isi yapan kod blogudur.

int main bir fonksiyondur.Ayni zamanda <stdio.h> kutuphanesinin icinde bulunan printf ve scanf de bir fonksiyondur.
Fonksiyon kodu daha da kisaltir ayni kodu ctrl + c ve ctrl + v yapmak yerine fonksiyon yazip onu her gerektiginde cagira biliriz.

*/

//Fonksiyondan hic bir sey donmeze fonksiyon void oluyor.


//Fonksiyonun yapisinin olusturulmasi;

void hatayibas(int hata){
	
	printf("Hata Kodu : %d",hata);
}

//Yukaridaki fonksiyoinun veri tipi int'dir .


int main(){
	
	//Fonksiyonun Basilmasi;
	
    //hatayibas(404);//Parametre olarak mutlaka fonksiyonun icerisinde belirtdigimiz tipde veri girmeliyiz.Fonksiyonu cagirmak icin fonksiyonunadi ve () icerisine parametr yazmak gerekli.
	
	
	int sayi;
	
	printf("Positiv Sayi giriniz : ");
	scanf("%d",&sayi);
	
	if (sayi < 0){
		
		hatayibas(404);
	}
	else{
		printf("Bax niye neqativ girmirsen?");
	}
	
	
	return 0;
}

