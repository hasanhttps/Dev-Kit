#include <stdio.h>



int main(){
	
	//Switch - Case atm programlari kimi programlarda istifade edilir.Verdiyimiz edede gore bizi hemin funksiya blokuyna yonlendirir.her blokda break olmasa butun kaseleri oxuyub icra edecek ta ki basqa bir blokda break gorene qeder.
	
	//EXAMPLE
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	
	
	while (true) {
	//Gelecek ders .C++'da true Pythondan ferqli olaraq kicik yazilir . (true) -- C++ ; True -- Python . 
		printf("Islemeler\n[1] - Para cekme\n[2] - Para yatirma\n[3] - Bakiye sorgulama\n[4] - Kart iade\n\n\n");
		
		printf("Yukardaki islemlerden birisini secin : ");
		scanf("%d",&islem);
		
		switch(islem){
			case 1:
	
				
				printf("Bakiyeniz :	%d\n",bakiye);
				printf("Cekilecek tutar : ");
				scanf("%d",&tutar);
				if (tutar > bakiye){
					
					printf("Bakiyeniz yetmiyor");
				}
				bakiye -= tutar;
				printf("Bakiyeniz :	%d\n",bakiye);
				break;
			
			case 2:
				printf("Bakiyeniz :	%d\n",bakiye);
				printf("Yatirilacak tutar : ");
				scanf("%d",&tutar);
				bakiye += tutar;
				printf("Bakiyeniz :	%d\n",bakiye);
				break;
				
			case 3:
				printf("Bkiyeniz : %d\n",bakiye);
			
			case 4:
				printf("Kartiniz iade edildi");
			
			default:
				// yanlis secim edildikde icra edilecek kod blokudur.
				printf("Komut belirlenmedi");
				break;
		}
			
		
	}
	
	
	return 0;
}
