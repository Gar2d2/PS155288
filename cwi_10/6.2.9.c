#include <stdio.h>
#include <stdlib.h>

void funkcja(int n, int m, int** tab) // kompilować z flagą gcc -std=c99
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
}

int** funkcja2(int n, int m)
{
    int** tab = (int**)malloc(n*sizeof(int**));
    for(int i =0; i < n; i++)
    {
        tab[i] = (int*)malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    int n = 5, m = 5; 
    int** tab = funkcja2(n, m);
    funkcja(n, m,tab);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d", tab[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}