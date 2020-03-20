#include <stdio.h>
#include <stdlib.h>
int sum(int a)
{
    return a+2;
}
int mul(int a)
{
    return a*2;
}

int funkcja( int (*f1)(int), int (*f2)(int), unsigned int n) // funkcja z zadania
{
    for (int i = 0; i < n; i++)
    {   
        if(f1(n) != f2(n))
        {
            return 0;
        }
    }
    return 1;   
}

int funkcja2( int (*arr[])(int), unsigned int n);// efekt zabawy deklaracja pod main()


int main()
{
    funkcja(mul, sum, 10) ? printf("true\n") : printf("false\n"); //koniec zadania

    int (*farr[2])(int) = {sum, mul};

    funkcja2(farr, 10) ? printf("true") : printf("false");// efekt tablicy z pointerami do funkcji
    return 0;
}



int funkcja2( int (*arr[])(int), unsigned int n)
{
    for (int i = 0; i < n; i++)
    {   
        if(arr[0](n) != arr[0](n))
        {
            return 0;
        }
    }
    return 1;   
}

