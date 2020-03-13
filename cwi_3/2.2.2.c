#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int wynik=1;
    for(int i=1;i<=n;i++)
    {
        wynik*=i;
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

    printf("%i", factorial(n));
    
}