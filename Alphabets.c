#include<stdio.h>
int main()
{
int n;
printf("Enter \n");
scanf("%d,&n);
if(n>='a' && n<='z' || n>='A' && n<='Z')
{
printf("Number");
}
else
{
printf("Alphabet");
}
}
