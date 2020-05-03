#include <stdio.h>
#include <stdlib.h>

void wypisz(int n,int m, int** tab) 
{
   for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d", tab[i][j]);
        }
        printf("\n");
    }
    
}

void zamien(int n,int m, int** tab) 
{
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        for(int p = 0, o = m-1; p < o ; p++, o--)
        {
            temp = tab[i][p];
            tab[i][p] = tab[i][o];
            tab[i][o] = temp;
        }
    }
    
}

int** allockAndLoad(int n, int m)
{
    int** tab = (int**)malloc(n*sizeof(int**));
    for(int i =0; i < n; i++)
    {
        tab[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           tab[i][j] = i+j;
        }
    }
    return tab;
}

int main()
{
    int n = 11, m = 11; 
    int** tab = allockAndLoad(n, m);

   
    wypisz(n,m,tab);
    printf("\n------\n");
    zamien(n,m,tab);
    printf("\n------\n");
    wypisz(n,m,tab);
    
    return 0;
}