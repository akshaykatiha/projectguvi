// Check whether a number is +ve, -ve or zero
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);//Enter number
a>0 ? printf("Positive"):(a<0 ? printf("Negative"):printf("zero"));
}
