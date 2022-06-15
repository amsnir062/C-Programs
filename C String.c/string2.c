#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[]={"NEPAL"};
    char target[10];
    strcpy(target,name);
    printf("The source of string is: %s\n",name);
    printf("The target of string is: %s\n",target);
    getch();
}
