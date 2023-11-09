#include <iostream>

using namespace std;

double pounds{};
int main() {
  cout << "Enter pounds (lbs): ";
  cin >> pounds;
  cout << pounds << "lbs is equal to " << pounds * 16 << "oz.";
}