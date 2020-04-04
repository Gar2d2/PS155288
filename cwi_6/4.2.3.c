 /* Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę
  całkowitą n oraz n-elementową tablicę tab o elementach typu
const int i zwraca jako wartość średnią arytmetyczną elementów
tablicy tab. */
#include <stdlib.h>
#include <stdio.h>


int srednia(const int* tab, int n)
{
    int count = 0;
    int output = 0;
    if (!n)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        output += *(tab + i);
        count++;
    }
    return output/count;
}

////////do celów testowych
int test(int (*arr)(const int* arr, int size), const int* array, int arsize)
{
    return arr(array, arsize);
}

int main()
{
    const int arr[3] = {2, 4, 6};
    printf(" srednia %d\n", test(srednia, arr, 3));
}