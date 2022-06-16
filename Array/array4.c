#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10],b,i,j;
    printf("Enter the integer:\t");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("The integers in descending order are:\t");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}
