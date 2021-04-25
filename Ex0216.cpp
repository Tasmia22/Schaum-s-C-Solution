//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 2.16 on page 38
//  Using the else if construct
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the grade for an input test score:
  int score;
  cout << "Enter your test score: ";  cin >> score;
  if (score > 100) cout << "Error: that score is out of range.";
  else if (score >= 90) cout << "Your grade is an A." << endl;
  else if (score >= 80) cout << "Your grade is a B." << endl;
  else if (score >= 70) cout << "Your grade is a C." << endl;
  else if (score >= 60) cout << "Your grade is a D." << endl;
  else if (score >=  0) cout << "Your grade is an F." << endl;
  else cout << "Error: that score is out of range.";
}
