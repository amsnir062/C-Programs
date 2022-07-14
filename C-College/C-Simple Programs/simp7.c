#include <stdio.h>
#include <conio.h>
void main()
{
    char name[100];
    printf("Enter your name:\t");
    gets(name);
    printf("Your name is:\t");
    puts(name);
    getch();
}
