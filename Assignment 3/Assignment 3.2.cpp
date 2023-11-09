#include <iostream>

using namespace std;

double a{},
    b,
    c,
    minimum;
int main() {
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "Enter third number: ";
  cin >> c;

  minimum = min(a, b);
  minimum = min(minimum, c);
  cout << "The smallest number is " << minimum;
}