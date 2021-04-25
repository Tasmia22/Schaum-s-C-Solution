//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.17 on page 69
//  Using two control variables in a for loop
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // repeats until n divides m:
  for (int m=95, n=11; m%n > 0; m -= 3, n++)
    cout << m << "%" << n << " = " << m%n << endl;
}
