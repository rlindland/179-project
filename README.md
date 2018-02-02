# Matrix Library
Matrix library that supports primitive operations, transposes, dot products, and special matrices.See header file for methods and attributes. Built as a project for 6.179 at MIT.

## Documentation
### Built-In Matrix Generation
| Return | Method             | Arguments                              |Description                      |    
| :------| :------------------| :--------------------------------------| :-------------------------------|
| Matrix | randn()            | int rows, int columns, int min, int max| Random values within given range|
| Matrix | ones()             | int rows, int columns                  | A matrix of ones                |
| Matrix | eye()              | int rows, int columns                  | Identity Matrix                 |
### Operators
| Return | Operator           | Arguments             |
| :------| :------------------| :---------------------|
| Matrix | Addition (+)       |     Matrix a, Matrix b|
| Matrix | Subtraction (-)    |     Matrix a, Matrix b|
| Matrix | Multiplication (*) |     Matrix a, Matrix b|
|istream | &operator>>        | istream &is, Matrix &b|
|ostream | &operator<<        | ostream &os, Matrix &b|
### Misc Functions
| Return | Method             | Arguments             |
| :------| :------------------| :---------------------|
| double | dot(Matrix, Matrix)|  Matrix a, Matrix B   |
| Matrix | transpose()        |  None                 |

## Files
 __Matrix.h__: Header file, contains methods and attributes  
 __Source.cpp__: Implements functions  
 __Main.cpp__: Driver
## Notes
Compile source and main simultaneously:  
`g++ source.cpp main.cpp -o out -std=c++11`
