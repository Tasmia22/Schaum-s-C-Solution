//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.1 on page 36
//  Testing for divisibility
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // reports if one input number is not divisible by another:
  int n, d;
  cout << "Enter two positive integers: ";
  cin >> n >> d;
  if (n%d) cout << n << " is not divisible by " << d << endl;
}
