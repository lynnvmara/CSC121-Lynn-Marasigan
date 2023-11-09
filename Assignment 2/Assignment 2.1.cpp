#include <iostream>

using namespace std;

double radius{};
int main() {
  cout << "Radius of circle: ";
  cin >> radius;
  cout << "Diameter is " << radius * 2;
}