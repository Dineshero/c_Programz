#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the year: \t");
	scanf("%d",&yr);
	if(yr%4==0 || yr%100==0)

	{
		printf("Yes");
		}else{
			printf("No");
	}
}
