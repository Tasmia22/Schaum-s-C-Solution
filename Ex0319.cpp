//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.19 on page 49
//  Using the conditional expression operator
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the minimum of the two input numbers:
  int m, n;
  cout << "Enter two integers: ";
  cin >> m >> n;
  cout << (m<n?m:n) << " is the minimum." << endl;
}
