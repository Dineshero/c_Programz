#include<stdio.h>
int main()
{
int a[100],i,n,j,temp;
printf("Array size");
scanf("%d",&n);
printf("\n Elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}for(j=0;j<n;j++)
{for(i=0;i<n;i++)
{if(a[i]>a[i+1]){
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}}}
for(i=0;i<n;i++)
{
	printf("\n%d",a[i]);
}
}
