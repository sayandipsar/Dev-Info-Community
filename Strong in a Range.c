/******************************************************************************
Write a C program to print all Strong numbers between 1 to n.
*******************************************************************************/

#include <stdio.h>
void main()
{
int n,r,m,i;
printf("\nEnter last range    ");
scanf("%d",&n);
int fact(int r)
    {
        int f=1;  
         for(int i=1;i<=r;i++)  
            {  
            f=f*i;  
            }  
    return f;  
    }
int checkstrong(int n)
    {
        int s=0;
        while(n!=0)
            {
            r=n%10;
            n=n/10;
            s=s+fact(r);
            }
        return(s);
    }
printf("\nStrong numbers are : ");
for(i=1;i<=n;i++)
    {
    m=i;
    if(m==checkstrong(i))
        printf("%d ",m);
    }
}
