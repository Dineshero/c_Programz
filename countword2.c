#include<stdio.h>
int main()
{
char s[100],i;
int count=1;
printf("Input");
scanf("%[^\n]s",s);
for(i=0;s[i]!=0;i++)
{
	if(s[i]==' ')
	{
             count++;
	}
	
}
printf("%d",count);
}
