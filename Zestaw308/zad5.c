#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int a;
    struct element * next;
}element;

void funkcja(element* List1)
{
    element* temp1 = List1;
  
   
   while(temp1->next)
   {
       if(temp1->a > 0)
       {
           temp1->next->a = temp1->next->a*temp1->next->a*temp1->next->a;
       }
       temp1 = temp1->next;
   }

}

int main()
{

    element* Lista1 = (element*)malloc(sizeof(element));
    Lista1->next=(element*)malloc(sizeof(element));
    Lista1->a = -1; 
    Lista1->next->next=(element*)malloc(sizeof(element));
    Lista1->next->a = 2;
    Lista1->next->next=NULL;
    element* temp = Lista1;
    funkcja(Lista1);
    while(temp->next)
    {
        temp = temp->next;
        printf("%d", temp->a);
    }
}