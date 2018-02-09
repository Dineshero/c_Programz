#include<stdio.h>
int main()
{
int n,i,res=1;
printf("Enter the number \t ");
scanf("%d",&n);
for(i=1;i<=5;i++)
{res=i*n;
	printf("\n %d",res);
}
}
