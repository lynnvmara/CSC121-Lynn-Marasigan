#include <iostream>

using namespace std;

int product_no{},
    quantity;
double unit_price{};
int main() {
  cout << "Enter the product number (1-3): ";
  cin >> product_no;
  switch (product_no) {
    case 1:
      cout << "\nUnit price is $2.90";
      unit_price = 2.90;
      break;
    case 2:
      cout << "\nUnit price is $4.50";
      unit_price = 4.50;
      break;
    case 3:
      cout << "\nUnit price is $9.98";
      unit_price = 9.98;
      break;
  } cout << "\nEnter quantity of units sold: ";
  cin >> quantity;
  cout << "\nTotal price is $" << unit_price * quantity;
  
}