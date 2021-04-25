//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 2.15 on page 28
//  Hidden Round-off Error
//  Courtesy :: Rajib Mikail.


#include <cmath>  // defines the sqrt() function
#include <iostream>
using namespace std;

int main()
{ // implements the quadratic formula
  float a, b, c;
  cout << "Enter the coefficients of a quadratic equation:" << endl;
  cout << "\ta: ";
  cin >> a;
  cout << "\tb: ";
  cin >> b;
  cout << "\tc: ";
  cin >> c;
  cout << "The equation is: " << a << "*x*x + " << b
       << "*x + " << c << " = 0" << endl;
  float d = b*b - 4*a*c;  // discriminant
  float sqrtd = sqrt(d);
  float x1 = (-b + sqrtd)/(2*a);
  float x2 = (-b - sqrtd)/(2*a);
  cout << "The solutions are:" << endl;
  cout << "\tx1 = " << x1 << endl;
  cout << "\tx2 = " << x2 << endl;
  cout << "Check:" << endl;
  cout << "\ta*x1*x1 + b*x1 + c = " <<  a*x1*x1 + b*x1 + c << endl;
  cout << "\ta*x2*x2 + b*x2 + c = " <<  a*x2*x2 + b*x2 + c << endl;
}
