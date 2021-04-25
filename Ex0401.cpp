//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.1 on page 60
//  Using a while loop to compute a sum of consecutive integers 
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the sum of the first n integers for an input n:
  int n, i=1;
  cout << "Enter a positive integer: ";
  cin >> n;
  long sum=0;
  while (i <= n)
    sum += i++;
  cout << "The sum of the first " << n << " integers is " << sum << endl;
}
