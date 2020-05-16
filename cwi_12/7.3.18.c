#include <stdio.h>
#include <stdlib.h>
/* (r) Napisz funkcję usunw o dwóch argumentach Lista i elem typu
element*. Funkcja powinna usuwać z listy reprezentowanej
przez zmienną Lista element wskazywany przez zmienną elem */
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

void usunw(element* Lista, element* elem)
{
    element*temp = Lista;
    if(!elem || elem==Lista) {return;}
    while(temp->next != elem)
    {
        temp = temp->next;
    }
        temp->next = elem->next;
        free(elem);
}
void dodajw(const element* Lista, element* elem, int a)
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
    Lista = (element*)Lista2;

    usunw(Lista, (Lista->next)->next);
    usunw(Lista, (Lista->next)->next);
    usunw(Lista, (Lista->next)->next);
    usunw(Lista, (Lista->next)->next);
    usunw(Lista, Lista);

    while(Lista->next)
    {

        Lista = Lista->next;
        printf("%d\n", Lista->i);
    }




    return 0;
}