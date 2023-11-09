#include <iostream>
#include <cmath>

using namespace std;

double x1{},
    x2,
    yone,
    y2,
    answer;

double distance(double x1, double x2, double yone, double y2);

int main() {
  cout << "Distance between (x1, y1) and (x2, y2) \nEnter x1: ";
  cin >> x1;
  cout << "Enter y1: ";
  cin >> yone;
  cout << "Enter x2: ";
  cin >> x2;
  cout << "Enter y2: ";
  cin >> y2;
  answer = distance(x1, x2, yone, y2);
  cout << "The distance between (" << x1 << ", " << yone << ") and (" << x2 << ", " << y2 << ") is " << answer;
}

double distance(double x1, double yone, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - yone, 2));
}