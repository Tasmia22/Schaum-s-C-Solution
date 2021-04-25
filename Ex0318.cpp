//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.18 on page 48
//  Omitting the break statements in a switch statement
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // erroneous fall through:
  int score;
  cout << "Enter your test score: ";  	cin >> score;
  switch (score/10)
  { case 10:
    case  9: cout << "Your grade is an A." << endl;
    case  8: cout << "Your grade is a B."  << endl;
    case  7: cout << "Your grade is a C."  << endl;
    case  6: cout << "Your grade is a D."  << endl;
    case  5: 
    case  4: 
    case  3: 
    case  2: 
    case  1: 
    case  0: cout << "Your grade is an F." << endl;
    default: cout << "Error: score is out of range.\n";
  }
  cout << "Goodbye." << endl;
}
