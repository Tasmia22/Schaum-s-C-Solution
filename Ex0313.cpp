//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.13 on page 44
//  Using nested selection statements
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // finds the minimum of three input integers:
  int n1, n2, n3;
  cout << "Enter three integers: ";
  cin >> n1 >> n2 >> n3;
  if (n1 < n2)
    if (n1 < n3) 	cout << "Their minimum is " << n1 << endl;
    else 	cout << "Their minimum is " << n3 << endl;
  else  // n1 >= n2
    if (n2 < n3) 	cout << "Their minimum is " << n2 << endl;
    else 	cout << "Their minimum is " << n3 << endl;
}
