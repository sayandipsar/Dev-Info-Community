/*Write a C program to find all roots of a quadratic equation.*/

#include<math.h>
#include<stdio.h>
void main()
{
float a,b,c,d,e,x,y;
printf("\nEnter value of a,b,c ");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4.0*a*c;
e=sqrt(fabs(d));
x=-(b/(2.0*a));
y=e/(2.0*a);
if(d>=0)
    printf("Roots are %.2f %.2f",x+y,x-y);
else
    printf("Roots are %.2f+i%.2f, %.2f-i%.2f",x,y,x,y);
}