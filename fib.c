#include<stdio.h>
void main()
{
int n,i,a=1,b=1,c;
printf("The Fibonacci series is \n");
printf("The range of fiboncci series \n");
scanf("%d",&n);
printf("\n%d\n%d",a,b);
for(i=1;i<=(n-2);i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
}
