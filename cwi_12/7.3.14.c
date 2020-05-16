#include <stdio.h>
#include <stdlib.h>
/* (r) Napisz funkcję dodajw o trzech argumentach Lista oraz elem typu
element* i a typu int. Funkcja powinna dodawać element o wartości
a pola i do listy reprezentowanej przez zmienną Lista na miejscu tuż
za elementem wskazywanym przez elem. */
typedef struct element
{
    int i;
    struct element *next;
} element;

element* utworz()
{
    element* ptr = (element*)malloc(sizeof(struct element));
    ptr->next = NULL;
    return ptr;
}
void dodajw(element* Lista, element* elem, int a)
{
    element* ptr = (element*)malloc(sizeof(struct element));
    ptr->i = a;
    ptr->next = elem->next;
    elem->next = ptr;
}
int main()
{
    element* Lista = utworz();
    const element* Lista2 = Lista;
    dodajw(Lista, Lista, 10);
    while(Lista->next)
    {
        Lista = Lista->next;
        printf("%d\n", Lista->i);
    }
    Lista = (element*)Lista2;
    dodajw(Lista, Lista->next, 11);
    dodajw(Lista, (Lista->next)->next, 12);
    dodajw(Lista, ((Lista->next)->next)->next, 13);
    while(Lista->next)
    {

        Lista = Lista->next;
        printf("%d\n", Lista->i);
    }


    return 0;
}