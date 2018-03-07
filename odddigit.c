#include<stdio.h>
int main()
{
int n,n1;
printf("Enter a number");
scanf("%d",&n1);
while(n1!=0)
{
n=n1%10;
if(n%2!=0)
{
printf("\t %d",n);
}
n1=n1/10;
}

}
