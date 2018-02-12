#include<stdio.h>
int main()
{
int a[10],i,min,n;
printf("ARRAY SIZE \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("\n %d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d",min);
}
