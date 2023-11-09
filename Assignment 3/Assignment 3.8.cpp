#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char string1[20];
  int check = 0;
  int length{},
      i;
  
  cout << "Enter a string: ";
  cin >> string1;

  length = strlen(string1);

  for (i = 0; i < length; i++) {
    if (string1[i] != string1[length - i - 1]) {
      check = 1;
      break;
    }
  } if (check) {
    cout << string1 << " is not a palindrome";
  
  } else {
    cout << string1 << " is a palindrome";
  }
}