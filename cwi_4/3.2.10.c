#include <stdio.h>
#include <stdlib.h>

double* rezerwacja(void)
{
    return (double*)malloc(sizeof(double));
}

int main()
{
    double* ps=rezerwacja();
    *ps=2.2030329392;

    printf("%f \n", *ps);

    free(ps);
    
    return 0;
}

