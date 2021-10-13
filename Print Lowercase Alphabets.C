/******************************************************************************
Write a C program to print all alphabets from a to z. - using while loop
*******************************************************************************/

#include <stdio.h>

void main()
{
printf("\nAll Alphabets from a to z are :   ");
int a=97;
while(a<=(97+25))
    {
    printf("%c ",a);
    a++;
    }

}
