//Factorial
#include<stdio.h>
int main()
{
int n=0,f=1;
scanf("%d",&n);
while(n!=1)
{
    f=f*n;
    n=n-1;
}
printf("%d",f);
}
