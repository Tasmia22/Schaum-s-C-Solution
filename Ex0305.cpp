//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.5 on page 39
//  The minimum of three integers
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // finds the minimum of three input integers:
  int n1, n2, n3;
  cout << "Enter three integers: ";
  cin >> n1 >> n2 >> n3;
  int min=n1;              // now min <= n1
  if (n2 < min) min = n2;  // now min <= n1 and min <= n2
  if (n3 < min) min = n3;  // now min <= n1, min <= n2, and min <= n3
  cout << "Their minimum is " << min << endl;
}
