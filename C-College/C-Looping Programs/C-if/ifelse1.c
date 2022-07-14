#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter an integer:\t");
    scanf("%d",&a);
    if (a>50)
    {
        printf("%d is greater than 50",a);
    }
    else
    {
        printf("%d is smaller than 50",a);
    }
    getch();
}
