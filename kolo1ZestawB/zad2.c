/* Napisz funkcję, która jako argument otrzymuje dodatnią liczbę całkowitą n i zwraca liczbę d ne. Nie
korzystaj z żadnych gotowych funkcji bibliotecznych. Symbol d e oznacza najmniejszą liczbę całkowitą
większą lub równą od wyjściowej liczby. */

#include <stdlib.h>
#include <stdio.h>

int sufit(int a)
{      
    int i;
    for(i = 0; i*i < a; i++);
    return i;
}

int main()
{
    printf("%d\n", sufit(2));
    printf("%d\n", sufit(16));
    printf("%d\n", sufit(29));
    printf("%d\n", sufit(99));
}