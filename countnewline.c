#include<stdio.h>
#include<string.h>
int main()
{
char s[100],i=0,count=0;
printf("Enter the string \n");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
{count++;
	
}	
}printf("%d",count);}
