#include <stdio.h>
#include <stdlib.h>

struct test
{
    int a;
    char b;
};

int main()
{
    struct test zm = {98,'G'};
    int*p;
    p=&zm; // 0x61fe0c  , *p=98
    char w = zm.b; // w= 'G' , &w=0x61fe17
    p++; // p= 0x61fe10 , *p= 2037063
    w--; // w= 'F'  , &w= 0x61fe17
    zm.b=99;  // w= 'F' , &w= 0x61fe17
    return 0;
}
