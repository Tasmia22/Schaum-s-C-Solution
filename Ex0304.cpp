//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.4 on page 38
//  Illustrates a common programming error
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // tries to determine whether an input number is equal to 22:
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  if (n = 22) cout << n << " = 22" << endl;  // LOGICAL ERROR!
  else cout << n << " != 22" << endl;
}
