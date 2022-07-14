#include <stdio.h>
#include <conio.h>
void main()
{
    float x,y,z,avg;
    printf("Enter the three numbers:\t");
    scanf("%f%f%f",&x,&y,&z);
    printf("The average of three numbers is:\t%.2f",(x+y+z)/3);
    getch();
}
