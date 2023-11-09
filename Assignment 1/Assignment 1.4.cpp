#include <iostream>

using namespace std;

double num1{},
  num2;
int main() {
  cout << "Number 1: ";
  cin >> num1;
  cout << "Number 2: ";
  cin >> num2;
  if (num1 > num2) {
    cout << num1 << " is bigger than " << num2;
  } if (num1 < num2) {
    cout << num2 << " is bigger than " << num1;
  } if (num1 == num2) {
    cout << "The numbers are equal.";
  }
}