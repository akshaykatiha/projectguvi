//Check a number is prime or not
#include<stdio.h>
int main()
{
    int n=0,c=0;
    scanf("%d",&n);
   for(int i=2; i<n; i++)
    {
      if(n%i==0)
      {
          c=1;
      }
    }
    if(c==1)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
