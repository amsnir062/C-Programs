#include <stdio.h>
#include <conio.h>
void main()
{
    float total,eng,nep,math,phy,chem,comp,avg;
    printf("Enter the marks of English:\t");
    scanf("%f",&eng);
    printf("Enter the marks of Nepali:\t");
    scanf("%f",&nep);
    printf("Enter the marks of Maths:\t");
    scanf("%f",&math);
    printf("Enter the marks of Physics:\t");
    scanf("%f",&phy);
    printf("Enter the marks of Chemistry:\t");
    scanf("%f",&chem);
    printf("Enter the marks of Computer:\t");
    scanf("%f",&comp);
    if(eng>=40&&nep>=40&&math>=40&&phy>=40&&chem>=40&&comp>=40)
    {
        total=eng+nep+math+phy+chem+comp;
        avg=total/6;
        printf("The percentage is:\t%f",avg);
        if(avg>=75)
        {
            printf("\n You got distinction");
        }
        else if(avg>=60)
        {
            printf("\n You got first division");
        }
        else if(avg>=45)
        {
            printf("\n You got second division");
        }
        else
        {
            printf("\n You got third division");
        }
    }
    else
    {
        printf("You are fail");
    }
getch();
}
