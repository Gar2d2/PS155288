#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct planeta
{
    int Numer;
    char Nazwa[50];
    double Promien;
} planeta;

planeta maxvol(planeta* Arr, int size)
{
    int ind = 0;
    double  maxObj = (4*3.14*pow(Arr[0].Promien, 3.0))/3;
    for(int i = 0; i < size; i++)
    {
        double obj = (4*3.14*pow(Arr[i].Promien, 3.0))/3;
        if(obj > maxObj)
        {
            maxObj = obj;
            ind = i;
        }
    }
    return Arr[ind];
}
int main()
{
    planeta tablica[3] = {
        {0, "merkury", 1001.2}, 
        {1, "wenus", 1001.1}, 
        {2, "ziemia", 1001.3}
    };
    planeta najwieksza = maxvol(tablica, 3);
        printf("%d\n%s\n%.2f",
        najwieksza.Numer,
        najwieksza.Nazwa,
        najwieksza.Promien
    );

}