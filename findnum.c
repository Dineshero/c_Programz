#include<stdio.h>
int main()
{
	int ans,n[30],key,num,i;
	scanf("%d",&num);
	printf("Enter the key:");
	scanf("%d",&key);
	for(i=1;i<=num;i++)
	{
		scanf("%d",&n[i]);
	}
	i=key;
	ans=n[i];
	printf("%d",ans);
}
