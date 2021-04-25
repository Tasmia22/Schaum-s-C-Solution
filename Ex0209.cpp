//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.9 on page 24
//  Reading from the <cfloat> Header File
//  Courtesy :: Rajib Mikail.

#include <cfloat>  // defines the FLT constants
#include <iostream>  // defines the FLT constants
using namespace std;
int main()
{ // prints the storage sizes of the fundamental types:
  int fbits = 8*sizeof(float);        // each byte contains 8 bits
  cout << "float uses " << fbits << " bits:\n\t"
       << FLT_MANT_DIG - 1 << " bits for its mantissa,\n\t "
       << fbits - FLT_MANT_DIG << " bits for its exponent,\n\t "
       << 1 << " bit for its sign\n"
       << "          to obtain: " << FLT_DIG << " sig. digits\n"
       << " with minimum value: " << FLT_MIN << endl
       << "  and maximum value: " << FLT_MAX << endl;  
}
