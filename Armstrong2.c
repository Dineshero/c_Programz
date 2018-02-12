#include <iostream>
using namespace std;

int main()
{
  int a, b, i, num, d, sum;

  cout << "Enter first number: ";
  cin >> a;

  cout << "Enter second number: ";
  cin >> b;

  cout << "Armstrong numbers between " << a << " and " << b << " are: " << endl;
  for(i = a; i <= b; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            d = num % 10;
            sum = sum + d * d* d;
        }

        if(sum == i)
        {
            cout << i ;
            cout<< endl;
        }
  }

  return 0;
}
