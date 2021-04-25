//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 1.11 on page 8
//  Using the Input Operator
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // tests the input of integers, floats, and characters:
  int m, n;
  cout << "Enter two integers: ";
  cin >> m >> n;
  cout << "m =  " << m << ", n = " << n << endl;
  double x, y, z;
  cout << "Enter three decimal numbers: ";
  cin >> x >> y >> z;
  cout << "x =  " << x << ", y = " << y << ", z = " << z << endl;
  char c1, c2, c3, c4;
  cout << "Enter four characters: ";
  cin >> c1 >> c2 >> c3 >> c4;
  cout << "c1 =  " << c1 << ", c2 = " << c2 << ", c3 = " << c3
       << ", c4 = " << c4 << endl;
}
