#include <iostream>

using namespace std;

class Invoice {
  public:
    string number, description;
    int quantity, price;
    Invoice(string n, string d, int q, int p) {
      number = n;
      description = d;
      quantity = q;
      price = p;
    }

    void setNum(string a);
    void setDesc(string b);
    void setQuantity(int c);
    void setPrice(int d);
    string getNum();
    string getDesc();
    int getQuantity() const;
    int getPrice() const;

    void getInvoice(int c, int d);

};

void Invoice::setNum(string a) {
  number = a;
}

void Invoice::setDesc(string b) {
  description = b;
}

void Invoice::setQuantity(int c) {
  quantity = c;
}

void Invoice::setPrice(int d) {
  price = d;
}

string Invoice::getNum() {
  return number;
}

string Invoice::getDesc() {
  return description;
}

int Invoice::getQuantity() const {
  return quantity;
}

int Invoice::getPrice() const {
  return price;
}

void Invoice::getInvoice(int c, int d) {
  cout << "Total invoice is: $" << c * d;
}

int main() {
  string a = "", b = "";
  int c = 0, d = 1;
  Invoice N1("","",0,0);
  cout << "Enter part number: ";
  cin >> a;
  N1.setNum(a);
  cout << "Enter part description: ";
  cin >> b;
  N1.setDesc(b);
  cout << "Enter quantity of item: ";
  cin >> c;
  N1.setQuantity(c);
  cout << "Enter price of item: ";
  cin >> d;
  N1.setPrice(d);

  N1.getInvoice(c, d);
}