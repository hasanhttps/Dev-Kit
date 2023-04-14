#include <stdio.h>
#include <string.h>


////Asagidaki fonksiyonu yazmaq yerine c++ 'in gelistiricileri terefinden yazilmis fonksiyon olan strlen() islede bilerik
//
//
//int uzunlukdon(char name[]){
//	int uzunluk = 0;
//	int i;
//	
//	for (i = 0;name[i] != '\0';i++){
//		uzunluk++;
//	}
//	
//	return uzunluk;
//}
//
//int main(){
//	
//	char isim[] = "Hasan";
//	
//	//C++ da string yaratdigimiz zaman onun boyutunu vermeye ehtiyac yoxdur.Cunki Bellekde o Stringlerin axrina "\0" isaresini qoyur.Belelikle ozu stringin nece karakter oldugunu tanimlaya bilir.
//	
//	/*
//	Meselen;
//	
//	
//	(isim stringin Bellekde gorsenimi);
//	
//		'H'
//		'A'
//		'S'
//		'A'
//		'N'
//		'\0'//Bunu C avtomatik olaraq stringlerin axrina qoyur.
//	
//	*/
//	
//	
//	printf("%d\n",uzunlukdon(isim));
//	
//	printf("%d",strlen(isim));
//	
//	return 0;
//}

//Hell 1;

//void terscevir(char dizi[]){
//	int i,uzunluk,gecici = 0;
//	
//	uzunluk = strlen(dizi);
//	char s[uzunluk];
//	
//	
//	for (i = uzunluk-1; i >= 0;i--){
//		
//		s[gecici] = dizi[i];
//		
//		gecici++;
//	}
//	printf("Isminiz : %s",s);
//}


void terscevir(char dizi[]){
	int i,uzunluk,gecici;
	
	uzunluk = strlen(dizi);
	
	for (i = 0;i <uzunluk/2;i++){
		gecici = dizi[i];
		dizi[i] = dizi[uzunluk-1-i];
		dizi[uzunluk-1-i] = gecici;
	}
	printf("ters : %s",dizi);
	
}

int main(){
	char isim[100];
	scanf("%s",isim);
	terscevir(isim);
	
	return 0;
}


