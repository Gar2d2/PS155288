#include <stdio.h>
#include <stdlib.h>

int suma(const int* a, const int* b)
{
    
    return *a+*b;
}

int main()
{
    const int a = 100; //dla pewności zmienne też zrobiłem stałe
    const int b = 200;

    printf("%d ", suma(&a, &b));
    
    return 0;
}

