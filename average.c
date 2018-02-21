#include<stdio.h>
int main()
{
	int n,i,sum=0,a[100];
	printf("Array size");
	scanf("%d",&n);
	printf("Element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\n %d",(sum/n));
}
