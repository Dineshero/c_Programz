#include<stdio.h>
void main()
{
int fl=0,i,n;
printf("Enter a num");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
fl=1;
break;
}}
if(fl==0)
{
printf("Yes");
}
else
{
printf("No");
}
}
