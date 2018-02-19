#include<stdio.h>
int main()
{
int a,b,temp=0;
printf("Enter the two values to swap ");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;

printf("The swapped values are \n");
printf("%d %d",a,b);
}
