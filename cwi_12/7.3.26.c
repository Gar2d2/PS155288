#include <stdio.h>
#include <stdlib.h>

/*  (r) Napisz funkcję minimum, która dostaje jako argument Lista
 listę wskaźnikową o elementach typu element i zwraca jako wartość
wskaźnik do elementu listy o najmniejszej wartości pola i. Napisz
dwie wersje funkcji: dla list z głową i dla list bez głowy*/
typedef struct element
{
    int i;
    struct element* next;
} element;


element* min(element* Lista)
{
    if(!Lista) {return NULL;}
    element* temp = Lista;
    element* wynik = Lista;
    int min = temp->i;
    while(temp)
    {
        if(temp->i < min)
        {
            min = temp->i;
            wynik = temp;
        }
        temp = temp->next;
    }
    return wynik;
}
element* minHEAD(element* Lista)
{
    element* temp = Lista->next;
    if(!temp) {return NULL;}
    element* wynik = temp;
    int min = temp->i;
    while(temp->next)
    {
        temp = temp->next;
        if(temp->i < min)
        {
            min = temp->i;
            wynik = temp;
        }
    }
    return wynik;
}
int main()
{
    element* Lista = (element*)malloc(sizeof(element));
    Lista->i = 0;
    Lista->next = (element*)malloc(sizeof(element));
    (Lista->next)->i = 2;
    (Lista->next)->next = (element*)malloc(sizeof(element));
    (Lista->next->next)->i = 1;
    (Lista->next->next)->next = NULL;
    printf("%d", min(Lista)->i);
    printf("%d", minHEAD(Lista)->i); 
}