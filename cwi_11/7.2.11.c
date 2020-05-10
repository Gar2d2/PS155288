#include <stdio.h>
#include <stdlib.h>
/*  (r) Zdefiniuj unię Liczba, która może służyć w zależności od potrzeb
do przechowywania liczby wymiernej lub liczby całkowitej. Zdefiniuj
strukturę Dane, o dwóch polach polu tp typu int oraz polu zaw typu
Liczba.
Napisz bezargumentową funkcję, która wczytuje ze standardowego
wejścia zawartość do struktury Dane i zwraca ją jako wartość.
 Funkcja powinna pytać użytkownika, czy chce wczytać liczbę całkowitą,
czy wymierną oraz w zależności od jego wyboru wstawić do pola tp
wartość 0 lub 1. Następnie funkcja powinna wczytać do pola zaw wartość
 odpowiedniego typu
 */
typedef union Liczba
{
    int calkowita;
    double wymierna;
} Liczba;
typedef struct Dane
{
    int tp;
    Liczba zaw;
} Dane;

Dane przypisz()
{
    Dane wynik;
    printf("Prosze wprowadzic typ danych: 0 = calkowita 1 = wymierna");
    scanf("%d", &wynik.tp);
    if(wynik.tp == 0)
    {
        scanf("%d", &wynik.zaw.calkowita);
    }
    else
    {
        scanf("%lf", &wynik.zaw.wymierna);
    }
    return wynik;
}

int main()
{
    Dane jeden = przypisz();
    if(jeden.tp == 1)
    {
        printf("tp %d, liczba %f", jeden.tp, jeden.zaw.wymierna);
    }
    else
    {
        printf("tp %d, liczba %d", jeden.tp, jeden.zaw.calkowita);
    }
    
}