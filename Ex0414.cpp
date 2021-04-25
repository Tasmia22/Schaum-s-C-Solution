//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.14 on page 67
//  Using a for loop with increment 2
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // determines whether an input number is prime:
  long n;
  cout << "Enter a positive integer: ";
  cin >> n;
  if (n < 2) cout << n << " is not prime." << endl;
  else if (n < 4) cout << n << " is prime." << endl;
  else if (n%2 == 0) cout << n << " = 2*" << n/2 << endl;
  else
  { for (int d=3; d <= n/2; d += 2)
      if (n%d == 0)
      { cout << n << " = " << d << "*" << n/d << endl;
        exit(0);
      }
    cout << n << " is prime." << endl;
  }
}
