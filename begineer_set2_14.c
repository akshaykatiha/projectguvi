//Finding odd numbers between two given numbers
#include<stdio.h>
int main()
{
int n1=0,n2=0;
scanf("%d%d",&n1,&n2);
for(int i=n1+1; i<n2; i++)
{
    if(i%2!=0)
    {
        printf("%d ",i);
    }
}
}
