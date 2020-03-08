#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, wynik=1;
    do
    {
        printf("podaj liczbę: ");
        scanf("%i", &n);
    } while (n<0);
    for(int i=1;i<=n;i++)
    {
        wynik*=i;
    }
    printf("%i", wynik);
    
    
    return 0;
}