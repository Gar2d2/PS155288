#include <stdio.h>
#include <stdlib.h>
/*  Zdefiniuj typ wyliczeniowy zwierzak, mogący przyjmować wartości
odpowiadające nazwom różnych zwierząt domowych.
 */
 enum zwierzak
{
    KOT,
    PIES,
    RYBKA,
    KAMELEON
};

int main()
{
    printf("%d", PIES);
}