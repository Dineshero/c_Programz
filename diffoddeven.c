#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=b-a;
	if(c%2==0)
	{
		printf("Even");
	}else
	{
		printf("Odd");
	}
}
