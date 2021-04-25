//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.6 on page 22
//  Applying Composite Arithmetic Assignment Operators
//  Courtesy :: Rajib Mikail.

#include <iostream>

using namespace std;

int main()
{ // tests arithmetic assignment operators:
  int n=22;
  cout << "n = " << n << endl;
  n += 9;  // adds 9 to n
  cout << "After n += 9, n = " << n << endl;
  n -= 5;  // subtracts 5 from n
  cout << "After n -= 5, n = " << n << endl;
  n *= 2;  // multiplies n by 3
  cout << "After n *= 2, n = " << n << endl;
  n /= 3;  // divides n by 9
  cout << "After n /= 3, n = " << n << endl;
  n %= 7;  // reduces n to the remainder from dividing by 4
  cout << "After n %= 7, n = " << n << endl;
}
