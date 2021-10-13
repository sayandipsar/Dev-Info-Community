/****************************************************************
 Write a C program to convert Binary to Octal number system.
******************************************************/
#include<stdio.h>
#include<math.h>
void main()
{
    int b,d=0,o=0,n,i,r,rev=0;
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
    while(d!=0)
    {
    r=d%8;
    o=o*10+r;
    d=d/8;
    }
    while(o!=0)
    {
        r=o%10;
        rev=rev*10+r;
        o=o/10;
    }
    printf("\n Value of octal is %d",rev);
}