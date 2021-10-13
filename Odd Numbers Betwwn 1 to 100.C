/******************************************************************************
Write a C program to print all even numbers between 1 to 100. - using while loop
******************************************************************************/

#include <stdio.h>

void main()
{
printf("\nAll even numbers between 1 to 100 are :   ");
int i=1;
while(i<=100)
    {
        if(i%2==0)
            printf("%d ",i);
        i++;
    }
}
