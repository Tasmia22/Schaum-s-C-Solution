//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.13 on page 67
//  Using a descending for loop
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the first ten positive integers in reverse order:
  for (int i=10; i > 0; i--)
    cout << " " << i;
}
