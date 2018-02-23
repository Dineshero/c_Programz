#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
