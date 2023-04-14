#include<stdio.h>




int main(){
//	/*
//	1.	Istifadeçi iki kesr eded daxil edir. Onlaren tam ve kesr hisselerinin cemini tapin. 
//	( Meselen : 1.5 ve 3.2 - Tam hisse cemi 4 , kesr hisse cemi 0.7 edir.) 
//
//	*/
//	
//	//Birinci hell
//	
//	float eded_1;
//	float eded_2;
//	int tam;
//	float kesr;
//	
//	
//	printf("Birinci Kesr ededi daxil edin : ");
//	scanf("%f",&eded_1);
//	printf("Ikinci Kesr ededi daxil edin : ");
//	scanf("%f",&eded_2);
//	
//	tam = (int)eded_1 + (int)eded_2;
//	kesr = (eded_1 - (int)eded_1) + (eded_2 - (int)eded_2);
//	
//	printf("Ededlerin Tam sekilde cemi -- %d\nEdedlerin Kesr seklinde cemi -- %.1f edir.\n",tam,kesr);
//	
//	//Ikinci hell
//	
//	float cem;
//	
//	cem = eded_1 + eded_2;
//	
//	printf("Ededlerin tam sekilde cemi -- %d\nEdedlerin kesr seklinde cemi -- %.1f edir.\n",(int)cem,(eded_1 - (int)eded_1) + (eded_2 - (int)eded_2));

	
	
	/*
	2.	Istifadeçi sahib oldugu pulu daxil edir (Kesr halda: meselen 15.30).
	    Istifadeçinin neçe manat ve neçe qepiyi oldugunu ekrana çixarin. ( Ekrana 15 manat, 30 qepik çixmalidir.)
	*/
	
//	float money;
//	int qepik_money;
//	
//	printf("Sahib oldugunuz pulu daxil edin : ");
//	scanf("%f",&money);
//	
//	
//	qepik_money = (int)(100 * (money - (int)money));
//	
//	printf("%d manat , %d qepik pulunuz var.",(int)money,qepik_money);
	
	
	/*
	3.	Istifadeçi kütleni tonla daxil edir (Kesr eded). Ekrana ton,kiloqram,qram halinda çixarin.
		(Meselen 126.456789 Ton, Ekrana 126 Ton, 456 kq, 789 q çixmalidir.)
	*/
	
//	float ton;
//	int kilo;
//	int qram;
//	float calculate;
//	
//	
//	
//	printf("Kutleni Tonla daxil edin : ");
//	scanf("%f",&ton);
//	
//	calculate = ton - (int)ton;//0.456789
//	
//	kilo =(int)( 1000 * calculate) ;//456
//	
//	calculate = 1000 * calculate;
//	
//	calculate = calculate - (int)calculate;//0.789
//	
//	qram =(int)( 1000 * calculate);
//	
//	printf("Cism %d Ton, %d Kilo , %d qram\'dir.",(int)ton,kilo,qram);
	
	
	/*
	4.	Istifadeçi bir notebookun qiymetini, almaq istediyi sayi, ve endirim faizini daxil edir. 
	Program ekrana ümumi sifarisin neçe AZN olacagini çixarir.
	*/
	
//	int notebook_qiymet;
//	int count_notebook;
//	int sale_degree;
//	float calculate_price;
//	
//	
//	printf("Notebookun qiymetini girin : ");
//	scanf("%d",&notebook_qiymet);
//	printf("Notebookun sayini girin : ");
//	scanf("%d",&count_notebook);
//	printf("Notebookun endirimini girin : ");
//	scanf("%d",&sale_degree);
//	
//	calculate_price = (notebook_qiymet * count_notebook) / 100 *sale_degree;
//	
//	calculate_price = notebook_qiymet * count_notebook - calculate_price;
//	
//	
//	printf("Umumi sifaris %.2f AZN olacaqdir.",calculate_price);


	/*
	5.  Istifadeçi flas drive-in gigabayt ile ölçüsünü daxil edir. 760 Megabaytliq kinonun hemin flasa neçe defe yerleseceyini tapan program yazin.
	*/
	#define kino 760.0
	
	
//	int gigabayt;
//	float count;
//	
//	printf("Flas drivenin olcusunu daxil edin : ");
//	scanf("%d",&gigabayt);
//	
//	count =  (gigabayt * 1040) / kino;
//	
//	printf("Kino flas drivenin icerisine %f defe yerleser.",count);
	
	
	/*
	6.	Istifadeçi imtahani ugurla veren telebelerin sayeini ve borclularin(imtahani vermeyenlerin) sayini daxil edir. 
	Sinifin neçe faiz borclulardan ve neçe faiz ugurlu telebelerden ibaret oldugunu hesablayan program yazin.
	*/
//	
//	int imtahan_ugur;
//	int imtahan_borc;
//	float borc_faiz;
//	float ugur_faiz;
//	
//	
//	printf("Imtahanda ugurlu olan telebelerin sayini daxil edin : ");
//	scanf("%d",&imtahan_ugur);
//	printf("Imtahanda borclu olan telebelerin sayini daxil edin : ");
//	scanf("%d",&imtahan_borc);
//	
//	
//	borc_faiz = (imtahan_borc * 100)/ (float)(imtahan_borc + imtahan_ugur);
//	
//	ugur_faiz = 100 - borc_faiz;
//	
//	printf("Borclular %.2f faiz teskil ediller.Ugurlular %.2f faiz teskil edillerr.",borc_faiz,ugur_faiz);
//	
	
	
	
	
	
	
	
	return 0;
}
























