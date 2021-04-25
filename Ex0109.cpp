//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 1.9 on page 7
//  Initializing Variables
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints "m = ?? and n = 44":
  int m;  // BAD: m is not initialized
  int n=44;
  cout << "m = " << m << " and n = " << n << endl;
}
