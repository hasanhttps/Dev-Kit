#include<stdio.h>




int main(){
	
	float sayilar[5];//arreyin boyutunu belirlemek icin []icerisine kac tane numara ala bilecegini gire biliriz.
	
	float toplam = 0.0;
	
	float ortalama;
	
	int i;
	
	for (i=0;i < 5;i++){
		
		printf("Bir sayi giriniz : ");
		
		scanf("%f",&sayilar[i]);
		
		
	}
	
	for (i=0;i<5;i++){
		
		toplam += sayilar[i];
		
		
	}
	ortalama = toplam / 5 ;
	
	
	printf("Ortalama -- %f",ortalama);
	
	
	
	
	
	
	return 0;
}
