//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 1.5 on page 5
//  Inserting Numeric Literals into the Standard Output Stream
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints "The Millennium ends Dec 31 2000.":
  cout << "The Millennium ends Dec " << 3 << 1 << ' ' << 2000 << endl;
}
