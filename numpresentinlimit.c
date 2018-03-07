#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number");
	scanf("%d",&a);
	printf("Enter limits");
	scanf("%d%d",&b,&c);
	if(a>=b && a<=c)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
