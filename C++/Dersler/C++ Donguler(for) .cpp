#include<stdio.h>



int main(){
	
	
	int i;
	
	for (i=0;i<10;i++){
	
	//Ilk once ilk parametr olaraq dovre hansi ededle baslayacagini teyin edirik .Ikinci parametr olaraq necenci edede kimi davam edeceyini teyin edirik.Ucuncu parametr olaraaq nece -nece artacagini ve ya azalacagini teyin edirik.
	printf("%d\n",i);
		
	}
	
	int n = 0;
	
	while (n<10){
		n++;
		printf("%d\n",n);
		
		
	}
	
	int f;
	int j;
	
	for (f=0;f<10 && j < 5;f++,j++){
	
	//Isdesek iki deyisen ile for yaza bilerik bu zaman ikinci parametre isdeye uygun olaraq && ve ya ||(or) istifade edeceyik .Ucuncu parametrde ise birinci deyisen ve ikinci deyisen arasina vergul qoyulur.
	
	printf("F -- %d\n",f);
	printf("J -- %d\n",j);
		
	}
	
	int g;
	int h;
	
	
	//Nested For
	
	for (g=0; g < 10 ; g++){
		
		for (h = 0 ; h < 5 ; h++){
			
			printf("G -- %d H -- %d \n",g,h);
			
			
		}
		printf("\n\n ----------- \n\n");
		
	}
	
	
	return 0;
}
