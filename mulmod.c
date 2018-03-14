#include<stdio.h>
int main()
{
	int a,b,c,res;
	printf("Enter 3 values");
	scanf("%d%d%d",&a,&b,&c);
	res=(a*b)%c;
	printf("\n %d",res);
}
