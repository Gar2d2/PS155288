#include <stdio.h>
#include <stdlib.h>

void strcon(char* str1, char* str2, char* str3)
{
    int i = 0, j = 0; 
    while(str2[i])//znajduje nullbyte w drugiej tablicy
    {
        i++;
    } 
    while(str1[j]) //iteruje do nullbyte w 1 tablicy
    {   
        str2[i] = str1[j]; //nadpisuje w miejscu nullbyte
        i++;
        j++;
    }
    str2[i] = '\0';//ustawia nullbyte na końcu 2 tablicy
    i=0;
    j=0;
    while(str3[i]) //znajduje nullbyte 3 tablicy
    {
        i++;
    }
    while(str2[j])//iteruje do nullbyte 2 tablicy
    {
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    
}

int main()
{
    char str1[10] = "ala";
    char str2[10] = "ma";
    char str3[10] = "kota";
    strcon(str1, str2, str3);
    printf("%s", str3);
}