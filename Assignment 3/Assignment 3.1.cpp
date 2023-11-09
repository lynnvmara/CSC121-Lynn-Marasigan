#include <iostream>

using namespace std;

int dividend{},
    divisor;
int main() {
  cout << "Enter the dividend: ";
  cin >> dividend;
  cout << "Enter the divisor: ";
  cin >> divisor;
  cout << "The quotient is: " << dividend / divisor << "r" << dividend % divisor;
}