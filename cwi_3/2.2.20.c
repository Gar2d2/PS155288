#include <stdio.h>
#include <stdlib.h>


int fac(int n)
{
    int wynik=1;
    if(n>2)
    {
        wynik=fac(n-1);// bez dekrementracji ze względu na skutki uboczne 
    }
   if(n<2)
   {
       return 1;
   }
    return n*wynik;    
}
int main ()
{
    int n= -1;
    do
    {
        printf("Podaj liczbę całkowitą większą lub równą 0:__\b\b");
        scanf("%i", &n);
    } while (n<0);
    printf("%i", fac(n));
    
}