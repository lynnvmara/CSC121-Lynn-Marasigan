#include <iostream>

using namespace std;

class Matrix {
  public:
    int row, column;
    int a[100][100], sum[100][100], b, c;

    void setRow(int a);
    void setColumn(int b);

    int getRow() const;
    int getColumn() const;

    void createMatrix();
    void addMatrix(Matrix z);
};

void Matrix::setRow(int a) {
  row = a;
}

void Matrix::setColumn(int b) {
  column = b;
}

int Matrix::getRow() const {
  return row;
}

int Matrix::getColumn() const {
  return column;
}

void Matrix::createMatrix() {
  for(b = 0; b < row; ++b)
   for(c = 0; c < column; ++c)
   {
       cout << "Enter grid value " << b + 1 << c + 1 << " : ";
       cin >> a[b][c];
   }
}

void Matrix::addMatrix(Matrix z) {
  for(b = 0; b < row; ++b)
    for(c = 0; c < column; ++c)
        sum[b][c] = a[b][c] + z.a[b][c];

  cout << endl << "Sum of the two matrices is: " << endl;
  for(b = 0; b < row; ++b)
      for(c = 0; c < column; ++c)
      {
          cout << sum[b][c] << "  ";
          if(c == column - 1)
              cout << endl;
      }
}

int main() {
  int a = 0, b = 1;
  Matrix M1, M2;

  cout << "Enter number of rows for first matrix: ";
  cin >> a;
  M1.setRow(a);
  cout << "Enter number of columns for second matrix: ";
  cin >> b;
  M1.setColumn(b);

  cout << "Enter number of rows for second matrix: ";
  cin >> a;
  M2.setRow(a);
  cout << "Enter number of columns for second matrix: ";
  cin >> b;
  M2.setColumn(b);

  M1.createMatrix();
  M2.createMatrix();

  M1.addMatrix(M2);
}