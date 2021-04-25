//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.11 on page 43
//  A logical error
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // tries to find the maximum of three input numbers:
  int n1, n2, n3;
  cout << "Enter three integers: ";
  cin >> n1 >> n2 >> n3;
  if (n1 >= n2 >= n3) cout << "max = " << n1;  // LOGICAL ERROR!
}
