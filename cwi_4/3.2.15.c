#include <stdlib.h>
#include <stdio.h>


void swap(const int* a, int* b)
{
    *b=*a;
}

int main()
{
    int a = 100;
    int b = 200;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d", a, b);
}