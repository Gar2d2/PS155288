#include <stdio.h>
#include <stdlib.h>

void funkcja(int n, int m, int tab[][m]) // kompilować z flagą gcc -std=c99
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
}



int main()
{
    int n = 5, m = 5; 
    int tab[n][m];
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