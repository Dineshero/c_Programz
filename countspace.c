#include<stdio.h>
void main()
{
    char str[200];
    int n = 0, i;
    printf("Enter the String");
    scanf("%[^\n]s", str);
    for (i = 0;str[i] !=0;i++)
    {
       if (str[i] == ' ')
       n++;    
    }
    printf("number of spaces in given string are %d\n", n);
}
