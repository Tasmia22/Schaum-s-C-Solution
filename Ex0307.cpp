//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 3.7 on page 40
//  Using blocks to limit the scope of variables
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

int main()
{ // uses the same name n for different variables:
  int n=44;
  cout << "n = " << n << endl;
  { int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "n = " << n << endl;
  }
  { cout << "n = " << n << endl;
  }
  { int n;
    cout << "n = " << n << endl;
  }
  cout << "n = " << n << endl;
}
