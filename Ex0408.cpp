//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.8 on page 64
//  Using a do..while loop
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the sum of the first n integers for an input n:
  int n, i=0;
  cout << "Enter a positive integer: ";
  cin >> n;
  long sum=0;
  do
    sum += i++;
  while (i <= n);
  cout << "The sum of the first " << n << " integers is "
       << sum << endl;
}
