#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("Enter a character\t");
    a=getchar();

    switch(a)
    {
        case'A||a':
        printf("\n %c is vowel character",a);
        break;

        case'E||e':
        printf("\n %c is vowel character",a);
        break;

        case'I||i':
        printf("\n %c is vowel character",a);
        break;

        case'O||o':
        printf("\n %c is vowel character",a);
        break;

        case'U||u':
        printf("\n %c is vowel character",a);
        break;

        default:
        printf("\n %c is consonant character",a);
    }
}
