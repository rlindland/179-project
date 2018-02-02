# include <vector>
# include <iostream>
# include "matrix.h"

std::ostream &operator<<(std::ostream &os, Matrix &a)
{
  for (int m=0; m<a.rows; m++)
  {
    for (int n=0; n<a.cols; n++)
    {
      os<<a.data[m][n]<<" ";
    }
    os<<std::endl;
  }
  os<<"\n";
}

Matrix ones(int rows, int cols)
{
  std::vector<std::vector<int> > nums (rows);

  for (int m=0; m<rows; m++)
  {
    std::vector<int> g (cols);
    nums[m] = g;

    for (int n=0; n<cols; n++)
    {
      nums[m][n]=1;
    }
  }

  return Matrix(nums);
}
