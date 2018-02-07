#include<stdio.h>
int main()
{
char n;
printf("Enter \n");
scanf("%s",&n);
if(n>='a' && n<='z' || n>='A' && n<='Z')
{
printf("Alphabets");
}
else
{
printf("Number");
}
}
