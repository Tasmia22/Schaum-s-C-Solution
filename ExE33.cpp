//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example E.33 on page 381
//  Testing the nth_element() algorithm
//  Courtesy :: Rajib Mikail.

#include <algorithm>
#include <iostream>
using namespace std;
void print(int*,int);

int main()
{ int a[] = {77,22,99,55,44,88,11,33,66};
  print(a,9);
  nth_element(a,a+3,a+9);
  print(a,9);
}

void print(int* a, int n)
{ cout << "n=" << n << ": {" << a[0];
  for (int i=1; i<n; i++)
    cout << "," << a[i];
  cout << "}\n";
}
