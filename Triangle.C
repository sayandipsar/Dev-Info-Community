
/*Write a C program to check whether the triangle
is equilateral, isosceles or scalene triangle.*/

#include<stdio.h>
void main()
{
float a,b,c;
printf("\nEnter side lengths of triangle ");
scanf("%f%f%f",&a,&b,&c);
if((a==b)&&(b==c))
    printf("\nThis is equilateral triangle.");
else if((a!=b)&&(b!=c)&&(a!=c))
    printf("\nThis is scalene triangle");
else
    printf("\nThis is isosceles triangle");
}