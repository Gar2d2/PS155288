#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char imie[20];
    char nazwisko[20];
    char adres[20];
    char pesel[15];
    char kierunek[20];
    char nrLegitymacji[20];
} student;

/*  Zdefiniuj strukturę student służącą do przechowywania 
danych osobowych studenta (struktura powinna zawierać takie pola, jak: imie,
nazwisko, adres, pesel, kierunek i numer legitymacji).
Napisz funkcję, która otrzymuje jako argument wskaźnik na
 strukturę student i wczytuje dane ze standardowego wejścia do rekordu
wskazywanego przez argument funkcji
 */
void przypisz(student* std)
{
    scanf("%s %s %s %s %s %s",
    &std->imie,
    &std->nazwisko,
    &std->adres,
    &std->pesel,
    &std->kierunek,
    &std->nrLegitymacji);
    
}

int main()
{
   student Andrzej;
   przypisz(&Andrzej);
   
   printf("%s %s %s %s %s %s",
    Andrzej.imie,
    Andrzej.nazwisko,
    Andrzej.adres,
    Andrzej.pesel,
    Andrzej.kierunek,
    Andrzej.nrLegitymacji);
}