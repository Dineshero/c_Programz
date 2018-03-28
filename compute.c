//compute (A*B)/C
#include<stdio.h>
int main()
{
	int a,b,c,res=0;
	printf("A,B,C values:");
	scanf("%d%d%d",&a,&b,&c);
	res=a*b;
	res=res/c;
	printf("\n %d",res);
}
