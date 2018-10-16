//Check for Leap year
#include<stdio.h>
int main()
{
int yr;
scanf("%d",&yr);
if(yr%400==0)
{
printf("Yes");
}
else if(yr%4==0 && yr%100!=0)
{
printf("Yes");
}
else
{
printf("No");
}
}
