#include <stdio.h>
#include <stdlib.h>

int power(int n)
{
    int wynik=1;
    for(int i=1;i<=n;i++)
    {
        wynik*=2;
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

    printf("%i", power(n));
    
}