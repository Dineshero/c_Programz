#include<stdio.h>
int main()
{
	char s[100],i;
	printf("Enter a string");
	scanf("%[^\n]s",s);
	for(i=1;s[i]!=0;i++)
{
	if(i%2==0)
	{
		printf("%s",s[i]);
	}
}
for(i=1;s[i]!=0;i++)
{
	if(i%2!=0)
	{
		printf("%s",s[i]);
	}
}
}
