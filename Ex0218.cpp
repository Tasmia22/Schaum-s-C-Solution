//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 2.18 on page 31
//  Scope of Variables
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // illustrates the scope of variables:
  x = 11;    // ERROR: this is not in the scope of x
  int x;
  { x = 22;  // OK: this is in the scope of x
    y = 33;  // ERROR: this is not in the scope of y
    int y;
    x = 44;  // OK: this is in the scope of x
    y = 55;  // OK: this is in the scope of y
  }
  x = 66;    // OK: this is in the scope of x
  y = 77;    // ERROR: this is not in the scope of y
}
