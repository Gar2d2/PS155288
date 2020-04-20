#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
/* Napisz funkcję godzina, która dostaje w argumentach trzy liczby
całkowite godz, min i sek, zawierające odpowiednio godziny, minuty
oraz sekundy, i zwraca jako wartość napis zawierający godzinę w 
formacie godz:min:sek, w którym wartości poszczególnych pól pochodzą
ze zmiennych podanych w argumentach.
Napisz dwie wersje funkcji godzina: zwracające napisy będące tablicami
 znaków typu char i typu wchar_t.
 */
char* godzina(int h, int m, int s)
{
    char* bufor = (char*) malloc(10 * sizeof(char));
    sprintf(bufor, "%d:%d:%d", h, m, s);
    return bufor;
}

wchar_t* Wgodzina(int h, int m, int s)
{
    wchar_t* bufor = (wchar_t*) malloc(10 * sizeof(wchar_t));
    swprintf(bufor,9 ,L"%d:%d:%d", h, m, s);
    return bufor;
}

int main()
{
    char* str = godzina(24, 60, 60);
    printf("%s\n", str);
    free(str);
    wprintf(L"%ls", Wgodzina(20, 50, 50));
}