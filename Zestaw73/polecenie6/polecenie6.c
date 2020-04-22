#include <stdio.h>
#include <stdlib.h>

int indeksy(int k, int* tab1, int* tab2)
{
    int wynik = 0;
    for (int i = 0; i<k ; i++)
    {
        if(*(tab1+i)!=*(tab2+i))
        {
            wynik++;
        }
    }
    return wynik;

}
int main()
{
    int k =5;
    int tab1[] = {2, 4, -2, 3, 5};
    int tab2[] = {2, 0, -2, 3, 1};
    printf("%d", indeksy(k, tab1, tab2));
}