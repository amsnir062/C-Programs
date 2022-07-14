#include <stdio.h>
#include <conio.h>
main()
{
    for(int a=1;a<=10;a++)
    {
        if(a==5)
            {
            break;
            }
            else
            {
            printf("\n Line %d.",a);
            }
    }
    printf("\n End of program");
    getch();
}
