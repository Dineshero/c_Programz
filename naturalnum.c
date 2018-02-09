#include<stdio.h>
int main()
{
	int limit,i,sum=0;
	printf("Enter number \t");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		sum=sum+i;
	}

	printf("\n %d",sum);
}

