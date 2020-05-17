#include <stdio.h>
#include <stdlib.h>

/*  Napisz funkcję doklej o dwóch argumentach Lista1 i Lista2
typu element * wskazujących na dwie jednokierunkowe listy wskaźnikowe 
bez głowy, która wstawia na koniec listy Lista1 elementy listy
Lista2 (funkcja nie powinna alokować w pamięci nowych zmiennych
typu element, ale odpowiednio podpiąć już istniejące).
 Funkcja powinna zwracać wskaźnik do pierwszego elementu połączonej listy*/
typedef struct element
{
    int i;
    struct element* next;
} element;


element* doklej(element* Lista, element* Lista2)
{
    if(!Lista || !Lista2)
    {
        return Lista ? Lista : Lista2;
    }
    element* temp = Lista;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = Lista2;
    return Lista;
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
    element* Lista2 = (element*)malloc(sizeof(element));
    Lista2->i = 0;
    Lista2->next = (element*)malloc(sizeof(element));
    (Lista2->next)->i = 2;
    (Lista2->next)->next = (element*)malloc(sizeof(element));
    (Lista2->next->next)->i = 1;
    (Lista2->next->next)->next = NULL;
    
    element* temp = doklej(Lista, Lista2);
    while(temp)
    {
        printf("%d", temp->i);
        temp = temp->next;
    }
    
}