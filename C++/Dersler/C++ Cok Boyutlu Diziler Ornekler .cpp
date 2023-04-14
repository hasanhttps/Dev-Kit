#include<stdio.h>




int main(){
	
	int matris[3][5];
	int i,k;
	int toplam;
	
	
	for (i = 0;i < 3;i++){
		for(k = 0 ; k < 5; k++){
			scanf("%d",&matris[i][k]);
		}
		printf("\n");
	}
	
	for (i = 0;i < 3;i++){
		for(k = 0 ; k < 5; k++){
			printf("%d ",matris[i][k]);
		}
		printf("\n");
	}
	printf("\n");
	

	for (k = 0;k < 5;k++){
		for (i = 0;i < 3;i++){
			toplam += matris[i][k];//12
		}
		printf("%d ",toplam);
		toplam = 0;
	}
	
	
	return 0;
}
