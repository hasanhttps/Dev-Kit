#include<stdio.h>


int main(){
//     /*
//     1. while-dan istifadə edərək, valyuta mübadiləsi, kalkuyator,
//     mili kilometrə çevirən programları sonsuz dövrə salın.
//     */
//     while (true){
//         int secim;

//         printf("Secim edin :\n[1] -- Kalkulyatr\n[2] -- Valyuta\n[3] -- Mil to Km   :   ");
//         scanf("%d",&secim);
//         printf("\n\n\n");
        
//         switch (secim){
//         case 1:
//             float a;
//             float b;
//             char operation;
            
            
            
            
//             printf("1.ci ededi daxil edin : ");
//             scanf("%f",&a);
//             printf("2.ci ededi daxil edin : ");
//             scanf("%f",&b);
            
//             printf("Operasiya daxil edin : ");
//             scanf("%s",&operation);
            
//             if (operation == '+'){
//                 printf("Cavab : %f\n",a+b);
//             }
//             else if(operation == '*'){
//                 printf("Cavab : %f\n",a*b);
//             }
//             else if(operation == '-'){
//                 printf("Cavab : %f\n",a-b);
//             }
//             else if (operation == '/'){
//                 printf("Cavab : %f\n",a/b);
//             }
//             else{
//                 printf("Zehmet olmasa duzgun operator daxil edin !\n");
//             }
        
//             break;
//         case 2:
//             int valyuta_secim;
//             #define azn_dollar 0.59
//             #define dollar_azn 1.7
//             #define rubl_azn 0.03
//             #define azn_rubl 33.82
//             #define tl_azn 0.098
//             #define azn_tl 10.19


//             printf("[1] -- Dolar to azn\n[2] -- Azn to dollar\n[3] -- Rubl to azn\n[4] -- Azn to Rubl\n[5] -- Lira to azn\n[6] -- Azn to lira\nSecim edin :");
//             scanf("%d",&valyuta_secim);

//             switch (valyuta_secim){
//             case 1:
//                 float dollar;
//                 float dolar_toazn;

//                 printf("(Dolar to azn)Dolar daxil edin : ");
//                 scanf("%f",&dollar);

//                 dolar_toazn = dollar * azn_dollar;

//                 printf("%.1f Dollar %.2f Azn'dir.\n",dollar,dolar_toazn);

//                 break;
//             case 2:
//                 float azn;
//                 float azn_todollar;

//                 printf("(Azn to dollar) Azn meblegi daxil edin : ");
//                 scanf("%f",&azn);
                
//                 azn_todollar = azn * dollar_azn;

//                 printf("%.1f Azn %.2f Dollar'dir.\n",azn,azn_todollar);

//                 break;
//             case 3:
//                 float rubl;
//                 float rubl_toazn;

//                 printf("(Rubl to Azn ) Rubl meblegi daxil edin : ");
//                 scanf("%f",&rubl);

//                 rubl_toazn = rubl * rubl_azn;


//                 printf("%.1f Rubl %.2f Azn'dir.\n",rubl,rubl_toazn);

//                 break;
//             case 4:
//                 float azn_torubl;

//                 printf("(Azn to Rubl) Azn meblegi daxil edin : ");
//                 scanf("%f",&azn);                

//                 azn_torubl = azn * azn_rubl;

//                 printf("%.1fAzn %.2f Rubl'dur.\n",azn,azn_torubl);

//                 break;
//             case 5:
//                 float tl;
//                 float tl_toazn;

//                 printf("(Tl to Azn ) Tl meblegi daxil edin : ");
//                 scanf("%f",&tl);

//                 tl_toazn = tl * tl_azn;

//                 printf("%.1f Tl %.3f Azn'dir.\n",tl,tl_toazn);

//                 break;
//             case 6:
//                 float azn_totl;

//                 printf("(Azn to Tl) Azn meblegi daxil edin : ");
//                 scanf("%f",&azn);

//                 azn_totl = azn * azn_tl;

//                 printf("%.1f Azn %.3f Tl'dir.",azn,azn_totl);

//                 break;

//             default:
//                 break;
//             }
//             break;

//         case 3:
//             	#define kilometr 1.609
            	
//             	float mil;
//             	float casting;
            	
//             	printf("Mili daxil edin : ");
//             	scanf("%f",&mil);
            	
//             	casting = mil * kilometr;
            	
//             	printf("%.1f mil %.3f kilometre beraberdir.",mil,casting);


//             break;
//         default:
//             break;
//         }
    
//     }
//     return 0;
// }

    /*
    2. Klaviaturadan 10 tam ədəd daxil edilir, mənfi ədədlərin
    faizini, müsbət ədədlərin faizini və 0-ların faizini tapın.
    */
//    int zero_count = 0;
//     int menfi_count = 0;
//     int musbet_count = 0;
//     int eded = 0;
//     int daxil;

//     while (eded < 10){
//         printf("Eded daxil edin : ");
//         scanf("%d",&daxil);
//         if (daxil > 0){
//             musbet_count++;
//         }
//         else if(daxil < 0){
//             menfi_count++;
//         }
//         else if(daxil == 0){
//             zero_count++;
//         }

//         eded++;
//     }

//     printf("Daxil edilmis ededlerin orantisi \n%d% musbet,%d% menfi,%d% sifir vardir. ",musbet_count*10,menfi_count*10,zero_count*10);

    /*
    3.Klaviaturadan 10 tam ədəd daxil edilir. Cütlərin və 
    təklərin neçə faiz olduğunu hesablayan proqram yazın.
    */
    

//     int eded;
//     int i = 1;
//     int cut_count = 0;
//     int tek_count = 0;


//     while (true){

//         printf("Zehmet olmasa eded daxil edin : ");
//         scanf("%d",&eded);
        
//         if (eded % 2 == 0){
//             cut_count++;
//         }
//         else{
//             tek_count++;
//         }
//         if (i == 10){
//             break;
//         }
//         i++;
//     }

//     printf("Daxil edilmis ededlerin orantisi \n%d  Cut ve %d  tek'dir. ",cut_count*10,tek_count*10);





/*
4.İstənilən ədədin polindrom olub olmamasını yoxlayan 
proqram yazın.
*/

//     int eded;
//     int gecici;
//     int evvel;
//     int eded_son = 0;
//     int i = 0;

//     printf("Eded daxil edin : ");
//     scanf("%d",&eded);
//     evvel = eded;
// //12321
//     while (eded != 0){

//         gecici = eded % 10;//1 2 3 2 1
//         eded_son += gecici;//1 10 12 120 123 1230 1232
//         eded_son *= 10;//10 120 1230 12320
//         eded /= 10;//1232 123 12 1

//     }
//     eded_son /=10;
//     if (eded_son == evvel){
//         printf("Eded polindromdur!");
//     }
//     else{
//         printf("Polindrom deil");
//     }

    return 0;
}