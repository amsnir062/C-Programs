#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
    int n,r;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    r=fact(n);
    printf("THe factorial is:\t%d",r);
    getch();
}
int fact(int n)
{
    int result;
    if(n<1)
    {
        result=1;
    }
    else
    {
        result=(n*fact(n-1));
    }
    return result;
}