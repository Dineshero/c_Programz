#include<stdio.h>
int main()
{
	int p,t,r,res;
	scanf("%d%d%d",&p,&t,&r);
	res=p*(1+(r*t));
  res=res/100;
	printf("%d",(1-res));
}
