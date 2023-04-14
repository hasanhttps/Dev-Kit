#include<stdio.h>

//


//{} -- Parantezin bu numunede acilib bagglanmasi maine aiddir

int main() {
//   //Single comment


//   /*
// Multiline comment
// It's the facty of this argument
// */


// /*
// -------------------------------------Data Type--------------------------------------

// Her bir cumlenin(statment) sonu ;'la biter.
// (Ex:  int d = 5;)

// Temel degisenler -- >> char(karakter),int(tam sayi),float(ondalik kesir),double(uzun kesr ededler),short(intin qisa versiyasi),long(intin uzun formasi)

// Char datatype -- >>   1 byte(8-bit)  0 'dan 255'e kadar degerler alir.Her bir deger ASCII Tableden alinir ve bu tablodaki bir degere esittir.

// Int datatype -- >> 4 byte(32-bit)  -2^16'den 2^16 kadar deger deger alir.2,35,45 Gibi degerler int tipidir.(Tam sayi)

// Short datatype -- >> 2 byte(16-bit) -2^8'den 2^8'e kadar deger alir.Int ile aynidir.Sadece alacagi deger araligi farklidir.2,32,132 gibi degerleri short ile ifade ede bilirsiniz.

// Long datatype -- >> 8 byte(64-bit) -2^32'den 2^32'e kadar deger alir.Int ile aynidir.Sadece alacagi deger farklidir.Cok buyuk sayilar icin kullanilabilir.
// Ornek:  12345678912345678,56672856623478 gibi sayilar icin kullanila bilir.

// float datatype -- >> Kesirli sayilari tutmak icin kullanilir.Byte'iisletim sistemine gore degisir.2.12,3.5 gibi degerler icin kullanilir.


// Double datatype -- >> Ayni float gibi kesirli sayilar icin kullanilir ancaak daha kapsamlidir.Byte'i isletim sistemine gore degisebilir.Ornek:2.1345345346456,13.3569848569

// Programcilar genellikle char,int,float ve double kullanirlar.






// */

// /*
// Degisken tipi ve tanimlama
// degsiken adi


// */

// /*
// Format belirleyicilar:

// Degisen yaratma

// Veritipi degisensadi = deger;

// %d -- >> int degerler icin printfde format belirleyici olarak kullanilir.

// Ornek :

// int x = 5;
// printf("%d",x) -- >> Ekrana 5 degerini basar.

// %f -- >> float ve double deyerler icin format belirleyici olarak kullanilir.

// float f = 5.2 -- 5.200000 degerini ekrana basar.

// double d = 2.134 -- 2.134000 degerini ekrana basar.

// printf("%f %f",f,d)

// %c -- >> Charackter tipi icin printde format olarak kullanilir.

// char c1 = "hghj"

// printf("%c",c1)//Ekrana c1'i basar.

// printf("%c"c1)//Ekrana c1'i Ascii tabledeki  degerini basar

// %s -- >> Karkter dizileri icin kullanilir

// printf("%s","C++Proggraming")

//   */

//   //Examples :

//   //%d;

//   int x = 5;
//   printf("%d\n",x);

//   //%f:

//   float f = 5.2;
//   double d = 2.134;

//   printf("%f\n%f\n",f,d);//birinci hansi deyisenin adini versek o deyisen print olacaq.

//   //%c and %d
//   char cd = 'c' ;//Karakterlerde yazdigimiz yazinin sadece sonuncu karakteri cikarilir.Ve " bu yazilis kullanilamaz" onun yerine 'Bu yazilis kullanilir.'

//   printf("%c\n",cd);//Ekrana c'i basar.

//   printf("%d\n",cd);//Ekrana c'i Ascii tabledeki  degerini basar

//   //%s

//   printf("%s","C++Proggraming");


//   return 1;

	//(Example):



	int b = 42;
	char a = 66;//Desek bele bize o reqemin ASCII tabledeki qarsiligini a deyisenine menimsedecek.

	char a1 = 'B';
	float c = 4.1;
	double c1 = 0.21;
	printf("%d\n%c\n%c\n%f\n%f\n%s",b,a,a1,c,c1,"Gorev tamamlandi\n");//Bosluq mutleq format lar arasinda qoyulmalidir.

	//%.1f formatindan istifade etsek noqteden sonra sadece 1 ededoi gosderecek qisacasi yuvarlasdiracaq.

	printf("%.1f",c);//desek 4.100000 deil 4.1 cixacaq %.2f desek 4.10 vs.

	//%10d formatindan istifade etsek 10dene bosluq ve deyeri print edecek

	printf("%10d %.3f\n",b,c1);
	
	//Tiplerin bytenin oyrenilmesi
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(long));
	printf("%d byte\n",sizeof(short));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	printf("%20d byte\n",sizeof("dmnmdfn"));


	return 0;


}




