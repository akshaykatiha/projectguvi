//Find the minimum element in a given array
#include <stdio.h>

int main() 
{
    int n=0,min=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(min-a[i]>0)
        {
            min=min^a[i];
            a[i]=min^a[i];
            min=min^a[i];
        }
    }
    printf("%d",min);
}
