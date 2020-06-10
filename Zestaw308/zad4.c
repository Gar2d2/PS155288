#include <stdio.h>
#include <stdlib.h>

typedef union Test {
    char r;
    float t;
} Test;

int main()
{

    Test test[6] = {{.r = 'a'}, {.t = 1}, {.r = 'd'}, {.t = 2}, {.r = 'c'}, {.t = 5}};
   
    

    printf("%c", test[0].r);
}