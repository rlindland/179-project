#include <vector>
#include <iostream>
#include <math.h>

class Matrix
{
  int rows;
  int cols;
  std::vector<std::vector<double> > data;

public:

  Matrix(std::vector<std::vector<double> > nums) : rows(nums.size()), cols((*nums.begin()).size()), data(nums) {}
  Matrix(int r, int c) : rows(r), cols(c), data(std::vector<std::vector<double> > (r)) {}
  Matrix() : rows(0), cols(0), data(std::vector<std::vector<double> > (0)) {}


  Matrix transpose();
  double dot(Matrix a);

  friend Matrix operator+(Matrix a, Matrix b);
  friend Matrix operator-(Matrix a, Matrix b);
  friend Matrix operator*(Matrix a, Matrix b);
  friend std::ostream &operator<<(std::ostream &os, Matrix &a);
  friend std::istream &operator>>(std::istream &is, Matrix &a);
};

double dot(std::vector<double> a, std::vector<double> b);
Matrix ones(int rows, int cols);
Matrix eye(int rows, int cols);
Matrix randn(int rows, int cols, double min=0, double max=10);
