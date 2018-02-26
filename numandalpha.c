#include<stdio.h>
#include<string.h>
int main()
{
char i,str[100],n=0;
printf("String");
scanf("%[^\n]s",str);	
for(i=0;str[i]!='\0';i++)
{
if(str[i]>= '0' && str[i]<= '9')
{
	n=1;
}}
if(n==1)
{
	printf("YES");
}else{
     printf("NO");
}}
