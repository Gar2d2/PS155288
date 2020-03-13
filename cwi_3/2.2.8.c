#include <stdio.h>
#include <stdlib.h>

int sq(int n)
{
    int wynik=0;
    for(int i=1;i*i<=n;i++)
    {
        wynik=i;
    }
    return wynik;
}

int main ()
{
    int n = -1;
    do
    {
        printf("Podaj liczbę całkowitą większą lub równą 0:__\b\b");
        scanf("%i", &n);
    } while (n<0);

    printf("%i", sq(n));
    
}