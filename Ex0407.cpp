//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.7 on page 63
//  An infinite loop
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // computes Fibonacci numbers:
  long bound;
  cout << "Enter a positive integer: ";
  cin >> bound;
  cout << "Fibonacci numbers < " << bound << ":\n0, 1";
  long f0=0, f1=1;
  while (true)         // ERROR: INFINITE LOOP!     (Press <Ctrl>+C.)
  { long f2 = f0 + f1;
    cout << ", " << f2;
    f0 = f1;
    f1 = f2;
  }
}
