//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.14 on page 45
//  A guessing game
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // finds the number selected by the user:
  cout << "Pick a number from 1 to 8." << endl;
  char ans;
  cout << "Is it less than 5? (y|n): ";  cin >> ans;
  if (ans == 'y')  // 1 <= n <= 4
  { cout << "Is it less than 3? (y|n): ";  cin >> ans;
    if (ans == 'y')  // 1 <= n <= 2
    { cout << "Is it less than 2? (y|n): ";  cin >> ans;
      if (ans == 'y') cout << "Your number is 1." << endl;
      else cout << "Your number is 2." << endl;
    }
    else  // 3 <= n <= 4
    { cout << "Is it less than 4? (y|n): ";  cin >> ans;
      if (ans == 'y') cout << "Your number is 3." << endl;
      else cout << "Your number is 4." << endl;
    }
  }
  else  // 5 <= n <= 8
  { cout << "Is it less than 7? (y|n): ";  cin >> ans;
    if (ans == 'y')  // 5 <= n <= 6
    { cout << "Is it less than 6? (y|n): ";  cin >> ans;
      if (ans == 'y') cout << "Your number is 5." << endl;
      else cout << "Your number is 6." << endl;
    }
    else  // 7 <= n <= 8
    { cout << "Is it less than 8? (y|n): ";  cin >> ans;
      if (ans == 'y') cout << "Your number is 7." << endl;
      else cout << "Your number is 8." << endl;
    }
  }
}

