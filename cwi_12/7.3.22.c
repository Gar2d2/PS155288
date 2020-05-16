#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Zdefiniuj strukturę trojkat mogącą służyć jako typ elementów listy
jednokierunkowej. Struktura trojkat powinna posiadać pola służące
do przechowywania wszystkich boków trójkąta oraz jego pola.
Napisz funkcję pole, która otrzymuje w argumencie listę wskaźnikową
o elementach typu trojkat i we wszystkich elementach listy do odpowiedniego
 pola wstawia wartość pola trójkąta o bokach, których długość przechowuje dana
  struktura. Napisz dwie wersje funkcji: dla list z głową i dla list bez głowy.*/
typedef struct trojkat
{
    float a,b,c,pole;
    struct trojkat *next;
} trojkat;

trojkat* utworz()
{
    trojkat* ptr = (trojkat*)malloc(sizeof(struct trojkat));
    ptr->next = NULL;
    return ptr;
}
void ustaw(const trojkat* Lista)
{
    trojkat* temp = (trojkat*)Lista;
    while(temp)
    {
        float p = (temp->a + temp->b + temp->c)/2;
        temp->pole = (float)sqrt(p*(p-temp->a)*(p-temp->b)*(p-temp->c));
        temp = temp->next;
    }
}
void ustawHead(const trojkat* Lista)
{
    trojkat* temp = (trojkat*)Lista;
    while(temp->next)
    {
        temp = temp->next;
        float p = (temp->a + temp->b + temp->c)/2;
        temp->pole = sqrt(p*(p-temp->a)*(p-temp->b)*(p-temp->c));
    }
}
void dodajw(const trojkat* Lista, int a, int b, int c);
void dodajb(trojkat** Lista, int a, int b, int c);


int main()
{
    trojkat* Lista = (trojkat*)malloc(sizeof(trojkat));
    Lista->next = NULL; //lista z głową 
    dodajw(Lista, 3,3,3);
    dodajw(Lista, 4,2,3);
    ustawHead(Lista);
    while(Lista->next)
    {
        Lista = Lista->next;
        printf("%f\n", Lista->pole);
    }
    Lista = NULL; //lista bez głowy
    dodajb(&Lista, 3,3,3);
    dodajb(&Lista, 4,2,3);
    ustaw(Lista);
    while(Lista)
    {
        printf("%f\n", Lista->pole);
        Lista = Lista->next;
    }
    return 0;
}

void dodajw(const trojkat* Lista, int a, int b, int c)
{
    trojkat* temp = (trojkat*)Lista;
    trojkat* ptr = (trojkat*)malloc(sizeof(struct trojkat));
    ptr->a = a;
    ptr->b = b;
    ptr->c = c;
    ptr->next = NULL;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = ptr;
}
void dodajb(trojkat** Lista, int a, int b, int c)
{
    
    trojkat* ptr = (trojkat*)malloc(sizeof(struct trojkat));
    ptr->a = a;
    ptr->b = b;
    ptr->c = c;
    ptr->next = NULL;
    if(!*Lista)
    {
        *Lista = ptr;
        return;
    }
    
    trojkat* temp = *Lista;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = ptr;
}

