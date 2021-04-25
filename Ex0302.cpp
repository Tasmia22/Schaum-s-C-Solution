//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.2 on page 37
//  Testing for divisibility again
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // reports whether one input number is divisible by another:
  int n, d;
  cout << "Enter two positive integers: ";
  cin >> n >> d;
  if (n%d) cout << n << " is not divisible by " << d << endl;
  else cout << n << " is divisible by " << d << endl;
}
