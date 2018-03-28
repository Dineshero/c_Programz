#include<stdio.h>
int main()
{
	int i,min,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{min=a[i];
	}
}printf("%d",min);
}
