#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int licz(char* napis)
{
    int wynik = 0;
    while(napis[wynik++]);
    return wynik-1;
}
int Wlicz(wchar_t* napis)
{
   int wynik = 0;
    while(napis[wynik++]);
    return wynik-1;
}


int main()
{
    char nazwa[] = "nazwa 1";
    wchar_t Wnazwa[] = L"Wnazwa 2";
    printf("%d\n", licz(nazwa));
    printf("%d", Wlicz(Wnazwa));
    
}
// przy W_char_t  stosuje się Wprint(L"%s", string);