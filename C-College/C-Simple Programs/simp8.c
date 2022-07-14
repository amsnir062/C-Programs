#include <stdio.h>
#include <conio.h>
void main()
{
    int l,b,p,h;
    printf("Enter the length of room:\t");
    scanf("%d",&l);
    printf("Enter the breath of room:\t");
    scanf("%d",&b);
    printf("Enter the height of room:\t");
    scanf("%d",&h);
    p=2*h*(l+b);
    printf("The area of four walls of room is:\t%d",p);
    getch();
}
