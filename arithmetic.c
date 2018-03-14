#include <stdio.h>
int main()
{	
int num1,num2,i;
char s;
for(i=0;i<1;i++)
{
scanf("%d %c %d",&num1,&s,&num2);
if(s=='/')
{
printf("%d\n",(num1/num2));
}
else
{
printf("%d\n",(num1%num2));
}
}
}
