//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.16 on page 47
//  Using the else if construct
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // prints the grade for an input test score:
  int score;
  cout << "Enter your test score: ";
  cin >> score;
  if (score > 100) cout << "Error: that score is out of range.\n";
  else if (score >= 90) cout << "Your grade is an A.\n";
  else if (score >= 80) cout << "Your grade is a B.\n";
  else if (score >= 70) cout << "Your grade is a C.\n";
  else if (score >= 60) cout << "Your grade is a D.\n";
  else if (score >=  0) cout << "Your grade is an F.\n";
  else cout << "Error: that score is out of range.\n";
}
