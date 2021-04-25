//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.18 on page 69
//  Nesting for loops
//  Courtesy :: Rajib Mikail.

#include <iomanip>   // defines setw()
#include <iostream>  // defines cout
using namespace std;

int main()
{ // prints a multiplication table:
  for (int x=1; x <= 12; x++)
  { for (int y=1; y <= 12; y++)
      cout << setw(4) << x*y;
    cout << endl;
  }
}
