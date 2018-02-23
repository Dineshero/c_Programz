#include<stdio.h>
int main()
{
	int i,a[10],max=0;
	printf("Enter 10 elements");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&a[i]);
	}for(i=1;i<=10;i++)
	{
	if(max<a[i])
		{
	     max=a[i];
		}
	}
	printf("\n %d",max);
}
