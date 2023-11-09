#include <iostream>

using namespace std;

double num{};
string roman_num[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int arabic_num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string result = "";
int main() {

  cout << "Enter number: ";
  cin >> num;
  for (int i = 0; i < 13; ++i) {
    while (num - arabic_num[i] >= 0) {
      result += roman_num[i]; //adds roman numeral to string
      num -= arabic_num[i]; //subtracts roman numeral from number
    }
  }
  cout << result;
}