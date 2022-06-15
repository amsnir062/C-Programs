#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char string[20];
    printf("Enter the string:\t");
    gets(string);
    printf("The uppercase of given string is: %s",strupr(string));
    getch();
}
