#include <stdio.h>
#include <stdlib.h>

void funkcja(int n, int m, int tab[][m]) // kompilować z flagą -std=c99
{
    free(tab);
}

int main()
{
    int tab[2][3];
    funkcja(2,3,tab);
    
    return 0;
}