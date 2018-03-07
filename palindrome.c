#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2;
printf("Enter a string");
scanf("%[^\n]s",s1);
s2=s1;
strrev(s1);
if(s1==s2)
{
	printf("Yes");
}else
{
	printf("No");
}
}
