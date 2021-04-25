//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.4 on page 62
//  Using a break statement
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the sum of the first n integers for an input n:
  int n, i=1;
  cout << "Enter a positive integer: ";
  cin >> n;
  long sum=0;
  while (true)
  { if (i > n) break;  // terminates the loop immediately
    sum += i++;
  }
  cout << "The sum of the first " << n << " integers is "
       << sum << endl;
}
