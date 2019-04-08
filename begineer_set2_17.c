#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,digit=0,temp=0,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp = temp/10;
        digit++;
    }
    temp=n;
    while(n!=0)
    {
        int r = n%10;
        n = n/10;
        sum = sum + pow(r,digit);
    }
    if(sum==temp)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
