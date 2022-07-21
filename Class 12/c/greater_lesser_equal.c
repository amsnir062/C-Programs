#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("Enter any two numbers:\t");
    scanf("%d\t%d",&a,&b);
    if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
    else if(a<b)
    {
        printf("%d is lesser than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",a,b);
    }
}
