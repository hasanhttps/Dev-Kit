//Half note Software Task


#include <stdio.h>



int main() {
	
	int vize1;
	int vize2;
	int final;
	int dersorta;
	float ortalama;
	
	
	
	printf("1.ci vize notunuzu giriniz : ");
	scanf("%d",&vize1);
	printf("2.ci vize notunuzu girin : ");
	scanf("%d",&vize2);
	printf("Final notunuzu girin : ");
	scanf("%d",&final);
	printf("Ortalama notunuzu girin : ");
	scanf("%f",&ortalama);//.2f ve ya .eded f etmek olmaz yoxsa bize 0.00 return edecek
	
	
	
	dersorta  =  (vize1+vize2+final) / 3 ;
	
	if (dersorta >= 60){
		
		printf("dersi gectiniz !");
		
	}
	else if (dersorta < 60 and dersorta > 50){
		
		printf("Bute kaldiniz !");
		
		if (ortalama < 2.6){
			
			printf("Bute kaldiniz ama gelecek yil basvurmanizi oneririrz , cunki ders oretalaminiz kotu . ORTALAMA %.1f",ortalama);
			
		}
	}
	
	else {
		
		
		printf("Kaldiniz !");
	}
	
	
	return 0;
}

