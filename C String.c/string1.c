#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[20];
    printf("Enter the string:\t");
    gets(name);
    strrev(name);
    printf("The reverse of given string is: %s",name);
    getch();
}
