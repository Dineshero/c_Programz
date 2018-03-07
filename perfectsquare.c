#include<stdio.h>
int main()
{
	int a,b,c=0,d,flag=0,i;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	d=a*b;
	for(i=0;i<a+b;i++)
	{
		c=i*i;
		if(c==d)
		{
		flag=1;
		}
	}if(flag==1)
	printf("yes");
	else
	printf("No");
}
