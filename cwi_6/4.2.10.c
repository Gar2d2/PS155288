/* Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą n oraz
 n-elementową tablicę tab o elementach typu int i:
a) (r,!) zwraca największą wartość przechowywaną w tablicy tab,
b) zwraca najmniejszą wartość przechowywaną w tablicy tab,
c) (r,!) zwraca indeks elementu tablicy tab o największej wartości,
d) zwraca indeks elementu tablicy tab o najmniejszej wartości,
e) zwraca największą spośród wartości bezwzględnych elementów przechowywanych 
w tablicy tab,
f) zwraca indeks elementu tablicy tab o największej wartości bezwzględnej */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//podpunkt a
int max(const int n, int* arr)
{
    int output = *arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > output)
        {
            output = *(arr + i);
        }
    }
    return output;
}
//podpunkt b
int min(const int n, int* arr)
{
    int output = *arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) < output)
        {
            output = *(arr + i);
        }
    }
    return output;
}
//podpunkt c
int indexmax(const int n, int* arr)
{
    int temp = *arr;
    int output = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > temp)
        {
            temp = *(arr + i);
            output = i;

        }
    }
    return output;
}
//podpunkt d
int indexmin(const int n, int* arr)
{
    int temp = *arr;
    int output = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) < temp)
        {
            temp = *(arr + i);
            output = i;

        }
    }
    return output;
}
//podpunkt e
int maxabs(const int n, int* arr)
{
    int output = abs(*arr);

    for (int i = 0; i < n; i++)
    {
        if (abs(*(arr + i)) > output)
        {
            output = abs(*(arr + i));
        }
    }
    return output; //zakładam, że zwraca wartość bezwzględną 
}
//podpunkt f
int indexabs(const int n, int* arr)
{
    int temp = abs(*arr);
    int output = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(*(arr + i)) > temp)
        {
            temp = abs(*(arr + i));
            output = i;

        }
    }
    return output;
}





int main()
{
    int arr1[4] = {-30, -20, 7, -40};
    printf("%d", indexabs(4, arr1));
    
}