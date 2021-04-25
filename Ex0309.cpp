//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.9 on page 41
//  User-friendly input
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // inputs an answer in several forms:
  char ans;
  cout << "Are you enrolled (y/n): ";
  cin >> ans;
  if (ans == 'Y' || ans == 'y') cout << "You are enrolled.\n";
  else cout << "You are not enrolled.\n";
}
