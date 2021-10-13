/*Write a C program to print day of week name using switch case.*/
#include<stdio.h>
void main()
{
int n;
printf("\nEnter Day Number between 1 to 7   :   ");
scanf("%d",&n);
printf("\nName of the Day is ");
switch(n)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Satureday");
            break;
        default:
            printf("Sunday");
    }
}
