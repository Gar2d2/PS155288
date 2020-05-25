#include <stdlib.h>
#include <stdio.h>

int check(int n, int m, double** Arr)
{
    //jeśli znajdzie się jakiś niezerowy element na brzegu zwraca 1;
    for(int i = 0; i < n; i++)
    {
        if (Arr[0][i] ||  Arr[m-1][i])
        {
            return 1;
        }
    }
     for(int i = 0; i < m; i++)
    {
        if (Arr[i][0] ||  Arr[i][n-1])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    double** Arr = (double**)malloc(4* sizeof(double*));
    for(int i = 0; i < 4; i++)
    {
        Arr[i] = (double*)malloc(4*sizeof(double));
        for(int j = 0; j < 4; j++)
        {
            Arr[i][j] = 0;
        } 
    }
    Arr[0][3] = 0.1;
    printf("%d", check(4,4,Arr));
}
    

