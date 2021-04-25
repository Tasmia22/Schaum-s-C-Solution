//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.11 on page 26
//  Promotion of Types
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints promoted vales of 65 from char to double:
  char c='A';  cout << "  char c = " << c << endl;
  short k=c;   cout << " short k = " << k << endl;
  int m=k;     cout << "   int m = " << m << endl;
  long n=m;    cout << "  long n = " << n << endl;
  float x=m;   cout << " float x = " << x << endl;
  double y=x;  cout << "double y = " << y << endl;
}
