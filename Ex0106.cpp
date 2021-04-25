//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 1.6 on page 5
//  Using Integer Variables
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints "m = 44 and n = 77":
  int m, n;
  m = 44;  // assigns the value 44 to the variable m
  cout << "m = " << m;
  n = m + 33;  // assigns the value 77 to the variable n
  cout << " and n = " << n << endl;
}
