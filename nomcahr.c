#include<stdio.h>
int main()
{
    char str[200];
    int n=0, i;
    printf("Enter the String \n");
    scanf("%[^\n]s", str);
    for (i = 0;str[i]!='\0';i++)
    { 
n++;
}
printf("%d\n",n+1);
}
