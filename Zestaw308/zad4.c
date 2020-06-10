#include <stdio.h>
#include <stdlib.h>

typedef union Test {
    char r;
    float t;
} Test;

int main()
{

    Test test[6] = {{.r = 'a'}, {.t = 1}, {.r = 'd'}, {.t = 2}, {.r = 'c'}, {.t = 5}};
   
    

    printf("%c\n", test[0].r);
    printf("%f\n", test[1].t);
    printf("%c\n", test[2].r);
    printf("%f\n", test[3].t);
    printf("%c\n", test[4].r);
    printf("%f\n", test[5].t);
}