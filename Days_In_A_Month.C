/*Write a C program print total number of days in a month using switch case.*/
#include<stdio.h>
void main()
{
int n;
printf("\nEnter Month Number between 1 to 12   :   ");
scanf("%d",&n);
printf("\nNumber of Days in ");
switch(n)
    {
        case 1:
            printf("January is 31");
            break;
        case 2:
            printf("February is 28 days in a common year and 29 days in leap years");
            break;
        case 3:
            printf("March is 31");
            break;
        case 4:
            printf("April is 30");
            break;
        case 5:
            printf("May is 31");
            break;
        case 6:
            printf("June is 30");
            break;
         case 7:
            printf("July is 31");
            break;
        case 8:
            printf("August is 31");
            break;
        case 9:
            printf("September is 30");
            break;
        case 10:
            printf("October is 31");
            break;
        case 11:
            printf("November is 30");
            break;
        default:
            printf("December is 31");
    }
}
