/*  Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
całkowitą n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o
 elementach typu int, i:
a) przypisuje elementom tablicy tab3 sumę odpowiadających im elementów tablic
 tab1 i tab2 (do komórki tablicy tab3 o indeksie i
powinna trafić suma elementów tab1[i] i tab2[i]),
b) przypisuje elementom tablicy tab3 większy spośród odpowiadających 
im elementów tablic tab1 i tab2 (do komórki tablicy tab3
o indeksie i powinien trafić większy spośród elementów tab1[i]
i tab2[i]),
c) przypisuje zawartość tablicy tab1 do tablicy tab2, zawartość tablicy tab2 do
 tablicy tab3 oraz zawartość tablicy tab3 do tablicy
tab1 */
#include <stdlib.h>
#include <stdio.h>


///podpunkt a
void att(int* tab1, int* tab2, int* tab3, const int size)
{
    for (int i = 0; i < size; i++)
    {
        *(tab1 + i) = *(tab2 + i) + *(tab3 + i);
    }
}

//podpunkt b
void attmax(int* tab1, int* tab2, int* tab3, const int size)
{
    for (int i = 0; i < size; i++)
    {
        *(tab3 + i) = *(tab2 + i) > *(tab1 + i) ? *(tab2 + i) : *(tab1 + i);
    }
}
//podpunkt c

void reshuffle(int* tab1, int* tab2, int* tab3, const int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        *(temp + i) = *(tab3 + i); 
    }

    for (int i = 0; i < size; i++)
    {
        *(tab3 + i) = *(tab2 + i);
        *(tab2 + i) = *(tab1 + i);
        *(tab1 + i) = *(temp + i);
    }
}
void print(int * arr,const int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",*(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr1[3] = {2, 1, 3};
    int arr2[3] = {1, 2, 3};
    int arr3[3] = {5, 5, 5};
    /* att(arr1, arr2, arr3, 3);
    print(arr1, 3);
    print(arr2, 3);
    print(arr3, 3); */
    /* attmax(arr1, arr2, arr3, 3);
    print(arr1, 3);
    print(arr2, 3);
    print(arr3, 3);
    */
    reshuffle(arr1, arr2, arr3, 3);
    print(arr1, 3);
    print(arr2, 3);
    print(arr3, 3); 
}