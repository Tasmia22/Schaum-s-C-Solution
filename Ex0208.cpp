//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.8 on page 23
//  Using the sizeof Operator
//  Courtesy :: Rajib Mikail.

#include <iostream>

using namespace std;

int main()
{ // prints the storage sizes of the fundamental types:
  cout << "Number of bytes used:\n";
  cout << "\t          char: " <<           sizeof(char) << endl;
  cout << "\t         short: " <<          sizeof(short) << endl;
  cout << "\t           int: " <<            sizeof(int) << endl;
  cout << "\t          long: " <<           sizeof(long) << endl;
  cout << "\t unsigned char: " <<  sizeof(unsigned char) << endl;
  cout << "\tunsigned short: " << sizeof(unsigned short) << endl;
  cout << "\t  unsigned int: " <<   sizeof(unsigned int) << endl;
  cout << "\t unsigned long: " <<  sizeof(unsigned long) << endl;
  cout << "\t   signed char: " <<    sizeof(signed char) << endl;
  cout << "\t         float: " <<          sizeof(float) << endl;
  cout << "\t        double: " <<         sizeof(double) << endl;
  cout << "\t   long double: " <<    sizeof(long double) << endl;  
}
