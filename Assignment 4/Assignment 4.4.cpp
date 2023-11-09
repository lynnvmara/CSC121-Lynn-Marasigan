#include <iostream>

using namespace std;

class loginManager {
  public:
    loginManager() { //default constructor
      username = "user";
      password = "pass";
    }

    loginManager(string a, string b) { //parameterized constructor
      username = a;
      password = b;
    }

    void setUser(string a);
    void setPass(string b);
    string getUser();
    string getPass();
    void print();

  private:
    string username;
    string password;
};

void loginManager::setUser(string a) {
  username = a;
}

void loginManager::setPass(string b) {
  password = b;
}

string loginManager::getUser() {
  return username;
}

string loginManager::getPass() {
  return password;
}

void loginManager::print() {
  cout << "Username: " << username << "\n";
  cout << "Password: " << password << "\n";
}

int main() {
  string a = "", b = "";
  loginManager L1;
  loginManager L2("", "");

  L1.print();
  cout << "Enter new username: ";
  cin >> a;
  L2.setUser(a);
  cout << "Enter new password: ";
  cin >> b;
  L2.setPass(b);

  cout << "-- New login details set --\n";
  L2.print();

}