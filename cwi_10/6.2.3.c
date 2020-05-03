#include <stdio.h>
#include <stdlib.h>

void funkcja(int m, int n, int** tablica)
{
    for(int i = 0; i < m; i++)
    {
        free(tablica[i]);
    }
    free(tablica);
    
}

int main()
{
   int** tablica = (int**)malloc(5*sizeof(int*));
   for(int i = 0; i < 5; i++)
   {
       tablica[i] = (int*)malloc(5*sizeof(int));
   }

   for(int i = 0; i<5; i++)
   {
       for(int j = 0; j < 5; j++)
       {
           printf("%d", tablica[i][j]);
       }
       printf("\n");
   }
   funkcja(5,5,tablica);
}