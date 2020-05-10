#include <stdio.h>
#include <stdlib.h>
typedef struct tojkat
{
    int a;
    int b;
    int c;
} trojkat;


/* (r,!) Napisz funkcję, która otrzymuje jako argumenty zmienną troj1
typu struct trojkat zdefiniowanego w zadaniu 7.2.1 oraz zmienną
troj2 wskaźnik na zmienną typu struct trojkat, i przepisuje zawartość 
zmiennej troj1 do zmiennej wskazywanej przez troj2.
 */


void przypisz(trojkat troj1, trojkat* troj2)
{
    *troj2 = troj1;
}

int main()
{
    trojkat troj1 = {10, 10, 20};
    trojkat* troj2 = (trojkat*)malloc(sizeof(trojkat));
    przypisz(troj1, troj2);
    printf("%d %d %d", troj2->a, troj2->b, troj2->c);
}