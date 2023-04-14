#include<stdio.h>





int main(){
	
	//Break -- Dovru qirir.
	
	
	int i;
	
	int toplam = 0;
	
	int say;
	
	for (i = 0;true;i++){
		
		printf("Say giriniz : (Cikmak icin 0'a basiniz)");
		scanf("%d",&say);
		
		if (say == 0){
			
			break;
		}
		printf("Salam hesen !\n");
		
		toplam +=say;
		
		
	}
	printf("%d",toplam);
	
	//Continue dovru novbeti iterasiyaya kecirir.
	
	
	
	
	
	return 0;
}
