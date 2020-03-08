#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("wprowadź liczbę , znak // ^ * + - , druga liczbe");
    char operacja;
    int a,b;
    scanf(" %i %c %i", &a, &operacja, &b);
    switch(operacja)
    {
        case '/':
        {
            printf("%f", (float)a/b);
            break;
        }
        case '^':
        {
            printf("%f", pow(a,b));
            break;
        }
        case '*':
        {
            printf("%i",a*b);
            break;
        }
        case '+':
        {
            printf("%i", a+b);
            break;
        }
        case '-':
        {
            printf("%i", a-b);
            break;
        }
        
    }
    
    return 0;
}