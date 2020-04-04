 /* Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą n oraz 
 n-elementową tablicę tab o elementach typu int i zwraca jako wartość:
a) (r) średnią arytmetyczną elementów tablicy tab.
b) sumę elementów tablicy tab,
c) sumę kwadratów elementów tablicy tab */

#include <stdlib.h>
#include <stdio.h>

//podpunkt a
int srednia(int* arr, int size)
{
    int count = 0;
    int output = 0;
    if (!size)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        output += *(arr + i);
        count++;
    }
    return output/count;
}
//podpunkt b
int suma(int* arr, int size)
{
    int output = 0;
    if (!size)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        output += *(arr + i);

    }
    return output;
}
//podpunkt c
int sumpow(int* arr, int size)
{
    int output = 0;
    if (!size)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        output += *(arr + i) * *(arr +i);
    }
    return output;
}
////////do celów testowych
int test(int (*arr)(int* arr, int size), int* array, int arsize)
{
    return arr(array, arsize);
}

int main()
{
    int arr[3] = {2, 2, 2};
    printf(" srednia %d\n", test(srednia, arr, 3));
    printf(" suma %d\n", test(suma, arr, 3));
    printf(" sumpow %d\n", test(sumpow, arr, 3));
}