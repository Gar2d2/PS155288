/* Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
całkowitą n, n-elementowe tablice tab1 i tab2 oraz 2 · n-elementową
tablicę tab3 o elementach typu double.
a) Funkcja powinna przepisywać zawartość tablic tab1 i tab2 do
 tablicy tab3 w taki sposób, że na początku tablicy tab3 powinny się
znaleźć elementy tablicy tab1, a po nich elementy tablicy tab2.
b) Funkcja powinna przepisywać zawartość tablic tab1 i tab2 do tablicy 
tab3 w taki sposób, że w komórkach tablicy tab3 o nieparzystych indeksach powinny
 się znaleźć elementy tablicy tab1,
a w komórkach tablicy tab3 o parzystych indeksach elementy tablicy tab2. */
#include <stdlib.h>
#include <stdio.h>

//podpunkt a
void att1(const int n, double* tab1, double* tab2, double* tab2xN)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(tab2xN + i) = *(tab1 + i);
    }
    for (i; i < 2*n; i++)
    {
        *(tab2xN + i) = *(tab2 + i-n);
    }
}

//podpunkt b

void att2(const int n, double* tab1, double* tab2, double* tab2xN)
{
    for (int i = 0, j = 0; i < 2*n; i += 2, j++)
    {
        *(tab2xN + i) = *(tab1 + j);
    }
    for (int i = 1, j = 0; i < 2*n; i += 2, j++)
    {
        *(tab2xN + i) = *(tab2 + j);
    }
}

void print(double* arr,const int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2f  ", arr[i]);
    }
}

int main()
{
    double arr1[4] = {2.2, 1.4, 4.4, 3.2};
    double arr2[4] = {6.2, 5.4, 4.4, 10};
    double arr3[8];
    att1(4, arr1, arr2, arr3);
    print(arr3, 8);
    printf("\n");
    att2(4, arr1, arr2, arr3);
    print(arr3, 8);
}