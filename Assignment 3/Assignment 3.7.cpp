#include <iostream>

using namespace std;

int capacity{},
    people;
int main() {
  cout << "What is the capacity of the room?: ";
  cin >> capacity;
  cout << "\nHow many people are in the room?: ";
  cin >> people;
  if (people > capacity) {
    cout << "There are too many people in the room.";
  } else {
    cout << "There are enough people in the room.";
  }  
}