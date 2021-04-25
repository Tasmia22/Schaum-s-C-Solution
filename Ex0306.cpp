//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.6 on page 39
//  Using a statement block
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // sorts two input integers:
  int x, y;
  cout << "Enter two integers: ";
  cin >> x >> y;
  if (x > y) { int temp=x; x = y; y = temp; }  // swap x and y
  cout << x << " <= " << y << endl;
}
