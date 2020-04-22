/* 3. Napisz funkcję, której parametrami są trzy dodatnie liczby całkowite n, m i k. 
Funkcja ma zwrócić
iloczyn liczb wielokrotności n większych niż k i mniejszych niż m.
 Stwórz dwa przypadki testowe dla
funkcji. */
#include <stdio.h>
#include <stdlib.h>

int iloczyn(int n, int k, int m)
{
    int wynik = 1;
    for (int i = 1; i * n < m ;i++)
    {
        if(i*n > k)
        {
            wynik*=(i*n);
        }
    }
    return wynik;
}
int main()
{
    printf("%d\n", iloczyn(2, 3, 8));
    printf("%d", iloczyn(2, 4, 9));
}