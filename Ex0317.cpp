//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.17 on page 47
//  Using a switch statement for parallel alternatives
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // reports the user's grade for a given test score:
  int score;
  cout << "Enter your test score: ";
  cin >> score;
  switch (score/10)
  { case 10:
      case  9: cout << "Your grade is an A.\n";  break;
    case  8: cout << "Your grade is a B.\n";   break;
    case  7: cout << "Your grade is a C.\n";   break;
    case  6: cout << "Your grade is a D.\n";   break;
    case  5: 
    case  4: 
    case  3: 
    case  2: 
    case  1: 
    case  0: cout << "Your grade is an F.\n";  break;
    default: cout << "Error: that score is out of range.\n" << endl;
  }
  cout << "Goodbye." << endl;
}
