/******************************************************************************
Write a C program to print Fibonacci series up to n terms.
*******************************************************************************/
#include <stdio.h>
void main()
{
int n,f1=0,f2=1,f3,i;
printf("\nEnter how many Fibonacci :    ");
scanf("%d",&n);
printf("\nThe fibonaccies are %d %d ",f1,f2);
for(i=0;i<=n-2;i++)
    {
    f3=f1+f2;
    f1=f2;
    f2=f3;
    printf("%d ",f3);
    }
}
