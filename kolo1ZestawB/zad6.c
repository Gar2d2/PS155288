/* Stwórz program, w którym wykonasz poniższe czynności:
• stwórz tablicę jednowymiarową 7-elementową typu int i uzupełnij ją dowolnym wartościami,
• za pomocą pętli sprawdź ile liczb w tej tablicy jest parzystych na elemntach o parzystych indeksach,
wynik wyświetl na konsoli (uwaga: uwzględnij liczby dodatnie, ujemne i zero, zero jest liczbą parzystą). */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n = 7, count = 0;
    int tab [n] = {0, 4, 8, 10, 423, -2, -2};
    for(int i = 0; i < n; i+=2)
    {
        if(!(tab[i]%2))
        {
            count++;
        }
    } 
    printf("%d", count);
    return 0;
}