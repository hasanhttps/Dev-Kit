#include<stdio.h>

//POINTER

/*
Pointer -- Gosterici;

Pointer bir tane bellek yeri gosterir;

her ram ayni sekilde tasarlanmisdir;

her bellekde 1 baytlik kutucuklar vardir ve her birinde adresleri vardir;

****  SEKILLI DOSYA ADI : Pointer (Ram).png   *****; 

*/

int main(){

    int i = 5;

    int j;

    scanf("%d",&j);//& (Ampersant) -- degiskenin'nin adresini bilgisini alinmasina yarar.Scanf le alinan degeri bu degiskenin ramdaki yerine atar.


    //Pointerler tudugu degerin tipi ile ayni olmali;

    //Pointer olusturulmasi;

    int *p = &i;

    //Pointerler 2 byte alan kapsar;

    //Pointerin deyerini bastirmak icin %p formatini kullaniriz ;

    printf("%p\n",p);//%u 'da ayni sekilde pointeri bastirir.

    //& -- Degiskenin adres bilgisini veriyor ;
    //* -- adresdeki degeri verir;


    printf("%d\n",*p);//pointerin icerisindeki degerin adresine gider ve icindeki degeri alir.


    int k = 3,*ap;

    float b = 3.2,*bp;

    double c = 3.412,*cp;

    char d = 'a',*dp;

    int sayilar[5] = {1,2,3,4,5};

    int *arreyp;

    //& -- Adres operatoru;


    ap = &k;

    bp = &b;

    dp = &d;

    cp = &c;

    arreyp = &sayilar[1];

    printf("%u adresindeki intin degeri %d\'dir\n",ap,*ap);

    printf("%u adresindeki floatin degeri %f\'dir\n",bp,*bp);

    printf("%u adresindeki double'nin degeri %f\'dir\n",cp,*cp);

    printf("%u adresindeki charackterin degeri %c\'dir\n",dp,*dp);

    printf("%u adresindeki int'in degeri %d\'dir\n",arreyp,*arreyp);


    return 0;
}