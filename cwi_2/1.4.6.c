#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,wynik=1;
    while(n <= 2)   
    {
        printf("podaj liczbę całkowitą większą od 2: ");
        scanf("%i", &n);
    }
    for(int i=2;i<=n;i+=2)
    {
        wynik*=i;
    }
    printf("%i", wynik);
}