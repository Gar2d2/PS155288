#include <stdio.h>
#include <stdlib.h>
#define n 3
typedef struct punkt10
{
    int wymiar[10];
    
} punkt10;

/*  (r,!) Zdefiniuj strukturę punkt10 służącą do przechowywania współrzędnych
punktów w dziesięciowymiarowej przestrzeni kartezjańskiej.
Do przechowywania poszczególnych wymiarów wykorzystaj tablicę
dziesięcioelementową.
Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2
typu struct punkt10 oraz ich wspólny rozmiar, i przepisuje zwartość
tablicy tab1 do tablicy tab2.
 */


void przypisz(int k, punkt10* tab1, punkt10* tab2)
{
    for(int i = 0; i<k; i++)
    {
        tab2[i]= tab1[i];
    }
}

int main()
{
    punkt10 a[n];

     for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<10; j++)
        {

            a[i].wymiar[j] = i+j;
        }
    }

    punkt10 b[n];
    przypisz(n, a, b);

     for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<10; j++)
        {

            printf("%d ", b[i].wymiar[j]);
        }
        printf("\n");
    }
    
}