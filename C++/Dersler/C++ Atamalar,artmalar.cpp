#include<stdio.h>





int main(){
	/*
	
	Atamalar ,azaaltmalar ,artmalar
	
	
	Atama -->> bir degiskeni yaratirken ve ya daha sonradanb ona bir deyer verme islemi atamadi
	
	
	degisken(variable) = ifade(expression)
	
	
	int x =15;
	
	int y =14;
	
	
	x = y;//x = 14 olacaktir.
	y = x;// y = 14 olacaktir.Sebebi ise sonradan x'in y'e atandigi icin y yeniden kendi deyerini alicaktir.
	
	
	Example:
	
	int x = 6;
	
	int y = 7;
	x = y (y'in deyeri x'e ataniyor. x = 7,y = 7)
	
	y = x+1	(x+1 hesaplaniyor(8) ve y'e ataniyor. x=7 , y=8 )
	
	
	
	Artirma Islemi:
	
	x = x+1;
	
	
	Atama durumunda ilk basta sag tarafdaki kisim hesaplanir.sonradan x 'e ataniyor.
	
	
	Yanlis -- x+1 = 2;//(Bu durum C'de gecerli degildir.Sol tarafdaki saf bir degisen olmali x ve y gibi )
	
	Artirma ve azaltma islemleri
	
	i = i+1;
	Bu ifadenin esiti ayni zamanda i+=1 {i = i+1 ile ayni sey}
	(degisken  islem= ifade)
	C'de daha kolay bir yontem var.
	ustdeki islem i'yi 1 artirir.
	i'yi artirmak icin C'de i ++ ve ++i gibi seyler bulunuyor.
	
	
	1) postfix : i++;
	2) prefix : ++i;
	
	
	Arasindaki Fark:
	postfix;
	Example:
	
	int i = 4;
	printf("%d",i++)Ekrana 4 degerini bastirir.
	Cunki bu postfix halinde(i++) i'nin artirmadan oncekini degerini kullaniyor(4) bir sonraki satirda arttiriyor.
	
	prefix;
	
	printf("%d",++i)
	Ekrana 5 degerini basar.
	Cunku bu prefix halinde(++i) i'nin artmis degerini kullaniyor.Bir sonraki satirda artiriyor aslinda.
	i-- ve --i ayni sekilde calisiyor.
	
	(degisken islem=ifade)biraz acarsak;
	
	i = i%9
	Bu formaya sokmaya calisalim.i%=9;
	Ornek:
	i = i * (a+1); Esittir -- >> i *= a+1;
	
	Ic ice atamalar (Nested)
	
	i = j = k = 0
	
	Bu sekilde atama varsa sagdan baslayarak k'ya 0 atiyor.Yani k = 0. Daha sonra j'ye k'in deyerini atiyor(0) yani (j = 0).Dha sonra i'ye j'nin degerini 
	atiyor(0).i = 0.Sonuc olarak en sagdan baslayara yapilan atamalar sonucunda;
	i = o;
	j = 0;
	k = 0;
	Bu sekilde atamalarada en sagdan baslayarak islemler yapilir.(Ancak programcilar bunun cok daha karmasik versiyonlarini tercih etmezler.)
		
	*/
	//Atamalar Example:
	
	int x = 5;
	int y = 7;
	int a = 2;
	
	


	
	printf("y : %d\nx : %d\na : %d\n",y++,x++,a++);//7,5,2
	
	printf("++a : %d\n",++a);//4
	printf("y : %d\nx : %d\na : %d\n",y--,x--,++a);//8,6,5
	
	
	return 0;
	
	
	
	
	
}





