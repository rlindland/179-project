#include <vector>
#include <iostream>

class Matrix
{
  int rows;
  int cols;
  std::vector<std::vector<double> > data;

public:

  Matrix(std::vector<std::vector<double> > nums) : rows(nums.size()), cols((*nums.begin()).size()), data(nums) {}

  Matrix ones(int rows, int cols);
  Matrix I(int rows, int cols);
  Matrix rand(int rows, int cols);

  Matrix U();
  int det();
  int trace();
  Matrix transpose();

  friend Matrix &operator+(Matrix &a, Matrix &b);
  friend Matrix &operator-(Matrix &a, Matrix &b);
  friend Matrix &operator*(Matrix &a, Matrix &b);
  friend std::ostream &operator<<(std::ostream &os, Matrix &a);
  friend std::istream &operator>>(std::istream &is, Matrix &a);
};

Matrix ones(int rows, int cols);
Matrix eye(int rows, int cols);
Matrix randn(int rows, int cols, double min=0, double max=10);
