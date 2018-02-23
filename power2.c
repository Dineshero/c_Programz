#include <stdio.h>
int main()
{
	int i,n,sum=1;
	printf("number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum*2;
		if(sum==n)
		{
			printf("Yes");
		}
	}
}
