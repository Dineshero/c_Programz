#include<stdio.h>
int main()
{
	int n,i,sum=0,b,a[100];
	printf("Enter arraysize \t");
	scanf("%d",&n);
	printf("Enter the sum of num");
	scanf("\n %d",&b);
	for(i=1;i<=n;i++)
	{
		scanf("\n %d",&a[i]);
	}
	for(i=1;i<=b;i++)
	{
		sum=sum+a[i];
	}
	printf("\n %d",sum);
}
