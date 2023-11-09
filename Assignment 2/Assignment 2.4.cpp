#include <iostream>

using namespace std;

int odd1{},
    odd2;
int main() {
  cout << "Enter first odd integer: ";
  cin >> odd1;
  cout << "\nEnter second odd integer: ";
  cin >> odd2;

  cout << "The product of " << odd1 << " and " << odd2 << " is " << odd1 * odd2 << ".";
}