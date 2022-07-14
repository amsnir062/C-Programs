#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter an integer:\t");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is even integer",a);
    }
    else
    {
        printf("%d is odd integer",a);
    }
    getch();
}
