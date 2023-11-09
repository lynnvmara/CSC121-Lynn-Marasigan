#include <iostream>

using namespace std;

int reverseDigits(int number) {
    int reverseNumber = 0;
    while(number > 0) {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number = number / 10;
    } return reverseNumber;
}

int number{};
int main() {
    cout << "Enter number: ";
    cin >> number;
    cout << reverseDigits(number);
}