//Find the sum of n terms of A.P.
#include<stdio.h>
int main()
{
int a=0,n=0,d=0;
scanf("%d%d%d",&n,&a,&d);
printf("%d",((2*a+(n-1)*d)*(n/2)));
}
