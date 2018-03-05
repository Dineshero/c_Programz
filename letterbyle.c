#include<stdio.h>
int main()
{
char s[100],i;
int n;
printf("Input");
scanf("%[^\n]s",s);
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n %s",s[i]);
	}
	
}
