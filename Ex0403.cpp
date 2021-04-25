//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.3 on page 61
//  Using a while statement
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the sume of the first n squares for an input n:
  double x;
  cout << "Enter a positive number: ";
  cin >> x;
  while (x > 0)
  { cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << "Enter another positive number (or 0 to quit): ";
    cin >> x;
  }
}
