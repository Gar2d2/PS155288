#include <stdio.h>
#include <stdlib.h>
////funkcja obliczająca potęge
int power(int liczba, int wykladnik)
{
    if(liczba==0)
    {
        return 0;
    }
    int wynik=1;
    for(int i=1;i<=wykladnik;i++)
    {
        wynik*=liczba;
    }
    return wynik;
}
///////funkcja wyliczająca pierwiastki 
int sq(int liczba, int wykladnik)
{
    int wynik=0;
    for(int i=0;power(i,wykladnik)<=liczba;i++)
    {
        wynik=i;
    }
    return wynik;
}
///////////funkcja wyliczająca sumę z tych pierwiastków
int suma(int ilosc, int wykladnik)
{
    int wynik=0;
    for(int i=0; i<=ilosc;i++)
    {
        wynik+=sq(i, wykladnik);
    }
    return wynik;
}

int main ()
{
    int n = -1, m=0;
    do
    {
        printf("Podaj liczbę całkowitą n większą lub równą 0 oraz m > 1:__\b\b");
        scanf("%i %i", &n, &m);
    } while (n < 0 || m <= 1);

    printf("%i", suma(n, m));
    
}