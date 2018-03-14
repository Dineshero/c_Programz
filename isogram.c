#include<stdio.h>
int main()
{
	char s1[100],s2[100],i,j;
	int flag;
	printf("Enter str:");
	scanf("%[^\n]s",s1);
	s2[j]=s1[i];
	for(i=0;s1[i]=0;i++)
	{
		for(j=0;s2[j]!=0;j++)
		{
			if(s1[i]==s2[j])
			{
				flag=1;
				break;
			}
		}
	}if(flag==1)
	{
		printf("Yes");
	}
}
