#include<stdio.h>



int main(){
	/*
	1. Ededin c�t ve ya tek olmasini teyin eden program yazin.
	*/
	
//	int eded;
//	
//	while (true){
//		printf("Eded daxil edin : ");
//		scanf("%d",&eded);
//		
//		
//		if (eded % 2 == 0){
//			
//			printf("Eded cutdur !\n");
//		}
//		else{
//			
//			printf("Eded tekdir !\n");
//		}
//}
	
	/*
	2. Iki eded daxil edin onlardan ki�ik olani ekrana �ixarin.( 41,42 - Ekrana -
	Ki�ik eded 41'dir.)
	*/
	

//	int eded_1;
//	int eded_2;
//	
//	
//	printf("1.ci Ededi daxil edin : ");
//	scanf("%d",&eded_1);
//	printf("2.ci Ededi daxil edin : ");
//	scanf("%d",&eded_2);
//	
//	if (eded_1 > eded_2){
//		
//		printf("Kicik eded %d\'dir.",eded_2);
//	}
//	else if (eded_2 == eded_1){
//		printf("Ededler beraberdirler.");
//	}
//	else{
//		printf("Kicik eded %d\'dir.",eded_1);
//	}


	
	/*
	3. Daxil edil?n ?d?din m?nfi v? ya m�sb?t olmasini t?yin ed?n program
	yazin. ( 0 halini da n?z?r? alin)
	*/
	
	
//	int eded;
//	
//	printf("Ededi daxil edin : ");
//	scanf("%d",&eded);
//	
//	
//	if (eded < 0){
//		
//		printf("Eded menfidir !");
//	}
//	else if (eded == 0){
//		
//		printf("Eded ne menfi ne musbetdir eded 0\'dir.");
//	}
//	else{
//		printf("Eded musbetdir !");
//	}
	
	
	/*
	4. Kalkulyator d�z?ltm?li. Iki k?sr ?d?d daxil edilir a v? b. Ekrana se�iml?r
		�ixir
		1) a + b
		2) a � b
		3) a * b
		4) a / b
		Se�il?n r?q?m? ?sas?n, n?tic? ekrana �ixir.
	
	*/
	
	
//	while (true){
//
//	
//		float a;
//		float b;
//		char operation;
//		
//		
//		
//		
//		printf("1.ci ededi daxil edin : ");
//		scanf("%f",&a);
//		printf("2.ci ededi daxil edin : ");
//		scanf("%f",&b);
//		
//		printf("Operasiya daxil edin : ");
//		scanf("%s",&operation);
//		
//		if (operation == '+'){
//			printf("Cavab : %f\n",a+b);
//		}
//		else if(operation == '*'){
//			printf("Cavab : %f\n",a*b);
//		}
//		else if(operation == '-'){
//			printf("Cavab : %f\n",a-b);
//		}
//		else if (operation == '/'){
//			printf("Cavab : %f\n",a/b);
//		}
//		else{
//			printf("Zehmet olmasa duzgun operator daxil edin !");
//		}
//	}
	
	
	/*
	5. Istifad?�i ?d?d daxil edir, ?d?din 1-50 araliginda olub olmadigini yoxlayan
	program yazin.
	*/

	
//	int eded;
//	
//	printf("Eded daxil edin : ");
//	scanf("%d",&eded);
//	
//	
//	if (eded < 50 and eded >= 1){
//		printf("Eded araliq daxilindedir!");
//	}
//	else{
//		printf("Eded araliq daxilinde deil!");
//	}
	
	
	/*
	6. Istifad?�i iki ?d?d daxil edir. ( X v? Y ) ?g?r X Y-? qaliqsiz b�l�n�rs?
	ekrana Yes �ixir, ?ks halda No.
	*/
	
	
//	int x;
//	int y;
//	
//	printf("X'i daxil edin : ");
//	scanf("%d",&x);
//	printf("Y'i daxil edin : ");
//	scanf("%d",&y);
//	
//	
//	if (x % y == 0){
//		printf("Yes");
//	}
//	else{
//		printf("No");
//	}


	/*
	7. Istifad?�i ?d?d daxil edir. Onun 3-?, 5-?, 7-? b�l�n�b b�l�nm?m?sini
	(qaliqsiz) yoxlayin. (Ayri-ayri)
	*/
	
	
//	int eded;
//	
//	
//	printf("Eded  daxil edin : ");
//	scanf("%d",&eded);
//	
//	
//	if (eded % 3 == 0){
//		printf("3'e bolunur!");
//	}
//	else if (eded % 5 == 0){
//		printf("5'e bolunur!");
//	}
//	else if (eded % 7 == 0){
//		printf("7\'e bolunur!");
//	}
//	else{
//		printf("Hec birine bolunmur!");
//	}


	
	/*
	8. ?d?din modulunu hesablayan program yazin.
	*/
	
	
	int eded;
	int modul;
	
	
	printf("Ededi daxil edin : ");
	scanf("%d",&eded);
	
	
	if (eded < 0){
			modul = (-eded);

	}	
	else if(eded > 0){
			modul = (+eded);

	}
	else{
				modul = 0;

	}
	printf("Ededin modulu : %d",modul);	
	
	return 0;
}











