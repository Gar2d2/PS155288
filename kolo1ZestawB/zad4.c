/*Napisz funkcję sprawdzającą dwie tablice jednowymiarowe typu int o takich samych rozmiarach.
Funkcja powinna zwrócić wartość “1” jeśli obie tablice zawierają tylko liczby parzyste, wartość “2” jeśli
obie tablce zawierają tylko liczby nieparzyste, wartość “0” w pozostałych wypadkach.*/

#include <stdlib.h>
#include <stdio.h>

int check(int* tab1, int* tab2, int size)
{
    int wynik = 0;
    for(int i = 0;i < size; i++)
    {
        if(!(*(tab1+i)%2))
        {
            wynik++;
        }
        if(!(*(tab2 + i)%2))
        {
            wynik++;
        }
    }
    if(wynik == 2*size)
    {
        return 1;
    }
    else if(!wynik)
    {
        return 2;
    }
    return 0;
}


int main()
{
    int n = 4;
    int tab1[n] = {1, 4, 6, 8};
    int tab2[n] = {2, 4, 10, 12};
    printf("%d\n", check(tab1, tab2, n));
}