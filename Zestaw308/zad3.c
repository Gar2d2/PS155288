#include <stdio.h>
#include <stdlib.h>

int kwadrat(int n, int m, int arr[][m])
{
    int wynik = 0;
    for(int i =0; i<m; i++)
    {
        wynik+= arr[0][i]*arr[0][i];

    }
    return wynik;
}

int main()
{
    int tablica[3][4] = 
    {
        {2,3,-2,8},
        {-1,8,-4,3},
        {3,5,-2,-9}
    };
    printf("%d", kwadrat(3,4, tablica));
}