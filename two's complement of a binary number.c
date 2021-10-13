/**********************
Write a C program to find two's complement of a binary number.
****************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,l,c=1;
char s[10],a[10],b[10];
clrscr();
printf("Enter the number: ");
scanf("%s",&s);
l=strlen(s);
for(i=0;i<l;i++)
	{
	if(s[i]=='1')
		a[i]='0';
	else if(s[i]=='0')
		a[i]='1';
	}
a[l]='\0';
for(i=l-1;i>=0;i--)
	{
	if(a[i]=='1' && c==1)
		b[i]='0';
	else if(a[i]=='0' && c==1)
		{
		b[i]='1';
		c=0;
		}
	else
		b[i]=a[i];
	}
b[l]='\0';
printf("\nThe two's complement of the number is %s",b);
getch();
}