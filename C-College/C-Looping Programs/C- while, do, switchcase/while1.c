#include <stdio.h>
int main()
{
    int num, o, rem, r = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    o = num;

    while (o != 0)
    {
        rem = o % 10;
       r += rem * rem * rem;
       o /= 10;
    }

    if (r == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}
