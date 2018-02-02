# include <vector>
# include <iostream>
# include "matrix.h"

std::ostream &operator<<(std::ostream &os, Matrix &a)
{
  os<<"Matrix: ";
  for (int m=0; m<a.rows; m++)
  {
    for (int n=0; n<a.cols; n++)
    {
      os<<a.data[m][n]<<" ";
    }
    os<<std::endl;
  }
}

Matrix ones(int rows, int cols)
{
  std::vector<std::vector<int> > nums;

  for (int m=0; m<rows; m++)
  {
    for (int n=0; n<cols; n++)
    {
      nums[m][n]=1;
    }
  }

  return Matrix(nums);
}

int main()
{
  Matrix a = ones(4, 4);
  return 0;
}
