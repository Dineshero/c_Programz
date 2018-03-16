#include<stdio.h>
int main()
{
int n,num[100],num1,i,s,count=0,sum=1;
printf("Enter the number");
scanf("%d",&n);
s=n;
while(n!=0)
{
n=n/10;
count++;
}
for(i=1;s!=0;i++)
{
num[i]=s%10;
num1=num[i]/10;
s=s/10;
}               	
i=count;
while(i!=0)
{
  sum=sum*num[i];
  i--;
}
printf("\n %d",sum);
}
