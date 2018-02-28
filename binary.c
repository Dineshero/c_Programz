#include<stdio.h>
int main()
{
	int n,i,num[100],flag=0,s,count=0;
	printf("Enter a number");
	scanf("%d",&n);
	s=n;
	for(i=1;n!=0;i++)
	{
		num[i]=n%10;
		n=n/10;
                        count++;
	}
    for(i=1;i<=count;i++)
    { 
    	if(num[i]==0 || num[i]==1)
    	{
    		flag=1;
    	}else
    	{
    		flag=0;break;
    	}
    }
   if(flag==1)
   {
   	printf("\n YES");
   }
   else
   {
   	printf("\n NO");
   }
}
   
   
