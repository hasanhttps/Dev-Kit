#include<stdio.h>


int main(){

	//COK BOYUTLU DIZILER
	
	
	/*
	
	Matrisler:
	
		1  2  3
		4  5  6
		7  8  9
		
	Yukaridaki (3x3) Matrisdir.
	Cok boyutlu diziler matrislere oldukce benzerler.
	*/
	
	
	//Cok Boyutlu dizi olusturulmasi;
	
	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};//Eyer biz 3 satir yapmak istersek birinci parametre [3] eyer 3 sutun olsun istersek ikinci parametre [3] yazarak cok boyutlu dizimizi olustururuz.
	//Icine bir deyer girmek icin her satir icin {} (Suslu parantez) birakiriz.Suslu parantez acriktan sonra icerisine virgulle ayrilmis her biri ayri bir satiri temsil eden ,
	//{} suslu parantez acarak her birininde icerisine her bir sutunu temsil eden deyerler doldururuz.
	
	
	
	//Indeksler ayni zamanda bu arreyimizde bulunur .Satirlarin indeksi ilk yazilan ideksdir.Sutunlarin indeksi ise ikinci yazilan.
	
	printf("%d\n",matris[2][2]);//Indeksler 0 dan basladigi icin 2'ci indeks bize 3'cu satiri verir (7,8,9).Ikinci kez yazilan 2'ci indeks ise bize bu satirdaki 3'cu sutun olan 9'u verir.
	
	/*
		1  2  3
		4  5  6
		7  8  9 
	*/
	
	//Ekrana Matrisi Bu sekilde bastirmak icin;
	
	/*
	int i,j;//Iki deyiseni yan yana yarata biliriz.
	
	for (i = 0;i < 3;i++){
		for (j=0;j<3;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	*/
	
	//Matrisin icerisine bir sey yerlestirmek icin ;
	
	int k,f;
	
	for (k = 0;k < 3;k++){
		for (f = 0;f < 3;f++){
			scanf("%d",&matris[k][f]);
		}
		printf("\n");
	}
	
	int i,j;//Iki deyiseni yan yana yarata biliriz.
	
	for (i = 0;i < 3;i++){
		for (j=0;j<3;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	 
	

	return 0;
}
