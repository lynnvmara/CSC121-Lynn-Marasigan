#include <iostream>

using namespace std;

int n, num, number, backwards = 0;
int main() {
  cout << "Enter 5 digit number: ";
  cin >> number;

  num = number;

  do {
    n = number % 10;
    backwards = (backwards * 10) + n;
    number = number / 10;
  } while (number != 0);

  cout << "The number backwards is " << backwards;

  if (num == backwards) {
    cout << "\nThe number is a palindrome.";
  } else {
    cout << "\nThe number is not a palindrome.";
  }
}