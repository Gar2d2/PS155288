#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

/*  Napisz funkcję wytnijzw, która dostaje jako argument dwa 
napisy nap1 i nap2, i wycina z napisu nap1 wszystkie znaki występujące
także w napisie nap2. Napisz dwie wersje funkcji wytnijz dla napisów
składających się ze znaków typu char i wchar_t. */
void wytnijzw(char* napis1, char* napis2)
{
    int count = 0;
    for(int i = 0; napis2[i]; i++)
    {
        for(int j = 0; napis1[j];j++)
        {
            if(napis1[j] == napis2[i])
            {
                while(napis1[j+1])
                {
                    napis1[j] = napis1[j+1];
                    j++;
                }
                napis1[j] = '\0';
                j=0;
            }
        }
    }

}

void Wwytnijzw(wchar_t* napis1, wchar_t* napis2)
{
    int count = 0;
    for(int i = 0; napis2[i]; i++)
    {
        for(int j = 0; napis1[j];j++)
        {
            if(napis1[j] == napis2[i])
            {
                while(napis1[j+1])
                {
                    napis1[j] = napis1[j+1];
                    j++;
                }
                napis1[j] = '\0';
                j=0;
            }
        }
    }

}

int main()
{
    char str[] = "alaMaKota";
    char str2[] = "aaMaKoa";
    wchar_t Wstr[] =L"alaMaKotaMa";
    wchar_t Wstr2[] =L"alaMaKoaMa";
    wytnijzw(str, str2);
    Wwytnijzw(Wstr, Wstr2);
    printf("%s\n", str);
    wprintf(L"%ls", Wstr);
}