#include<stdio.h>



void degerdegistir(int a,int b){

    //a ve b local degiskenlerdir. Fonksiyon bittigi zaman ramden silinir.
    

    int gecici = a;//5

    a = b;//10
    
    b = gecici;//5

    printf("%d -- a\n%d -- b\n",a,b);

}



int main(){

    int x = 5,y = 10;

    degerdegistir(x,y);

    printf("Degerdegistir : x : %d\ny : %d\n",x,y);


    return 0;
}

//Bu islem call by value islemidir cunki x ve y degismedi.
