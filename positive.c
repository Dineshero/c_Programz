#include<stdio.h>
int main()
{
int n;
printf("Enter the number \n");
scanf("%d",&n);
if(n>0)
{
printf("Positive");
}
else if(n<0)
{
printf("Negative");
}
else
{
printf("Zero");
}
}
