//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 1.10 on page 8
//  The const Specifier
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // defines constants; has no output:
  const char BEEP = '\b';
  const int MAXINT = 2147483647;
  const int N = MAXINT/2;
  const float KM_PER_MI = 1.60934;
  const double PI = 3.14159265358979323846;
}
