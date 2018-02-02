#include <vector>
#include <iostream>

class Matrix
{
  int rows;
  int cols;
  std::vector<std::vector<int> > data;

public:

  Matrix(std::vector<std::vector<int> > nums) : rows(nums.size()), cols((*nums.begin()).size()), data(nums) {}

  Matrix ones(int rows, int cols);
  Matrix I(int rows, int cols);
  Matrix rand(int rows, int cols);

  Matrix U();
  int det();
  int trace();

  friend Matrix &operator+(Matrix &a, Matrix &b);
  friend Matrix &operator-(Matrix &a, Matrix &b);
  friend Matrix &operator*(Matrix &a, Matrix &b);
  friend std::ostream &operator<<(std::ostream &os, Matrix &a);
};
Matrix ones(int rows, int cols);
Matrix I(int rows, int cols);
Matrix rand(int rows, int cols);
