#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int r,A;
    printf("Enter the radius of circle:\t");
    scanf("%d",&r);
    A=3.14*pow(r,2);
    printf("The area of circle is:\t%d",A);
    getch();

}
