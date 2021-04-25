//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.12 on page 66
//  The factorial numbers again
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the factorial numbers:
  long bound;
  cout << "Enter a positive integer: ";
  cin >> bound;
  cout << "Factorial numbers that are <= " << bound << ":\n1, 1";
  long f=1;
  for (int i=2; f <= bound; i++)
  { f *= i;
    cout << ", " << f;
  }
}
