#include<stdio.h>
int main()
{
int a,b;
printf("Enter the two values to swap \n");
scanf("%d%d",&a,&b);
a ^= b;
b ^= a;
a ^= b;
printf("The swapped values are %d %d",a,b);
}
