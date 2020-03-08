#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   printf("wybierz 1 aby obliczyć pole trojkata z podstawy i wysokosci\n lub 2 aby podać wszystkie 3 boki\n"); 
    int rodzaj;
    scanf("%i", &rodzaj);
    if(rodzaj == 1)
    {
        double a,h;
        scanf("%lf %lf", &a ,&h);
        printf("%lf", (double)(a*h/2));
    }
    else if(rodzaj==2)
    {
        double a,b,c,p;
        scanf("%lf %lf %lf" ,&a, &b, &c);
        p=(a+b+c)/2;
        printf("%lf", (double)(sqrt(p*(p-a)*(p-b)*(p-c))));


    }
    return 0;
}