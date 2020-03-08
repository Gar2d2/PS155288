#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // ax+by=c
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if(a!=0)
    {
        float delta = pow(b,2) - 4*a*c;
        float pDelta =  sqrt(delta);
        if(delta<0)
        {
            printf("nie ma rozwiązań");
        }
        else if(delta == 0)
        {
            float x= -b/(2*a);
            printf("%f",x);
        }
        else
        {
            float x1,x2;
            printf("x1=%f x2=%f ", (float)(-b-pDelta/(2*a)), (float)(-b+pDelta/(2*a)));
            
        }
    }
    else
    {
        if(b!=0)
        {
            
            printf("%f", (float)(-c/b));
        }
        else
        {
            if(c!=0)
            {
                printf("brak rozw");
            }
            else
            {
                printf("nieskończenie wiele rozw");
            }
            
        }
        
    }
    
    return 0;
}