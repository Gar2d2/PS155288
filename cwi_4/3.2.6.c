#include <stdio.h>
#include <stdlib.h>

void zamiana(int n, int* w)
{
    
    *w=n;
}

int main()
{
    int a = 100; 
    int b = 200;

    printf("%d %d \n", a, b);
    zamiana(a, &b);
    printf("%d %d ", a, b);
    
    return 0;
}

