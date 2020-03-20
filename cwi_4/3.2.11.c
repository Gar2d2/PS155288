#include <stdio.h>
#include <stdlib.h>

int* rezerwacja(int n)
{
    return (int*)malloc(n * sizeof(int)); // samo w sobie zwraca początek tego bloku
}

int main()
{
    int* ps = rezerwacja(10);
    ps[0] = 1;
    ps[9] = 10;

    printf("%d %d", *ps, *(ps+9)); // ps[0] ps[9] równoważny zapis

    free(ps);
    
    return 0;
}

