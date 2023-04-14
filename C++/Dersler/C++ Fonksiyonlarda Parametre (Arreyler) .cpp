#include<stdio.h>

//PARAMETRE OLARAK ARREYLER


//Tek Boyutlu arreyin fonksiyonda pareamtere olarak belirtmek icin ;

//int carp(int matris[],int size){
//	//Yuxaridaki kimi parametre olaraq arreyi belirtdikde fonksiyon c terefinden duzgun anlanilmayacaq.Bunun ucun yazilimci arreyin boyutunu girmelidi.
//	int i;
//	int carpma = 1;
//	
//	for(i = 0 ; i < size ; i++){
//		carpma *= matris[i];
//	}
//	//printf("%d",carpma);
//	return carpma;
//}

//int main(){
//	
//	int arrey[5]={2,2,2,2,2};
//	
//		
//	printf("%d",carp(arrey,5));
//	
//	return 0;
//}



//Cok Boyutlu arreylerin parametre olarak fonksiyonlara goinderilmesi ;

void bastir(int matris[][4], int size) {
	//Cift boyutlu arreylerde matrisin ikinci parametresi belirtilmek zorundadir ilk parametresini ise yazilimci size deyiskeni ile girrmelidir.
	int k;
	int y;

	for (k = 0; k < size; k++) {
		for (y = 0; y < 4; y++) {
			printf("%d ", matris[k][y]);
		}
		printf("\n");
	}
}



int main() {

	int matris[3][4];

	int i, j;

	printf("Matrisi doldurunuz : ");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &matris[i][j]);
		}
	}
	bastir(matris, 3);


	return 0;
}
