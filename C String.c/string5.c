#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int x;
    char s1[10]={"ABC"};
    char s2[10]={"ABD"};
    x=strcmp(s1,s2);
    if(x<0)
    {
    printf("%s is less than %s",s1,s2);
    }
    else
    {
    printf("%s is greater than %s",s1,s2);
    }
    getch();
}
