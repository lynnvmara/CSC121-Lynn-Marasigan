#include <iostream>

using namespace std;

int input_num{};
int main() {
  cout << "Enter number: ";
  cin >> input_num;
  if (input_num % 10 >= 4) {
    cout << input_num << "th";
  } else if (input_num % 10 == 3) {
    cout << input_num << "rd";
  } else if (input_num % 10 == 2) {
    cout << input_num << "nd";
  } else if (input_num % 10 == 1) {
    cout << input_num << "st";
  } else if (input_num % 10 == 0) {
    cout << input_num << "th";
  }
}