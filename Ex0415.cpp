//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.15 on page 68
//  Using a sentinel to control a for loop
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // finds the maximum of a sequence of numbers:
  int n, max;
  cout << "Enter positive integers (0 to quit): ";
  cin >> n;
  for (max = n; n > 0; )
  { if (n > max) max = n;
    cin >> n;
  }
  cout << "max = " << max << endl;
}
