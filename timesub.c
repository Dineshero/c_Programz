#include<stdio.h>
int main()
{
int hr1,hr2,hr,min1,min2,min;
printf("Enter the time in 12 format \n");
printf("Enter the time1(HH:MM):\n");
scanf("%d %d",&hr1,&min2);
printf("\n Enter the time2(HH:MM):\n");
scanf("%d %d",&hr2,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("%d  %d",hr,min);
}
