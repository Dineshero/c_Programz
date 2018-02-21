#include<stdio.h>
int main()
{
int word,n=0;
char str[100];
printf("Enter the string\n");
gets(str);
for(word=0;str[word]!='\0';word++)
{
if(str[word]==' ' || str[word]=='.' || str[word]== ',' || str[word]=='@' || str[word]=='$' || str[word]=='_')
n++;
}
printf("The number of character in the sentences are %d\n",n);
}
