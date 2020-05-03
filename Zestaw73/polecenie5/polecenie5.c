#include <stdio.h>
#include <stdlib.h>
///nie mam pojęcia jak ten ciąg w rzeczywistości wygląda
//piszę własną interpretacje
int reku(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n>0)
    {
        if(n/3 == 0)
        {
            return reku(n-1);
        }
        int k = n/3;
        return reku(n-1)+k;
    }
    return n;

}

int main()
{
    printf("%d", reku(5));
}