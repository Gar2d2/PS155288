#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][4] = {{1,2,8,-2},{7,8,1,3},{-8,4,1,2}};
    int a = sizeof(int*); //a=8
    int * p = tab+1; //p=0x61fde0 , *p =7
    int r = *(*(tab+2)-1); // r=3 , &r=0x61fe0c
    *p=*(tab+1)+3; //p=0x61fde0 , **p =3
    r= *(*(tab+1)+4); // r=-8 , &r=0x61fe0c
    return 0;
}
