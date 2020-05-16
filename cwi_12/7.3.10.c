#include <stdio.h>
#include <stdlib.h>

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
int main()
{
    element* lista = utworz();
    return 0;
}