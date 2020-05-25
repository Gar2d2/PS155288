#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    char x;
    struct element* next;
} element;

int compare(element* List1, element* List2)
{
    element* temp1 = List1;
    element* temp2 = List2;
   
   while(temp1->next || temp2->next) //sprawdzenie czy chociaż 1 lista zawiera nastepny element   
   {
       if(!temp1->next || !temp2->next) //jeżeli jakaś lista nie zawiera nastepnego elementu zwraca 0 (listy nie sa równe)
       {
           return 0;
       }
       temp1 = temp1->next; // bo lista z głową
       temp2 = temp2->next;
       if(temp2->x != temp1->x) //porównanie elementów
       {
           return 0;
       }
   }
    return 1;
}

int main()
{
    element* Lista1 = (element*)malloc(sizeof(element));
    Lista1->next=(element*)malloc(sizeof(element));
    Lista1->x = 'a'; //nie bierze pod uwage pierwszego elementu bo z glowa
    Lista1->next->next=(element*)malloc(sizeof(element));
    Lista1->next->x = 'b';
    Lista1->next->next=NULL;
    element* Lista2 = (element*)malloc(sizeof(element));
    Lista2->next=(element*)malloc(sizeof(element));
    Lista2->x = 'b';
    Lista2->next->next=(element*)malloc(sizeof(element));
    Lista2->next->x = 'b';
    Lista2->next->next=NULL;

    printf("%d", compare(Lista1,Lista2));

}