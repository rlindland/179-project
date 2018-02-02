#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

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
  std::vector<std::vector<double> > nums (rows);
  for (int m=0; m<rows; m++)
  {
    std::vector<double> g (cols);
    nums[m] = g;

    for (int n=0; n<cols; n++)
    {
      nums[m][n]=1;
    }
  }

  return Matrix(nums);
}

Matrix eye(int rows, int cols)
{
  std::vector<std::vector<double> > nums (rows);
  for (int m=0; m<rows; m++)
  {
    std::vector<double> g (cols);
    nums[m] = g;

    for (int n=0; n<cols; n++)
    {
      if (m==n) nums[m][n]=1;
      else nums[m][n]=0;
    }
  }
  return Matrix(nums);
}

Matrix randn(int rows, int cols, double min, double max)
{
  srand(time(NULL));
  std::vector<std::vector<double> > nums (rows);
  for (int m=0; m<rows; m++)
  {
    std::vector<double> g (cols);
    nums[m] = g;

    for (int n=0; n<cols; n++)
    {
      double random = (double) rand() / 1;
      nums[m][n]=min+random*(max-min);
    }
  }
  return Matrix(nums);
}

Matrix Matrix::transpose()
{
  Matrix mat = *this;
  std::vector<std::vector<double> > nums (mat.cols);

  for (int m=0; m<mat.cols; m++)
  {
    std::vector<double> g (mat.rows);
    nums[m]=g;

    for (int n=0; n<mat.rows; n++)
    {
      nums[m][n]=this->data[n][m];
    }
  }
  return Matrix(nums);
}
