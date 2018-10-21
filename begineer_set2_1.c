//Power of a number without using inbuilt function pow()
#include<stdio.h>
int main()
{
    int n=0,p=0,f=0;
    scanf("%d%d",&n,&p);
    f=n;
    while(p>=2)
    {
        n=n*f;
        p=p-1;
    }
    printf("%d",n);
}
