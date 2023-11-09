#include <iostream>

using namespace std;

class Rational {
  public:
    void setNum(int a);
    void setDen(int b);
    int getNum() const;
    int getDen() const;

    void Add(Rational a1);
    void Subtract(Rational s1);
    void Multiply(Rational m1);
    void Divide(Rational d1);
    void toDouble(Rational d2) const;

  private:
    int numerator;
    int denominator;
};

void Rational::setNum(int a) {
  numerator = a;  
}

void Rational::setDen(int b) {
  denominator = b;
}

int Rational::getNum() const {
  return numerator;
}

int Rational::getDen() const {
  return denominator;
}

void Rational::Add(Rational a1) {
  int z = getDen() * a1.getDen();
  int num1 = getNum() * a1.getDen();
  int num2 = a1.getNum() * getDen();

  cout << "ADDITION: (" << getNum() << " / " << getDen() << ") + (" << a1.getNum() << " / " << a1.getDen() << ") = (" << num1 + num2 << " / " << z << ")\n";
}

void Rational::Subtract(Rational s1) {
  int y = getDen() * s1.getDen();
  int num3 = getNum() * s1.getDen();
  int num4 = s1.getNum() * getDen();

  cout << "SUBTRACTION: (" << getNum() << " / " << getDen() << ") - (" << s1.getNum() << " / " << s1.getDen() << ") = (" << num3 - num4 << " / " << y << ")\n";
}

void Rational::Multiply(Rational m1) {
  int x = getDen() * m1.getDen();
  int num5 = getNum() * m1.getNum();

  cout << "MULTIPLICATION: (" << getNum() << " / " << getDen() << ") * (" << m1.getNum() << " / " << m1.getDen() << ") = (" 
    << (num5) << " / " << (x) << ")\n";
}

void Rational::Divide(Rational d1) {
  int w = getDen() * d1.getNum();
  int num6 = getNum() * d1.getDen();

  cout << "DIVISION: (" << getNum() << " / " << getDen() << ") / (" << d1.getNum() << " / " << d1.getDen() << ") = (" 
    << (num6) << " / " << (w) << ")\n";
}

void Rational::toDouble(Rational d2) const{
  double n1 = (double)d2.getNum();
  double n2 = (double)d2.getDen();

  cout << "DECIMAL: " << d2.getNum() << " / " << d2.getDen() << " = " << n1 / n2 << "\n";
}

int main() {
  int a = 0, b = 1;
  Rational F1, F2;

  cout << "Enter the first numerator: ";
  cin >> a;
  F1.setNum(a);

  cout << "Enter the first denominator: ";
  cin >> b;
  F1.setDen(b);

  cout << "Enter the second numerator: ";
  cin >> a;
  F2.setNum(a);

  cout << "Enter the second denominator: ";
  cin >> b;
  F2.setDen(b);

  F1.Add(F2);
  F1.Subtract(F2);
  F1.Multiply(F2);
  F1.Divide(F2);
  F1.toDouble(F1);
  F2.toDouble(F2);
}