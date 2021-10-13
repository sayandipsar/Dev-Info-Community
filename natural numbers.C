/******************************************************************************
Write a C program to print all natural numbers from 1 to n. - using while loop

*******************************************************************************/

#include <stdio.h>

void main()
{
int n,i;
printf("\nHow many natural numbers to print :  ");
scanf("%d",&n);
printf("\nThe natural numbers upto n is :   ");
i=1;
while(i<=n)
    {
    printf("%d ",i);
    i++;
    }
}
