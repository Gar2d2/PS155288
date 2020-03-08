#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, wynik=0;
    printf("podaj liczby abcd: ");
    scanf("%i %i %i %i", &a, &b, &c, &d);
    /* podpunkt a
     |a| ∗ x^2 + b ∗ x + c > d*/
    for (int i=0; (abs(a)*(i*i)+b*i+c)<=d; i++)
    {
        wynik=i+1; // petla sprawdza warunek, jeśli i+1 jest większe to iteracja się nie wykona
    }
    printf("%i\n", wynik);
    /////////////podpunkt b/////////////////////////////////////////////////////
    /////////////5∗x^2+a∗x+b < c////////////////////////////////////////////////
    wynik=0;
    for(int i=c;5*(i*i)+a*i+b>=c;i--)
    {
        wynik=i-1; // pętla sprawdzi do warunku i >= więc i-1 będzie największą liczbą <
    }
    printf("%i\n", wynik);
    ///////////////////podpunkt c//////////////////////////////////////////////
    ////////////////////5∗x^2+a∗x+b <= c////////////////////////////////////////
    wynik=0;
    for(int i=c;5*(i*i)+a*i+b>c;i--)
    {
        wynik=i-1; // pętla sprawdzi do warunku i > więc i-1 będzie największą liczbą <=
    }
    printf("%i\n", wynik);
    return 0;
}