#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

void concat(char* nazwa, char* nazwa2, char* con)
{
    int i = 0;
    for (int j = 0; nazwa[j]; j++, i++)
    {
        con[i] = nazwa[j];
    }
    for(int j = 0; nazwa2[j]; j++, i++)
    {
        con[i] = nazwa2[j];
    }
    con[i] = '\0';
}

void Wconcat(wchar_t* nazwa, wchar_t* nazwa2, wchar_t* con)
{
    int i = 0;
    for (int j = 0; nazwa[j]; j++, i++)
    {
        con[i] = nazwa[j];
    }
    for(int j = 0; nazwa2[j]; j++, i++)
    {
        con[i] = nazwa2[j];
    }
    con[i] = '\0';
}




int main()
{
    char nazwa[] = "Ala m";
    char nazwa2[] = "a kota";
    char con[12];
    wchar_t Wnazwa[] = L"Ala m";
    wchar_t Wnazwa2[] = L"a kota";
    wchar_t Wcon[12];
    concat(nazwa, nazwa2, con);
    Wconcat(Wnazwa, Wnazwa2, Wcon);
    printf("%s\n", con);
    wprintf(L"%ls\n", Wcon);
   
    
}
// przy W_char_t  stosuje się Wprint(L"%s", string);