/*Write a C program to input electricity unit 
charges and calculate total electricity 
bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added
 to the bill
*/

#include<stdio.h>
void main()
{
    float bill,units;
    printf("\n Enter total units ");
    scanf("%f",&units);
    if(units<=50)
        bill=units*.50;
    else if((units>50)&&(units<=150))
        bill=50*0.5+(units-50)*.75;
    else if((units>150)&&(units<=250))
        bill=50*.5+100*.75+(units-150)*1.20;
    if(units>=250)
        bill=50*.5+100*.75+100*1.20+(units-250)*1.50;
    bill=bill*(120/100);
    printf("\nTotal bill is Rs %f",bill);
}
