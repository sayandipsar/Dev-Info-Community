/*Write a C program to check whether a number is even or odd using switch case.*/
#include<stdio.h>
void main()
{
int n;
char c;
printf("\nEnter an integer  :   ");
scanf("%d",&n);
switch(n%2)
    {
        case 0:
            printf("This is An Even number");
            break;
        default:
            printf("This is An Odd Number");
    }
}
