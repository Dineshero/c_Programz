#include<stdio.h>
int main()
{
	int n,i,a=1,b=1,c=0;
printf("Enter number");
scanf("%d",&n);
printf("%d \n %d",a,b);
for(i=0;i<(n-2);i++)
{
c=a+b;
printf("\n %d",c);
a=b;b=c;
}
}
