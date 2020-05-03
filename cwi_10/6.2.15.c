#include <stdio.h>
#include <stdlib.h>

long int funkcja(int n, int tab[][100][100]) // kompilować z flagą gcc -std=c99
{
   long int wynik = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            for(int k = 0; k < 100; k++)
            {
                wynik += *(*(*(tab+i)+j)+k);
            }
        }
    }
    return wynik;
}



int main()
{
    int n = 10; 
    int tab[n][100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            for(int l = 0; l < 100; l++)
            {
                *(*(*(tab+i)+j)+l) = 1;
            }
        }
    }
    
    printf("%ld", funkcja(n,tab));
    
    return 0;
}