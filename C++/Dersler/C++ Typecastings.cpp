#include<stdio.h>

int main() {
	/*
	
	Tip Donusumleri
	Implicit typecastings-(Qeyri-askar)-Otomatik cevrilmeler
	Bir aritmetik ifadede tum tipler ayni degildir.Mesela 3.2/2 dedigimiz zaman float ve int beraber oluyor.
	Burada sonuc ne olacaktir.1.6 cunku otomatik bir donusum yapiliyor.(2 sayisi floata cevriliyor 2.0 oluyor aslinda)
	
	
	Otomatik Donusum Cizelgesi:
	
	char
	short ---------> int -----------> float -------------> double --------------> long
	                                                                              double
	                                                                              
	Mesela int ve double oldugu zaman  herkes double'a otomatik olarak cevriliyor.(Sagdan sola dogru oncelik artiyor.)
	
		
		
		Manuel Donusumler -- Excplicit typecastings -- (askar cevrilmeler)
		Otomatik donusumlerin yerleri kendimiz yapabiliriz.
		
		3.2 sayisini int yapmak istersek --------> (int) 3.2 ---------> 3 sonucunu verir.(Kesirli kismi atar.)
		
	*/
	int x = 3;
	float y = 0.1;
	printf("%.1f\n",x/y);//30.0
	printf("%f\n",2*4.2 + 4%2);//8.4 + 0 = 8.4
	printf("%f\n",12.5/2);//6.25
	printf("%d\n",(int)y);
	printf("%f\n",(float)x);
	
	
	
	
	
	
	return 0;
	
}
