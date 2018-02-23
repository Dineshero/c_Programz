#include<stdio.h>
int main()
{
int n[100],small,big=0,i,num;
scanf("%d",&num);
for(i=0;i<num;i++)
{
    scanf("%d",&n[i]);
}
for(i=0;i<num;i++)
{
    if(small>n[i])
    {
        small=n[i];
    }
}
printf(" %d \n",small);

for(i=0;i<num;i++)
{
    if(big<n[i])
    {
        big=n[i];
    }
}
printf(" %d \n",big);

}
