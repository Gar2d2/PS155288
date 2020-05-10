#include <stdio.h>
#include <stdlib.h>
typedef struct punktn
{
    int n;
    int* wymiar;
    
} punktn;

/*  (r,!) Zdefiniuj strukturę punktn służącą do przechowywania współrzędnych
punktów w n-wymiarowej przestrzeni kartezjańskiej. Do przechowywania
 poszczególnych wymiarów wykorzystaj tablicę
n-elementową. W strukturze punktn przechowuj także ilość wymiarów przestrzeni.

Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2
o argumentach typu struct punktn oraz ich wspólny rozmiar, i przepisuje zwartość
 tablicy tab1 do tablicy tab2. Zakładamy, że tablica
tab2 jest pusta (czyli nie musimy się martwić o jej poprzednią zawartość).
 */
void przypisz(int n, punktn* tab1, punktn* tab2)
{

    for(int i = 0; i<n; i++)
    {
        tab2[i].n = tab1[i].n;
        tab2[i].wymiar = (int*)malloc(tab2[i].n*(sizeof(int)));
        for(int j = 0; j < tab2[i].n; j++)
        {
            tab2[i].wymiar[j] = tab1[i].wymiar[j];
        }
    }
}

int main()
{
    punktn a = {2};
    a.wymiar = (int*)malloc(2*(sizeof(int)));
    a.wymiar[0] = 1;
    a.wymiar[1] = 2;
    punktn b = {2};
    b.wymiar = (int*)malloc(2*(sizeof(int)));
    b.wymiar[0] = 1;
    b.wymiar[1] = 2;
    punktn tab1[2];
    tab1[0] = a;
    tab1[1] = b;
    punktn tab2[2];
    przypisz(2, tab1, tab2);
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", tab2[i].wymiar[j]);
        }
        printf("\n");
    }
}