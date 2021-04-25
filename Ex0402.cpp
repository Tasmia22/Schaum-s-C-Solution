//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.2 on page 61
//  Using a while loop to compute a sum of reciprocals
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the sume of the first n squares for an input n:
  int bound;
  cout << "Enter a positive integer: ";
  cin >> bound;
  double sum=0.0;
  int i=0;
  while (sum < bound)
    sum += 1.0/++i;
  cout << "The sum of the first " << i << " reciprocals is " << sum << endl;
}
