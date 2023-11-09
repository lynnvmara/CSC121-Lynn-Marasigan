#include <iostream>

using namespace std;

double weight{},
  height,
  bmi;
int main() {
  cout << "BMI Calculator\n\n";
  cout << "Weight (lbs): ";
  cin >> weight;
  cout << "Height (m): ";
  cin >> height;
  bmi = weight / (height * height);
  cout << "BMI = " << bmi << "\n";
  if (bmi < 18.5) {
    cout << "You are underweight.";
  } if (18.5 < bmi && bmi < 24.9) {
    cout << "You are a normal weight.";
  } if (25 < bmi && bmi < 29.9) {
    cout << "You are overweight.";
  } if (30 < bmi) {
    cout << "You are obese.";
  }
}