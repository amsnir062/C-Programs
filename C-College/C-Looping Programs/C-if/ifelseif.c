#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter an integer:\t");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is positive integer",a);
    }
    else if (a<0)
    {
        printf("%d is negative integer",a);
    }
    else
    {
        printf("%d is zero",a);
    }
    getch();
}
