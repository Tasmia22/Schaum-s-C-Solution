//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.11 on page 66
//  Reusing for loop control variable names
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the sum of the first n integers for an input n:
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  long sum=0;
  for (int i=1; i < n/2; i++)
    sum += i;
  for (int i=n/2; i <= n; i++)
    sum += i;
  cout << "The sum of the first " << n << " integers is "
       << sum << endl;
}
