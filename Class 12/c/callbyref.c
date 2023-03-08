#include<stdio.h>
#include<conio.h>
int show(int *,int *);
void main()
{
    int x=5,y=10;
    show(&x,&y);
    printf("The value of x is: %d\n",x);
    printf("The value of y is: %d",y);
    getch();
}
int show(int *a, int *b)
{
    *a=50;
    *b=70;
    return(*a,*b);
}