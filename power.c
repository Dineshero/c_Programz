#include<stdio.h>
int main()
{
int n,m,i,res=1;
printf("Enter a number");
scanf("%d",&n);
printf("Power \t");
scanf("%d",&m);
while(m!=0)
{
    res=res*n;
    m--;
}
printf("%d",res);
}
