//Digits in a number
//Sum of N natural number
#include<stdio.h>
int main()
{
int n=0,c=0;
scanf("%d",&n);
while(n!=0)
{
    n=n/10;
    c=c+1;
}
printf("%d",c);
}
