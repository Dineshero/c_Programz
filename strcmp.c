#include<stdio.h>
#include<string.h>
int main()
{
	char i,str[100],str1[100];
	int l1=0,l2=0;
	printf("string 1");
	scanf("%[\n]s",str);
	printf("string 2");
	scanf("%[\n]s",str1);
	for(i=0;str[i]!='\0';i++)
	{
                        l1++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		l2++;
	}
	if(l1>=l2)
	{printf("%s",str);
	}else
	{
		printf("s",str1);
	}
}
