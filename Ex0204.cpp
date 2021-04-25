//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.4 on page 21
//  Integer Arithmetic
//  Courtesy :: Rajib Mikail.

#include <iostream>

using namespace std;

int main()
{ // tests operators +, -, *, /, and %:
  int m=54;
  int n=20;
  cout << "m = " << m << " and n = " << n << endl;
  cout << "m+n = " << m+n << endl;  // 54+20 = 74
  cout << "m-n = " << m-n << endl;  // 54-20 = 34
  cout << "m*n = " << m*n << endl;  // 54*20 = 1080
  cout << "m/n = " << m/n << endl;  // 54/20 = 2
  cout << "m%n = " << m%n << endl;  // 54%20 = 14
}
