//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.8 on page 41
//  Using compound conditions
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // finds the minimum of three input integers:
  int n1, n2, n3;
  cout << "Enter three integers: ";
  cin >> n1 >> n2 >> n3;
  if (n1 <= n2 && n1 <= n3) cout << "Their minimum is " << n1 <<endl;
  if (n2 <= n1 && n2 <= n3) cout << "Their minimum is " << n2 <<endl;
  if (n3 <= n1 && n3 <= n2) cout << "Their minimum is " << n3 <<endl;
}
