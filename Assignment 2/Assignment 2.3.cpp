#include <iostream>

using namespace std;

int first{},
  second,
  third;
int main() {
  cout << "Enter first side of triangle (shortest): ";
  cin >> first;
  cout << "\nEnter second side of triangle (middle): ";
  cin >> second;
  cout << "\nEnter third side of triangle (longest): ";
  cin >> third;

  if ((first*first) + (second*second) == third*third) {
    cout << "This is a right triangle";
  } else {
    cout << "This is not a right triangle.";
  }
}