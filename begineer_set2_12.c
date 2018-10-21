//Find the number is palindrome or not
#include<stdio.h>
int main()
{
    int n=0,t=0,r=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
       r=r*10+n%10;
       n=n/10;
    }
    if(t==r)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
