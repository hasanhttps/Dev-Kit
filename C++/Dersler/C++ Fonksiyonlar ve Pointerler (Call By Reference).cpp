#include<stdio.h>


void degerdegistir(int *a,int *b){
    
    int gecici = *a;//5

    *a = *b;//10
    
    *b = gecici;//5
}

int main(){
    //CALL BY REFERENCE

    int x = 5,y = 10;

    degerdegistir(&x,&y);//biz fonksiyonda a'ya ve b'ye parametre olarak pointer dahil etmek istedigimiz icin dogal olarak degiskenin & isareti ile degiskenin adresini almaliyiz.
    //aldigimiz degeri ise diger baska bir degiskene adresi verib degiskeni pointer yapmak icin *a ve *b isaretini kullaniyoruz.

    printf("Degerdegistir :\nx : %d\ny : %d\n",x,y);

    

    return 0;
}