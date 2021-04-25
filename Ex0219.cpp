//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 2.19 on page 32
//  Scope of Variables
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int x = 11;                                       // this x is global

int main()
{ // illustrates the nested and parallel scopes:
  int x = 22;
  { // begin scope of internal block
    int x = 33;
    cout << "In block inside main(): x = " << x << endl;
  }                                    // end scope of internal block
  cout << "In main(): x = " << x << endl;
  cout << "In main(): ::x = " << ::x << endl;
}
