#include<stdio.h>



int main() {
	/*
	DONGULER	
	
	Donguyu Baslatma
	
	do {
		
		islemler
	
    }
    while (kosul);
    
    
	
	
	
//	*/
//	int n = 0;//Do while'nin cox isledilmemem sebebi qeribe is prinsibidir.Donu yoxlayib sonra serti yoxladigi ucun sef netice cixardir sertde 0 'a berabare iolamsin demeyimize ragmen variable eger 0 dirsa islemeler birinci icra edilecek daha sonra sert oxunacaq.
//	
//	do{
//		
//	printf("%d\n",n);
//	
//	n--;
//	
//	}
//	while (n > 0);
	
	//Example : 
	
	int n;
	int sum = 0;
	int say = 0;
	
	printf("4 haneli rakami giriniz : ");//1234
	scanf("%d",&n);
	
	
	do {
		sum += (n % 10);//4
		
		
		say++;
		n = n / 10;
	}
	while (n > 0);
	printf("Say %d\n",say);
	printf("Rakam %d",sum);
	
	
	
	return 0;
}
