#include<stdio.h>
int main()
{
int a[10],i,max;
for(i=0;i<10;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
