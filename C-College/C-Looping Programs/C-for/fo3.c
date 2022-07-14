#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j;
    char a='*';
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%c\t",a);
        }
        printf("\n");
    }
    return 0;
}
