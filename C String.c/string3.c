#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[20];
    int length;
    printf("Enter the string:\t");
    gets(name);
    length=strlen(name);
    printf("The length of given string is: %d",length);
    getch();
}
