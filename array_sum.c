//Sum of N natural number
#include<stdio.h>
int main()
{
int n=0,k,c=0;
scanf("%d%d",&n,&k);
int a[n];
for(int i=0; i<k; i++)
{
    scanf("%d",&a[i]);
    c=c+a[i];
}
printf("%d",c);
}
