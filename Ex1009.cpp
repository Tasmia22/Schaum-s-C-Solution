//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.9 on page 240
//  A copy constructor
//  Courtesy :: Rajib Mikail.

#include <iostream>
using namespace std;

class Ratio
{ public:
    Ratio(int n=0, int d=1) : num(n), den(d) { reduce(); }
    Ratio(const Ratio& r) : num(r.num), den(r.den) { }
    void print() { cout << num << '/' << den; }
  private:
    int num, den;
    void reduce();
};

int main()
{ Ratio x(100,360);
  Ratio y(x);
  cout << "x = ";
  x.print();
  cout << ", y = ";
  y.print();
}

int gcd(int,int);

void Ratio::reduce()
{ // enforce invariant(den > 0):
  if (num == 0 || den == 0)
  { num = 0;
    den = 1;
    return;
  }
  if (den < 0)
  { den *= -1;
    num *= -1;
  }
  // enforce invariant(gcd(num,den) == 1):
  if (den == 1) return;    // it's already reduced
  int sgn = (num<0?-1:1);  // no negatives to gcd()
  int g = gcd(sgn*num,den);
  num /= g;
  den /= g;
}

int gcd(int m, int n)
{ // returns the greatest common divisor of m and n:
  if (m<n) swap(m,n);
  while (n>0)
  { int r=m%n;
    m = n;
    n = r;
  }
  return m;
}
