//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.3 on page 19
//  Integer Type Ranges
//  Courtesy :: Rajib Mikail.

#include <iostream>
#include <limits>   // defines the constants SHRT_MIN, etc.

using namespace std;

int main()
{ // prints some of the constants stored in the <limits> header:
  cout << "minimum short = " << SHRT_MIN << endl;
  cout << "maximum short = " << SHRT_MAX << endl;
  cout << "maximum unsigned short = 0" << endl;
  cout << "maximum unsigned short = " << USHRT_MAX << endl;
  cout << "minimum int = " << INT_MIN << endl;
  cout << "maximum int = " << INT_MAX << endl;
  cout << "minimum unsigned int = 0" << endl;
  cout << "maximum unsigned int = " << UINT_MAX << endl;
  cout << "minimum long= " << LONG_MIN << endl;
  cout << "maximum long= " << LONG_MAX << endl;
  cout << "minimum unsigned long = 0" << endl;
  cout << "maximum unsigned long = " << ULONG_MAX << endl;  
}
