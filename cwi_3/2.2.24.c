#include <stdio.h>
#include <stdlib.h>    //
//a0 = a1 = 1
//an = a0 + a1 + ... + an−1 dla n > 1
int sequence(int n)
{
    int wynik=0;
    if(n>0)
    {
         wynik=sequence(n-1);
    }
    if(n==0 || n==1)
    {
        return 1;
    }
    return 2*wynik;
}

int main ()
{
    int n;
    do
    {
        printf("Podaj nieujemną liczbę całkowitą:__\b\b");
        
    } while (scanf("%i", &n) && n<0); 
    printf("%i", sequence(n));                
    
}