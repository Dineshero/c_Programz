#include<stdio.h>
int main()
{
	int n,n1;
	printf("Enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		n1=n%10;
		n=n/10;
		printf("%d",n1);
	}
}
