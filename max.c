#include<stdio.h>
int main()
{
int a[10],i,max,n;
printf("ARRAY SIZE \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("\n %d",&a[i]);
}
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("%d",max);
}
