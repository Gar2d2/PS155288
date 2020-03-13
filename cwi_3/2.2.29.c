#include <stdio.h>
#include <stdlib.h>    //
//a0 = a1 = 1
//an = a0 + a1 + ... + an−1 dla n > 1
int NWD(int wieksza, int mniejsza)
{
    
    if(mniejsza > wieksza) // ustalmy która z nich jest większa która mniejsza
    {
        int temp=mniejsza; // postanowiłem ustalić to w funkcji a nie przed nią
        mniejsza=wieksza;
        wieksza=temp;
    }
    int reszta = wieksza % mniejsza;
    if(reszta==0)
    {
        return mniejsza; // w tej funkcji mniejsza to reszta  z poprzedniej
    }
    return NWD (mniejsza, reszta);
}
int main ()
{
    int n, m;
    do
    {
        printf("Podaj 2 dodatnie liczby całkowite:__\b\b");
        scanf("%i %i", &n, &m);
    } while (m<0 && n<0); 
    printf("%i", NWD(n, m));            
    return 0;
}