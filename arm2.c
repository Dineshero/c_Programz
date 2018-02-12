#include<stdio.h>
int main()
{
  int a,b,i,num,d,sum;
 printf("Enter first number: ");
  scanf("%d",&a);
printf("Enter second number: ");
  scanf("%d",&b);
  for(i=a;i<=b;i++)
  {
        sum=0;
        num=i;

        for(;num>0;num/=10)
        {
            d=num%10;
            sum=sum+d*d*d;
        }

        if(sum == i)
        {
            printf("\n %d",i) ;
           
        }
  }

  return 0;
}
