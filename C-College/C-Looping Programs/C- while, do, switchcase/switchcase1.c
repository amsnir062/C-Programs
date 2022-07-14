#include <stdio.h>
#include <conio.h>
void main()
{
    char o;
    float a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &o);
    printf("Enter two operands: ");
    scanf("%f %f",&a, &b);
    switch(o)
    {
        case '+':
            printf("%.1f + %.1f = %.1f",a, b, a+b);
            break;

        case '-':
            printf("%.1f - %.1f = %.1f",a,b,a-b);
            break;

        case '*':
            printf("%.1f * %.1f = %.1f",a, b, a*b);
            break;

        case '/':
            printf("%.1f / %.1f = %.1f",a, b, a/b);
            break;

        default:
            printf("Error! operator is not correct");
    }
    getch();
}
