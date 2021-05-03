// Example Ticket price
#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price;
  if (person == 1) {
    price = 100;
    return price;
  } 
  else {
    cout << "Person" << person << " is asking price" << endl;
    person--;
    price = ticket_price(person);
    cout << "Person" << person << " is telling price" << endl;
    return price;
  }
}

int main() {
  int price;
  price = ticket_price(5);
  cout << "Ticket price = " << price << endl;

}
