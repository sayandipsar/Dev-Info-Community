/*Write a C program to calculate profit or loss.*/


#include<stdio.h>
void main()
{
float cp,sp,x;
printf("\nEnter selling price and cost price ");
scanf("%f%f",&sp,&cp);
if(sp>cp)
    {
        x=((sp-cp)/cp)*100;
        printf("\nProfit is %.2f Percent",x);
    }
else
    {
        x=((cp-sp)/cp)*100;
        printf("\nLoss is %.2f Percent",x);
    }
}