#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = { -1, 5, 4, 2, 8, 7,4,-2};
    int *wsk;
    wsk = tab + 1;
    int b = *(wsk+=4); //b=7
    int c = b+2; // b=7  , c=9
    int d = (b/=-8) ^ (c-=-17); // b= 0 , c= 26  , d= 26
    int e = (wsk+=-1)[-2]; // b= 0 , c= 26  , d= 26  , e= 4
    e = (d *= 5) - (c += 3); // b= 0  , c= 29  , d= 130  , e= 101
    c = d - (b*=2); // b= 0 , c= 130  , d=130  , e= 101
    b = *wsk + e; // b= 109 , c= 130 , d= 130 , e= 101
    d = b / c; // b= 109 , c= 130 , d= 0  , e= 101
    return 0;
}