/****************************************************************
 Write a C program to convert Binary to Decimal number system.
******************************************************/
#include<stdio.h>
#include<math.h>
void main()
{
    int b,d=0,n,i,r;
    printf("\nEnter a binary number   ");
    scanf("%d",&b);
    i=0;
    while(b!=0)
    {
        r=b%10;
        d=d+r*(pow(2,i));
        b=b/10;
        i++;
    }
    printf("\nThe decimal is %d",d);
}