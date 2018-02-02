#include "matrix.h"
#include <vector>
#include <iostream>
#include <math.h>

int main()
{
  std::string trash;
  int m, n;

  std::cout<<"Input dimensions for matrix of ones as 'M x N': "<<std::endl;
  std::cin>>m>>trash>>n;
  std::cout<<m<<"x"<<n<<" ones:\n";
  Matrix one = ones(m, n);
  std::cout<<one;

  std::cout<<"Input dimensions for identity matrix as 'M x N':\n";
  std::cin>>m>>trash>>n;
  std::cout<<m<<"x"<<n<<" identity:\n";
  Matrix i = eye(m, n);
  std::cout<<i;

  double min, max;
  std::cout<<"Input dimensions for random matrix as 'M x N':\n";
  std::cin>>m>>trash>>n;
  std::cout<<"Input range for values as 'min - max':\n";
  std::cin>>min>>trash>>max;
  std::cout<<std::endl;

  std::cout<<m<<"x"<<n<<" random:\n";
  Matrix r = randn(m, n, min, max);
  std::cout<<r;

  std::cout<<"Here's another random matrix: \n";
  Matrix p = randn(n, m+2, min, max);
  std::cout<<p;

  std::cout<<"Here's their product: \n";
  Matrix res =r*p;
  std::cout<<res;

  int ro, c;
  std::cout<<"--Now time to enter your own matrix--\n"<<"Enter dimensions of a square matrix for simplicity in the form M x N: \n";
  std::cin>>ro>>trash>>c;
  Matrix a = Matrix(ro, c);
  std::cout<<std::endl;

  std::cout<<"Enter " <<ro*c<< " values separated by spaces\n";
  std::cin>>a;
  std::cout<<std::endl;
  std::cout<<"Here's your matrix: \n";
  std::cout<<a;

  std::cout<<"We can also add. multiply, and subtract matrices. Enter the values for another matrix with the same dimensions: \n";
  Matrix b = Matrix(ro,c);
  std::cin>>b;
  std::cout<<std::endl;

  std::cout<< "Here's your second matrix: \n"<<b;
  Matrix d =(Matrix) a+b;
  std::cout<<"Here's their sum (A+B): \n";
  std::cout<<d;

  d = a-b;
  std::cout<<"Here's their difference (A-B): \n";
  std::cout<<d;

  d = a*b;
  std::cout<<"Here's their product (A*B): \n";
  std::cout<<d;

  return 0;
}
