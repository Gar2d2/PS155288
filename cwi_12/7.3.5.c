#include <stdio.h>
#include <stdlib.h>
/* (r) Napisz funkcję dodajw o trzech argumentach Lista i elem typu
element* oraz a typu int zwracającą wskaźnik do typu element.
Funkcja powinna dodawać element o wartości a pola i do listy reprezentowanej
 przez zmienną Lista na miejscu tuż za elementem wskazywanym przez elem. 
 W przypadku, gdy elem jest równy NULL funkcja
powinna wstawić nowy element na początek listy. Funkcja powinna
zwrócić jako wartość wskaźnik do pierwszego elementu powiększonej
listy. */
typedef struct element
{
    int i;
    struct element *next;
} element;

element* dodajw(element* Lista, element* elem, int a)
{
    element* ptr = (element*)malloc(sizeof(struct element));
    ptr->i = a;
    if(elem == NULL)
    {
        ptr->next = Lista;
        Lista = ptr;
    }
    else
    {
        ptr->next = elem->next;
        elem->next = ptr;
    }
    return Lista;
}
int main()
{
    element* Lista = NULL;
    Lista = dodajw(Lista, NULL, 10);
    const element* Lista2 = Lista;
    while(Lista)
    {

        printf("%d\n", Lista->i);
        Lista = Lista->next;
    }
    Lista = (element*)Lista2;
    Lista = dodajw(Lista, NULL, 11);
    Lista = dodajw(Lista, NULL, 12);
    Lista = dodajw(Lista, NULL, 13);
    while(Lista)
    {

        printf("%d\n", Lista->i);
        Lista = Lista->next;
    }


    return 0;
}