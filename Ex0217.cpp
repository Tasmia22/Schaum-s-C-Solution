//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.17 on page 31
//  Scientific Format
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints double values in scientific e-format:
  double x;
  cout << "Enter float: ";  cin >> x;
  cout << "Its reciprocal is: " << 1/x << endl;
}
