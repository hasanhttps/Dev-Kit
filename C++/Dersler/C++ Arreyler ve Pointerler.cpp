# include<stdio.h>

int main(){
    int sayilar[5] = {1,2,3,4,5};
    
    int *p = sayilar;
    // $sayilar[0] == sayilar

    printf("%u\n" , p);
    
    printf("%u\n", p + 1);
    printf("%u\n", p + 2);
    printf("%u\n", p + 3);
    printf("%u\n", p + 4);

    printf("%d\n", *p);// P pointeri sayilarin 0 ' ci indeksini tutdugu ucun biuz onun deyerini almaq isteyende bize sayilar arreyinin 0'ci indeksinin deyerini verir.
    printf("%d\n", *(p + 1));// *(p + 1) == p[1] ifadesi .
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    printf("%d\n", *(p + 4));
    
    return 0;
}