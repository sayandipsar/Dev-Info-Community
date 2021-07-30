//Sum of n user inputted number using C
#include<stdio.h>
void main()
{
    int n,i,a[n],s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("\nEnter %d integer numbers ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("\nSum is %d",s);
}
