#include<stdio.h>
int main()
{
int n,fact=1;
printf("Enter a number \t");
scanf("%d",&n);
while(n!=0)
{
	fact=fact*n;
	n--;
}
printf("%d",fact);
}
