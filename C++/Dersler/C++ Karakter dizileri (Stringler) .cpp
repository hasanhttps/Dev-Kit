#include<stdio.h>




int main(){
	
//	
//	"Hasan"//Stringdir
//	"Yazilim Bilimi"//C++ 'da aslinda string diye bi sey yoktur.Charakter arreylerinden olusan yapi pythonda adi verilen stringdir.Kisacasi string diye biliriz.
//	

	//Strin olusturmak icin char arreyi olusturmak gerek;
	//ORNEK:
	
	
	char isim[] = "HASAN";
	
	/*
	Bellek bu stringi bu sekilde gorur;
	
	"H"
	"A"
	"S"
	"A"
	"N"
	
	Bu yuzden stringin 1 'ci indeksini bastirirsak , "A" harfi bellekden cikarilir ve ekrana bastirilir. 
	
	*/
	
	printf("%c",isim[1]);//%c Charakter bastirmak icin kullanilan formatdir.
	
	
	char isim_1[5];//Yeni bir arrey olusturdugumuz zaman eyer hangise bir deyere ataamazsak boyutunu mutlaka [] icerisinde belirtmeliyizdir c++'da otomatik olarak arreyin boyutu belirlenemez.
	
	
	//Yeni olusturdugumuz arreyin boyutunu belirledikten sonra arreyin boyutu kadar ramde bos yerler ayrilir ama icerileri bos olur onlari doldurmak icin atama gereklidir;
	//ORNEK:
	
	int i;
	

	printf("Isminizi giriniz : ");
	
	scanf("%s",isim_1);//Char arreyleri icin format belirleyicimiz %s'dir.Herhangise bir deyeri eyere bir char arreyine atarsak mutlaka format olarak %s kullanmaliyiz. &(Ampersant)isaresini koymaya gerek yoktur.
	//Karakter dizilerini aldigimiz zaman basina & isareti koymaya gerek yoktur.
	
		
	//scanf -- >> Printfden gelen deyerde eyere bosluk(space) varsa bu zaman bosluk olan yere kadar olan yazini aliyor ve verdiyimiz deyiskene atiyor.Ornek:Hasan Abdullazade dersek bu zaman deyiskenimize onu Hasan olarak yazaacaktir. 

	printf("Isminiz : %s",isim_1);

	
	
	
	return 0;
}
