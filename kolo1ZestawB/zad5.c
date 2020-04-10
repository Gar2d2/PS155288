/* Napisz funkcję rekurencyjną, która dla otrzymanej w argumencie nieujemnej liczby całkowitej n zwraca
wartość elementu o indeksie n ciągu zdefiniowanego w następujący sposób
a 0 = a 1 = 1
a n = 2 · a n−1 + 6, n-nieparzyste,
a n = −a n−1 + 5, n-parzyste, */

#include <stdlib.h>
#include <stdio.h>

int cionk(int n)
{
    if(n < 2)
    {
        return 1;
    }
    if(!(n%2))
    {
        return -cionk(n-1) + 5;
    }
    
    return 2 * cionk(n-1) + 6;
}


int main()
{
    printf("%d\n", cionk(4));
}