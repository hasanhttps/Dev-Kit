#include<stdio.h>



int main() {
	
	//deyisen yaradarken isdesek hamisini bir setirde yarada bilerik .
	
	//example: 
	//    int a,c,b,d;
	
	
	
	
//1. ?ki r?q?m daxil edilir, onlar?n ?d?di ortas?n? tapan proqram yaz?n.

	/*
	int eded_1;
	int eded_2;
	float edediorta;
	
	printf("Birinci ededi daxil edin : ");
	scanf("%d",&eded_1);
	printf("Ikinci ededi daxil edin : ");
	scanf("%d",&eded_2);
		
	edediorta = (eded_1+eded_2)/(float)2;
	
	printf("Verilenlerin ededi ortasi %.1f\'dir",edediorta);
	*/
	
	//2. i?stifad?�i a v? b-ni daxil edir, ax+b=0 t?nliyini hesablay?b x-i tapan proqram yaz?n. 
	
//	int a;
//	int b;
//	float x;
//	
//	
//	printf("A\'ni daxil edin : ");
//	scanf("%d",&a);
//	printf("B\'ni daxil edin : ");
//	scanf("%d",&b);
//	
//	x = (float)b/a ;
//	
//	printf("ax + b=0 tenliyine esasen x %f\'e beraberdir.",x);
//	

	//3. ?stifad?�i r?q?m daxil edir, r?q?min kubunu tapan proqram yaz?n.
	
//	int reqem;
//	int kub;
//	
//	
//
//	printf("Kubunu tapmaq istediyiniz reqemi daxil edin : ");
//	scanf("%d",&reqem);
//	
//	kub = reqem * reqem * reqem;
//	
//	printf("Daxil edilmish ededin kubu %d\'dir.",kub);
//	


	/*
	4. D�zx?tli b?rab?rs�r?tli h?r?k?tl? gedil?n m?saf?ni n�vb?ti d�sturla hesablay?n: S = v*t + (a*t 2 )/2, burada v - s�r?t,  t - zaman, ? - t?cildir. (istifad?�i a,t,v-ni daxil edir)
	*/
	
//	float a;
//	float t;
//	float v;
//	float S;
//	
//	printf("Tecili daxil edin : ");
//	scanf("%f",&a);
//	printf("Zamani daxil edin :");
//	scanf("%f",&t);
//	printf("Sureti daxil edin : ");
//	scanf("%f",&v);
//	
//	S = v*t + (a*t*t )/2 ;
//	
//	printf("Gedilen mesafe %.2f",S);

	//5. ?stifad?�i Dollar?n miqdar?n? daxil edir. Bunu manata �evir?n proqram yaz?n. 
	
//	# define dollar 1.73
//	
//	float azn;
//	float casting;
//	
//	printf("Dollarin miqdarini daxil edin : ");
//	scanf("%f",&azn);
//	
//	casting = azn * dollar;
//	
//	printf("%f dollar %f manat edir.",azn,casting);
	
	//6. Mili kilometr? �evir?n proqram yaz?n. Bir mil - 1.609 km. 
	
//	#define kilometr 1.609
//	
//	float mil;
//	float casting;
//	
//	printf("Mili daxil edin : ");
//	scanf("%f",&mil);
//	
//	casting = mil * kilometr;
//	
//	printf("%.1f mil %.3f kilometre beraberdir.",mil,casting);

	//7. ?stifad?�i klaviaturadan aeroporta q?d?r olan m?saf?ni v? onun bu m?saf?ni q?t etm? m�dd?dini  daxil edir. Onun getm? s�r?tini hesablay?n. 
	
//	float mesafe;
//	float zaman;
//	float suret;
//	
//	printf("Mesafeni daxil edin : ");
//	scanf("%f",&mesafe);
//	printf("Muddeti daxil edin : ");
//	scanf("%f",&zaman);
//	
//	suret = mesafe / zaman ; 
//	
//	printf("%f Mesafelik yolu siz %f suretle qett etmisiniz .",mesafe,suret);
//	


	//8. N ?d?dinin F faizini tapan proqram yaz?n. (F v? N istifad?�i daxil edir)  
	
//	float n;
//	float faiz;
//	float calculate;
//	
//	printf("Ededi daxil edin : ");
//	scanf("%f",&n);
//	printf("Nece faiz isteyirsinizse daxil edin : ");
//	scanf("%f",&faiz);
//	
//	
//	calculate = faiz * (n/100) ;
//	
//	printf("%.1f ededinin %.1f faizi %.1f \'e beraberdir.",n,faiz,calculate);
//	
	
	//9. �evr?nin uzunlu?u istifad?�i t?r?find?n daxil edilir. �evr?nin diametrini tapan proqram yaz?n.
	
//	#define PI 3.14
//	
//	float uzunluq;
//	float radius;
//	float diametr;
//	
//	
//	printf("Cevrenin uzunlugunu daxil edin : ");
//	scanf("%f",&uzunluq);
//	
//	radius = uzunluq / (2.0*PI);
//	diametr = radius * 2 ;
//	
//	
//	printf("Cevrenin diametri %f dir",diametr);
//	

	//10. ?stifad?�i konsertin biletinin qiym?tini v? konsert? ged?c?k b�y�kl?rin v? u?aqlar?n (ayr?-ayr?) say?n? daxil edir. �mumi x?rcl?n?c?k m?bl??i ekrana �?xar?n. (U?aqlara bilet 40faiz ucuzdur)
	
//	float konsert_bilet;
//	float konsert_boyuk;
//	float konsert_kicik;
//	float usaq;
//	float boyuk;
//	float umumi;
//	
//	
//	printf("Konsertin biletinin qiymetini daxil edin : ");
//	scanf("%f",&konsert_bilet);
//	printf("Boyuklerin sayini daxil edin : ");
//	scanf("%f",&konsert_boyuk);
//	printf("Kiciklerin sayini daxil edin :  ");
//	scanf("%f",&konsert_kicik);
//	
//	usaq = (konsert_kicik *  konsert_bilet) - (konsert_kicik * 0.4 * konsert_bilet);
//	boyuk = konsert_boyuk * konsert_bilet ; 
//	umumi = boyuk + usaq;
//	
//	printf("Umumi xerc %f manat deyerindedir.",umumi);
//	
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}

















