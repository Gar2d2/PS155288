/* Napisz bezargumentową funkcję, która rezerwuje blok dwóch zmiennych typu double.
 Funkcja ma
ustawić kolejno w pamięci wartości 3.4 i -2.8. Na koniec funkcja powinna
zwrócić wskaźnik na
początek bloku. Stwórz przypadek testowy w main tak, aby wyświetlić na konsoli
 wartości zmiennych
przechowywanych na bloku stworzonym wewnątrz funkcji. */

#include <stdlib.h>
#include <stdio.h>

double* loc()
{
    double* wynik = (double*) malloc(2*sizeof(double));
    *wynik = 3.4;
    *(wynik + 1) = -2.8;
    return wynik;
}
int main()
{
    printf("%f %f", *loc(), *(loc()+1));
}