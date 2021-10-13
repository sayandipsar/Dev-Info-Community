/******************************************************************************
Write a C program to find two's complement of a binary number.
*******************************************************************************/
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int l,i;
printf("\nEnter a binary Number     ");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
    {
        if(a[i]=='1')
            b[i]='0';
        else
            b[i]='1';
    }
b[l]='\0';
printf("\n1's Complement of the number is %s",b);
getch();
}
