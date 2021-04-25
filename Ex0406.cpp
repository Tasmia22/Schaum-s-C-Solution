//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.6 on page 63
//  Using the exit(0) function to terminate a loop
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the Fibonacci numbers:
  long bound;
  cout << "Enter a positive integer: ";
  cin >> bound;
  cout << "Fibonacci numbers < " << bound << ":\n0, 1";
  long f0=0, f1=1;
  while (true)
  { int f2 = f0 + f1;
    if (f2 > bound) exit(0);
    cout << ", " << f2;
    f0 = f1;
    f1 = f2;
  }
}
