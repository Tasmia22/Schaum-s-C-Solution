//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.12 on page 43
//  Nesting selection statements
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // tests whether one integer divides another:
  int n, d;
  cout << "Enter two positive integers: ";
  cin >> n >> d;
  if (d != 0)
    if (n%d == 0) cout << d << " divides " << n << endl;
    else cout << d << " does not divide " << n << endl;
  else cout << d << " does not divide " << n << endl;
}
