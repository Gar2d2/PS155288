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
void wypisz(const char* napis)
{
    printf("%s\n", napis);
}
void Wwypisz(const wchar_t* napis)
{
    wprintf(L"%ls\n", napis);
}

int main()
{
    wypisz("jakis przykladowy napis");
    Wwypisz(L"jakis pzrykladowy wchartowy napis");
}