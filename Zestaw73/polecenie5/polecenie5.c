#include <stdio.h>
#include <stdlib.h>

int reku(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    if(n%3 == 0 && n>0)
    {
        return reku(n-1);
    }
    if(n%3 == 1 && n>0)
    {
        return reku(3 * n) +1;
    }
    return n;

}

int main()
{
    printf("%d", reku(4));
}