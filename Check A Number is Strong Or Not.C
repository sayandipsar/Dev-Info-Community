
/******************************************************************************
Write a C program to check whether a number is Strong number or not.
******************************************************************************/

#include <stdio.h>
void main()
{
int n,r,s=0,m;
printf("\nEnter a number    ");
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
m=n;
while(n!=0)
    {
        r=n%10;
        
        n=n/10;
        s=s+fact(r);
    }
if(s==m)
    printf("\nThe number %d is strong ",m);
else
    printf("\n The number %d is not strong",m);
}

/************************OR********************/


#include <stdio.h>
void main()
{
int n,r,m;
printf("\nEnter a number    ");
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
m=n;
if(m==checkstrong(n))
    printf("\nThe number %d is strong ",m);
else
    printf("\n The number %d is not strong",m);
}

