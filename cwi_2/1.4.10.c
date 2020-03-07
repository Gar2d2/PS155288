#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,wynik;
    do
    {
        printf("podaj nieujemną liczbę całkowitą: ");
        scanf("%i", &n);
    } while (n < 0); 
    for (int i=1;i*i<=n;i++)
    {
        wynik=i;
    }
    printf("pierwiastek w przybliżeniu wynosi %i", wynik);
    return 0;
}