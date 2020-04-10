/* Napisz funkcję Zamiana. Parametrem funkcji ma być wskaźnik do zmiennej typu double. Zadaniem
funkcji jest zamiana wartości wskazywanej zmiennej z sześcianem danej liczby (jeśli wartość wynosi 3
należy zamienić na 27). Stwórz w programie dwa przypadki testowe. */

#include <stdlib.h>
#include <stdio.h>

void zamiana(double* n)
{
    *n = *n * *n * *n;
}

int main()
{
    double a = 3;
    double b = 4.5;
    printf("%f\n",a);
    zamiana(&a);
    printf("%f\n",a);
    printf("%f\n",b);
    zamiana(&b);
    printf("%f\n",b);
}