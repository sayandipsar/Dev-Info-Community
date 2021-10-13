/******************************************************************************
Write a C program to print all odd number between 1 to 100.
******************************************************************************/

#include <stdio.h>

void main()
{
printf("\nAll odd numbers between 1 to 100 are :   ");
int i=1;
while(i<=100)
    {
        if(i%2!=0)
            printf("%d ",i);
        i++;
    }
}
