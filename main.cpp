#include "matrix.h"
#include <vector>
#include <iostream>

int main()
{
  std::string trash;
  int m, n;

  // std::cout<<"Input dimensions for matrix of ones as 'M x N': "<<std::endl;
  // std::cin>>m>>trash>>n;
  // std::cout<<m<<"x"<<n<<" ones:\n";
  // Matrix one = ones(m, n);
  // std::cout<<one;
  //
  // std::cout<<"Input dimensions for identity matrix as 'M x N':\n";
  // std::cin>>m>>trash>>n;
  // std::cout<<m<<"x"<<n<<" identity:\n";
  // Matrix i = eye(m, n);
  // std::cout<<i;

  double min, max;
  std::cout<<"Input dimensions for random matrix as 'M x N':\n";
  std::cin>>m>>trash>>n;
  std::cout<<"Input range for values as 'min - max':\n";
  std::cin>>min>>trash>>max;
  std::cout<<m<<"x"<<n<<" random:\n";
  Matrix r = randn(m, n, min, max);
  std::cout<<r;

  // std::cout<<"\nThe transpose of your random matrix is: \n";
  // Matrix t = r.transpose();
  // std::cout<<t;

  std::cout<<"Here's another random matrix: \n";
  Matrix p = randn(n, m+2, min, max);
  std::cout<<p;

  std::cout<<"Here's their product: \n";
  Matrix res =r*p;
  std::cout<<res;

  return 0;
}
