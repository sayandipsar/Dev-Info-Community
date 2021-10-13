/******************************************************************************
Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

*******************************************************************************/

#include <stdio.h>

void main()
{
int n,i;
printf("\nHow many natural numbers to print :  ");
scanf("%d",&n);
printf("\nThe natural numbers upto n is :   ");
i=n;
while(i>=1)
    {
    printf("%d ",i);
    i--;
    }
}
