/* Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą 
n oraz n-elementową tablicę tab o elementach typu int i:
a) (r) odwraca kolejność elementów tablicy tab.
b) (r) przesuwa o jeden w lewo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie n − 1 znalazła się w elemencie o indeksie 
n−2, wartość elementu o indeksie n−2 znalazła
się w elemencie o indeksie n − 3, zaś wartość elementu o indeksie
0 w elemencie o indeksie n − 1),
c) (r,!) przesuwa o jeden w prawo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie
o indeksie 1, wartość elementu o indeksie 1 znalazła się w elemencie
o indeksie 2, zaś wartość elementu o indeksie n − 1 w elemencie
o indeksie 0),
d) (*,r,!) sortuje rosnąco elementy tablicy tab (porządkuje elementy
przechowywane w tablicy w taki sposób aby ciąg
tab[0], tab[1],. . . ,tab[n-1] był ciągiem niemalejącym),
e) sortuje malejąco elementy tablicy tab */

#include <stdio.h>
#include <stdlib.h>
//podpunkt a
void reverse(const int n, int * arr)
{
    int temp;
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
}
//podpunkt b
void moveleft(const int n, int* arr)
{
    int last = *arr;
    for(int i = 1; i < n ; i++)
    {   
        *(arr + i - 1) = *(arr + i); 
    }
    *(arr + n - 1) = last;
}
//podpunkt c
void moveright(const int n, int* arr)
{ 
    int first = *(arr + n - 1);
    for(int i = n - 1; i > 0 ; i--)
    {   
        *(arr + i) = *(arr + i - 1); 
    }
    *(arr) = first;
}
//podpunkt d
void sortasc(const int n, int* arr)
{ 
    int temp;
    int i = 0;
    int notSort = 1;
    while(notSort)
    {
        notSort = 0;
        while(i < n -1)
        {
            if(*(arr + i) > *(arr + (++i)))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + i - 1);
                *(arr + i - 1) = temp;
                notSort = 1;
            }
        }
        i = 0;
        
    }
}
//podpunkt e
void sortdsc(const int n, int* arr)
{ 
    int temp;
    int i = 0;
    int notSort = 1;
    while(notSort)
    {
        notSort = 0;
        while(i < n -1)
        {
            if(*(arr + i) < *(arr + (++i)))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + i - 1);
                *(arr + i - 1) = temp;
                notSort = 1;
            }
        }
        i = 0;
        
    }
}

int main()
{
    int arr1[9] = {8,5,4,3,2,6,9,7,1};
    sortasc(9, arr1);
    
    return 0;
}