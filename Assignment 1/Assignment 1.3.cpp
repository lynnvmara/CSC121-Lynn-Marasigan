#include <iostream>

using namespace std;

short number_one{},
      number_two;
int main() {
  // asks user for numbers
  cout << "Input two numbers. \nNumber 1: ";
  cin >> number_one;
  cout << "Number 2: ";
  cin >> number_two;

  // calculations  
  cout << "\nSum: " << number_one + number_two << "\n";
  if (number_one > number_two) {
    cout << "Difference: " << number_one - number_two << "\n";
    cout << "Quotient: " << number_one / number_two << " r" << number_one % number_two << "\n";
  } else {
    cout << "Difference: " << number_two - number_one << "\n";
    cout << "Quotient: " << number_two / number_one << " r" << number_two % number_one << "\n";
  }
  cout << "Product: " << number_one * number_two << "\n";
  
}

