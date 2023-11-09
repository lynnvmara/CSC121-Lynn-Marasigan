#include <iostream>

using namespace std;

double miles_day{},
  cost_gallon,
  miles_per_gallon,
  parking,
  toll,
  gas_cost;
int main() {
  cout << "How many miles do you drive a day? ";
  cin >> miles_day;

  cout << "\n What's the cost of a gallon of gas? ";
  cin >> cost_gallon;

  cout << "\n How many miles can you drive on a gallon of gas? ";
  cin >> miles_per_gallon;

  cout << "\n What's the cost of parking fees per day? ";
    cin >> parking;

  cout << "\n What's the cost of tolls per day? ";
  cin >> toll;

  gas_cost = (miles_day * cost_gallon / miles_per_gallon);
  
  cout << "\nYou spend $" << gas_cost + parking + toll << " for your commute each day.";
}