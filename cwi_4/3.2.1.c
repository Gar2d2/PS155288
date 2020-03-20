#include <stdio.h>
#include <stdlib.h>

int wieksza(int* a, int* b)
{
    return (*a > *b) ? *b : *a; // zwraca mniejszą z liczb
}

int main()
{
    int a = 100;
    int b = 200;
   
    printf("%d", wieksza(&a, &b));  
    
    return 0;
}

