//To find the sum of no. upto enteres integer
#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("sum = %d", sum);
    return 0;
}
