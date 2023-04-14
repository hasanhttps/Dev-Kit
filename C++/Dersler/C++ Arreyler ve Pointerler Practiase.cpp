// #include <stdio.h>

// int maks_deger (int a[],int uzunluk){
//     int maks = a[0];
//     int i = 1;
//     for (i ; i <= uzunluk;i++){
//         if (a[i] > maks){
//             maks = a[i];
//         }
//     }

//     return maks;

// }


// int main(){

//     int sayilar[5] = {3,4,4256,100,2};

//     int maks = maks_deger(sayilar,5);

//     printf("Sayilar dizisinin en buyuk elemani  --  %d\n",maks);

//     return 0;
// }



#include <stdio.h>

int maks_deger (int *a,int uzunluk){//Birtinci yontem den daha iyi bir yontem olarak bunu kullana biliriz . Sayilar arreyini bir pointer ile birlikte fonksiyona dahil 
// ediyoruz boylelikle a[i]dedigimiz zaman bunu rakama gore pointerin o indeksini bulup onun deyerini bize (*) vasitasi ile birlikte veriyor .

    int maks = a[0];
    int i = 1;
    for (i ; i <= uzunluk;i++){
        if (a[i] > maks){
            maks = a[i];
        }
    }

    return maks;
}


int main(){

    int sayilar[5] = {3,4,4256,100,2};

    int maks = maks_deger(sayilar,5);

    printf("Sayilar dizisinin en buyuk elemani  --  %d\n",maks);
        
    printf("Hayirli Olsun");
    
    return 0;
}
