#include <stdio.h>

//Practics 
//Fibonacchi serisi

int main(){
	//Task 1
	
	int ilksayi = 1;
	int ikincisayi = 1;
	int d;
	int i;

	
	for (i = 0;i < 22;i++){
		printf("%d\n",ilksayi);//1 ve 1
		d = ikincisayi + ilksayi;//
		ilksayi = ikincisayi;// ilksayi = 1
		ikincisayi = d;//ikinci = 2
		
		
	}
	
	
	
	
	return 0;
}
