#include<stdio.h>
int main()
{
	int n,a[100],i,j,flag;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			j=i;
			break;
		}
	}printf("%d",j+1);
}
