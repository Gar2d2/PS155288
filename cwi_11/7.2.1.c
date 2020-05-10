#include <stdio.h>
#include <stdlib.h>
typedef struct tojkat
{
    int a;
    int b;
    int c;
} trojkat;


/* (r,róż) Zdefiniuj strukturę trojkat przechowującą długości boków
trójkąta. Napisz funkcję, która otrzymuje jako argument zmienną typu
struct trojkat, i zwraca jako wartość obwód trójkąta przekazanego
w argumencie. */


int obwod(trojkat a)
{
    return a.a + a.b + a.c;
}

int main()
{
    trojkat jeden = {10, 10, 20};
    printf("%d", obwod(jeden));
}