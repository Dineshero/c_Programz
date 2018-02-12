#include <stdio.h>
int main()
{
    int number,num1, rem, r = 0;

    printf("Enter a integer: ");
    scanf("%d", &number);

    num1 = number;

    while (num1 != 0)
    {
        rem = num1%10;
        r= (rem*rem*rem)+r;
        num1 /= 10;
    }

    if(r == number)
        printf("%d is an Armstrong number.",number);

    else
        printf("%d is not an Armstrong number.",number);
}
