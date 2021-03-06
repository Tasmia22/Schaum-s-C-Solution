//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 6.27 on page 145
//  Computing the inner product of parts of two arrays
//  Courtesy :: Rajib Mikail.

#include <iostream>  // defines the cout object
using namespace std;

float innerProduct(float a[], int n, float b[]);
void print(float a[], int n);

int main()
{ // tests the innerProduct() function:
  float a[] = { 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
  float b[] = { -4.0, 3.0, -2.0, 1.0, 0.0, 0.0 };
  print(a,8);
  print(b,6);
  cout << "innerProduct(a,5,b)= " << innerProduct(a,5,b) << endl;
}

void print(float a[], int n)
{ for (int i=0; i<n-1; i++)
    cout << a[i] << ", ";
  cout << a[n-1] << endl;
}

float innerProduct(float a[], int n, float b[])
{ float p=0;
  for (int i=0; i<n; i++)
    p += a[i]*b[i];
  return p;
}
