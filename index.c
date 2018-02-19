#include<stdio.h>
int main()
{
int a[100],i,n;
printf("\n Array size");
scanf("\n %d",&n);
printf("Elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	printf("\n %d \t %d",a[i],i);
}}
