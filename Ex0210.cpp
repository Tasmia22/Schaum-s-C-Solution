//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.10 on page 25
//  Simple Type Casting
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // casts a double value as an int:
  double v = 1234.56789;
  int n = int(v);
  cout << "v = " << v << ", n = " << n << endl ;
}
