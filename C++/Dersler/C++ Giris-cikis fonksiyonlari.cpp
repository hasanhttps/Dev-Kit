#include<stdio.h>//Standart input output kutuphanesidir,PRINTF(output) -- SCANF(input)
#define PI  3.14//Pi sayisi tanimlamaq ucun sabit deyeri C++'da #define variable = value seklindeyazaraq lazim olduqda istifade 
//ede bilerik.


int main(){
	
	int yarimcap;
	float hacim;
	
	printf("Kurenin yari capini giriniz : ");
	scanf("%d",&yarimcap);//&(ampersant) isatreti istifadesinin daxil etdiyi deyeri deyisene menimsetmey ucun istifade olunur.
	
	hacim = (4/3.0)*PI*(yarimcap*yarimcap*yarimcap);
	printf("Kurenin hacmi -- %f'dir\'",hacim);
	
	
	
	
	return 0;
}
