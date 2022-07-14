#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\n Line 1.");
    printf("\n Line 2.");
    printf("\n Line 3.");
    printf("\n Line 4.");
    goto last;
    printf("\n Line 5.");
    printf("\n Line 6.");
    last:
        printf("\n End of a program");
    getch();
}
