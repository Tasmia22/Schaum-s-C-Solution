//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.7 on page 23
//  Floating-Point Arithmetic
//  Courtesy :: Rajib Mikail.

#include <iostream>

using namespace std;

int main()
{ // tests the floating-point operators +, -, *, and /:
  double x=54.0;
  double y=20.0;
  cout << "x = " << x << " and y = " << y << endl;
  cout << "x+y = " << x+y << endl;  // 54.0+20.0 = 74.0
  cout << "x-y = " << x-y << endl;  // 54.0-20.0 = 34.0
  cout << "x*y = " << x*y << endl;  // 54.0*20.0 = 1080.0
  cout << "x/y = " << x/y << endl;  // 54.0/20.0 = 2.7
}
