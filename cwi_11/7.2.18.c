#include <stdio.h>
#include <stdlib.h>
/*  (r,!) Zdefiniuj złożony typ danych dzięki któremu będzie można odnosić się do
 kolejnych bajtów zmiennej typu unsigned int
jak do kolejnych elementów tablicy
 */
 union Unia
 {
    unsigned int a;
    char tab[sizeof(unsigned int)];
 };

int main()
{
    union Unia united = {10000};
    printf("%d", united.tab[0]);
}