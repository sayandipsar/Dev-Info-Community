/*Write a C program to find maximum between two numbers using switch case.*/
#include<stdio.h>
void main()
{
int a,b,n;
char c;
printf("\nEnter two numbers  :   ");
scanf("%d%d",&a,&b);
if(a>b)
    n=1;
else
    n=2;
printf("\nGreater number is ");
switch(n)
    {
        case 1:
            printf("%d",a);
            break;
        default:
            printf("%d",b);
    }
}
