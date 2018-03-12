#include<stdio.h>
int main()
{
	int i,n,m,g,a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
if(a>b)
{
m=a;n=b;	
}else
{
	n=a;m=b;
}
if(m%n==0)
{
	if(m>n)
	{
		printf("%d",m);
	}else
	{
		printf("%d",n);
	}
}else
{
	printf("%d",m*n);
}
}
