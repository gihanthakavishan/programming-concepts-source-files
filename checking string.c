#include <stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
    char s1[200]="cm";
    char s2[200]="m";
    char y[200];
    int x;

    gets(y);

    x=strcmp(s1,y);
    printf("%d",x);
}
