#include <stdio.h>
#include <stdlib.h>

void wieksza(int* a, int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a = 100;
    int b = 200;

    printf("%d %d\n", a, b);
    wieksza(&a, &b);
    printf("%d %d\n", a, b);
}

