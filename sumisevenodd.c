#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	if(sum%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
