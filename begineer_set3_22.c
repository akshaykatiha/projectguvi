//Find the maximum element in a array
#include <stdio.h>
int main() 
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=max^a[i];
            a[i]=max^a[i];
            max=max^a[i];
        }
    }
    printf("%d",max);
}
