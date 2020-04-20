#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

void clear(char* napis)
{
    napis[0] = '\0';
}
void Wclear(wchar_t* napis)
{
    napis[0] = '\0';
}


int main()
{
    char nazwa[10];
    scanf("%s", &nazwa);
    wchar_t Wnazwa[10];
    wscanf(L"%ls", &Wnazwa);
    printf("%s\n", nazwa);
    wprintf(L"%s\n", Wnazwa);
    clear(nazwa);
    Wclear(Wnazwa);
    printf("clear %s\n", nazwa);
    wprintf(L"%s\n", Wnazwa);
    
}
// przy W_char_t  stosuje się Wprint(L"%s", string);