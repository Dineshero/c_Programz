#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a%2==0)
	{
		a=a/2;
	}
	printf("%d",a);
}
