//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.5 on page 62
//  The Fibonacci numbers
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints Fibonacci numbers:
  long bound;
  cout << "Enter a positive integer: ";
  cin >> bound;
  cout << "Fibonacci numbers < " << bound << ":\n0, 1";
  long f0=0, f1=1;
  while (true)
  { long f2 = f0 + f1;
    if (f2 > bound) break;  // terminates the loop immediately
    cout << ", " << f2;
    f0 = f1;
    f1 = f2;
  }
}
