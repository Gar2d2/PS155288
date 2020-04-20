#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

/* 5.2.9 (r) Napisz funkcję wytnij, która dostaje jako argumenty napis
oraz dwie liczby całkowite n i m, i wycina z otrzymanego napisu znaki
o indeksach od n do m ( n <= m). Otrzymany w argumencie napis
może mieć dowolną liczbę znaków (w tym mniejszą od n lub m)
Napisz dwie wersje funkcji wytnij dla napisów składających się ze znaków typu
 char i wchar_t. */

void wytnij(char* napis, int n, int m)
{
    int count = 0;
    while(napis[count++]);
    if (count > n)
    {
        if(count >= m)
        {
            int i;
            for( i = n; napis[m] != '\0'; i++, m++)
            {
                napis[i] = napis[m];
            }
            napis[i]='\0';
        }
        else
        {
            napis[n] = '\0';
        }      
    }
}


void Wwytnij(wchar_t* napis, int n, int m)
{
    int count = 0;
    while(napis[count++]);
    if (count > n)
    {
        if(count >= m)
        {
            int i;
            for( i = n; napis[m] != '\0'; i++, m++)
            {
                napis[i] = napis[m];
            }
            napis[i]='\0';
        }
        else
        {
            napis[n] = '\0';
        }      
    }
}
int main()
{
    char str[] = "alaMaKota";
    wchar_t Wstr[] =L"alaMaKotaMa";
    wytnij(str, 8, 8);
    printf("%s\n", str);
    Wwytnij(Wstr, 2, 6);
    wprintf(L"%ls", Wstr);
}