//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 4.8 on page 81
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int sum=0;
  for (int i=1; i <= n; i++)
    sum += i*i;
  cout << "The sum of the first " << n << " squares is "
       << sum << endl;
}
