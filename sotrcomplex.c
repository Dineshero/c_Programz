#include<stdio.h>
int main(){
    int i,j,l,a[100],num,t;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=num;j++)
    {
        for(l=j+1;l<=num;l++)
        {
            if(a[j]>a[l])
            {
                t=a[j];
                a[j]=a[l];
                a[l]=t;
            }
        }
    }
printf("%d",a[j/2]);
}
