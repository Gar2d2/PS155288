#include <stdio.h>
#include <stdlib.h>

void usun(char* napis)
{
    int i = 1;
    while(napis[i])
    {
        if(i%2)
        {
            napis[i] = ' ';
        }
        i++;
    }
    i = 0;
    while(napis[i])
    {
        if(napis[i] ==' ')
        {
            int j = i;
            while(napis[j])
            {
                napis[j]= napis[j+1];
                j++;
            }
        }
        i++;
    }
    napis[i] = '\0';
}
int main()
{
    char napis[] = "abc123";
    usun(napis);
    printf("%s",napis);
}