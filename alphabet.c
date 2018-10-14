// Check whether a character is alphabet or not
#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);//Enter character
((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))?printf("Alphabet"):printf("No");
return 0;
}
