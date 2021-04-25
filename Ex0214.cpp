//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.14 on page 28
//  Round-off Error
//  Courtesy :: Rajib Mikail.

#include <iostream> 
using namespace std;

int main()
{ // illustrates round-off error::
  double x = 1000/3.0;						cout << "x = " << x << endl;  // x = 1000/3
  double y = x - 333.0;						cout << "y = " << y << endl; // y = 1/3
  double z = 3*y - 1.0;						cout << "z = " << z << endl; // z = 3(1/3) - 1
  if (z == 0) cout << "z == 0.\n";
  else cout << "z does not equal 0.\n";             // z != 0
}
