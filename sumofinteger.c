#include<stdio.h>
int main()
{
	int n,num,num1,sum=0,s,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	s=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	while(s!=0)
	{
		num=s%10;
		s=s/10;
		sum=sum+num;
	}
printf("%d",sum);
}
