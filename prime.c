#include <stdio.h>
int main() 
{
int num,n,temp,num2;
printf("\n Enter a number");
scanf("%d",&num);
num2=num;
while(num2!=0)
{ n=num2%10;
    temp=temp*10 + n;
    num2=num2/10;
}
if(num==temp)
{
	printf("\n Yes");
}else
{
	printf("\n No");
}
}
