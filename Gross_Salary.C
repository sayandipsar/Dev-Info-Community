/*Write a C program to input basic salary of an 
employee and calculate its Gross salary 
according to following:

Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%

*/

#include<stdio.h>
void main()
{
    float basic,hra,da,gross;
    printf("\n Enter basic salary ");
    scanf("%f",&basic);
    if(basic>=20000)
        {
            gross=(225*basic)/100;
            printf("\nGross salary is %.2f",gross);
        }
    else if((basic>=10000)&&(basic<20000))
        {
            gross=(215*basic)/100;
            printf("\nGross salary is %.2f",gross);
        }
    else
        {
            gross=(200*basic)/100;
            printf("\nGross salary is %.2f",gross);
        }
}
