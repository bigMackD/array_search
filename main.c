//
//  main.c
//  przeszukiwanie_tablicy
//
//  Created by Maciej Drozdowicz on 21/11/2017.
//  Copyright © 2017 Maciej Drozdowicz. All rights reserved.
//
// ALGORYTM Z WARTOWNIKIEM (WYSZUKIWANIE ELEMENTU TABLICY)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int znaleziony=0;
void wypelnij_tablice(int a[], int rozmiar, int k)
{
    int i;
    srand(time(NULL));
    for(i=0;i<rozmiar;i++)
    {
        a[i]=(rand()%(k+1));                                //WYPELNIENIE OD 0 DO K (LOSOWE)
        printf("Element a[%d] = %d\n", i,a[i]);
    }
}
void wyszukaj_element(int a[], int rozmiar, int x)
{
    
    int i;
    for(i=0;i<rozmiar;i++)
    {
     if(a[i]==x)
     {
         printf("%d na miejscu: %d\n", x,i);                //SZUKANIE
         znaleziony++;                                      //FLAGA - ZNALEZIONY
     }
    }
     if (znaleziony==0) printf("Brak elementu!\n");
    
}

int main(int argc, const char * argv[]) {
    int rozmiar, k, x;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);
    printf("Wypelnie tablice el.losowymi z przedzialu <0,k>\n");
    printf("Podaj wartosc k: ");
    scanf("%d", &k);
    int a[rozmiar];                                 // TABLICA
    wypelnij_tablice(a,rozmiar,k);
    printf("Gotowe, podaj element do wyszukania: ");
    scanf("%d",&x);
    wyszukaj_element(a,rozmiar,x);
    
    return 0;
}
