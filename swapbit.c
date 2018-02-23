#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	a ^=b;
	b ^=a;
	a ^=b;
	printf("%d %d",a,b);
}
