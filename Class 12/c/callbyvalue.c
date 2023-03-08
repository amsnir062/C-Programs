#include<stdio.h>
int show(int,int);
void main()
{
    int x=5,y=10;
    show(x,y);
    printf("The value of x is: %d",x);
    printf("The value of y is: %d",y);
}
int show(int x, int y)
{
    x=50;
    y=70;
    return(x,y);
}