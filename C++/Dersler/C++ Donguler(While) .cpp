#include <stdio.h>



int main(){
	
	
	
	/*
	DONGULER
	
	dongu baslatma
	
	while(kosul){
	
		//Body
	
	
	
		artirma 
	}
	//Kosul true ise donguye girer , false ise donguye girmez islemleri sonlandirir.
	
	
	
	*/
	
	//Ornek :
	
	int i;
	
	i = 1;
	
//	while (i<10) {
//		
//		printf("%d - Hello World !\n",i);
//		
//		i +=1 ; // ve ya  i++ 
//		 
//	
//	}
//	printf("%d Dongu bitti",i);
	
	int f;
	int fact = 1;
	
	printf("\nFaktorial istediyiniz sayi : ");
	scanf("%d",&f);

	while (f != 0) {
		
		fact = fact * f;
		
		f--;
		
	}
	printf("\nFaktorial -- %d",fact);
	
	
	
	return 0;
}
