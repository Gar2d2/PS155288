#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int porownaj(char* napis, char* napis2)
{
    int wynik = 0, wynik2 = 0;
    while(napis[wynik++]);
    while(napis2[wynik2++]);
    if (wynik == wynik2)
    {
        return 1;
    }
    return 0;
}

int Wporownaj(wchar_t* napis, wchar_t* napis2)
{
    int wynik = 0, wynik2 = 0;
    while(napis[wynik++]);
    while(napis2[wynik2++]);
    if (wynik == wynik2)
    {
        return 1;
    }
    return 0;
}


int main()
{
    char nazwa[] = "nazwa 12";
    char nazwa2[] = "nazwa 222";
    wchar_t Wnazwa[] = L"Wnazwa 2";
    wchar_t Wnazwa2[] = L"Wnazwa 22";
    printf("%d\n", porownaj(nazwa, nazwa2));
    printf("%d", Wporownaj(Wnazwa, Wnazwa2));
    
}
// przy W_char_t  stosuje się Wprint(L"%s", string);