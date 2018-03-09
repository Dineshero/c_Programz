#include<stdio.h>
#include<string.h>
int main()
{
    char str[75];
    int mid,len;
    scanf("%s",str);
    len=strlen(str);
    if(len%2!=0)
    {
        mid=len/2;
        str[mid]='*';
        printf("%s",str);
    }
    else
    {
        mid=len/2;
        str[mid]='*';
        str[mid-1]='*';
        printf("%s",str);
    }
}
