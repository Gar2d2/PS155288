#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    n<0 ? n=-n:n;
    printf("%d",n );
    return 0;
}