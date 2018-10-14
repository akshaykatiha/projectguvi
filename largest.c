//Largest of three numbers
#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);//Enter numbers
(a>b&&a>c)?printf("%d",a):((b>a&&b>c)?printf("%d",b):printf("%d",c));
return 0;
}
