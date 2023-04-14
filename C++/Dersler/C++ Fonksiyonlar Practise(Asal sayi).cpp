#include<stdio.h>


//void asal_sayi(int number){
//	
//	int count = 1;
//	int check_isdigit = 0;
//	
//	while (true) {
//		
//		if (number % count == 0) {
//			check_isdigit ++;
//		}
//		if (number == count){
//			break;
//		}
//		count ++;
//	
//	}
//	if (check_isdigit == 2){
//		printf("Sayi asal sayidir");
//	}
//	else{
//		printf("Sayi asal degildir!");
//	}
//}
//
//int main(){
//	
//	/*
//	Asal sayi mi degil mi ? 
//	
//	Asal sayi 2'den kendisine kadar olan sayilardan hicbirine bolunmeyensayidir.
//	*/
//	
//	int num;
//	
//	printf("Sayi giriniz : ");
//	scanf("%d",&num);
//	
//	asal_sayi(num);
//	
//	
//	
//	
//	return 0;
//}

// 2CI HELL ***

int asalmi(int sayi){
	int count = 0;
	int i;
	for (i = 2 ; i < sayi ; i++){
		if (sayi % i == 0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int num;
	printf("Sayi giriniz : ");
	scanf("%d",&num);
	if (asalmi(num) == 0){
		printf("Sayi asal degildir!");
	}
	else{
		printf("Sayi asaldir");
	}
	
	return 0;
}
