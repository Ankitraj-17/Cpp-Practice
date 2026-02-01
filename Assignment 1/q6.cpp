#include <iostream>
#include <string>
using namespace std;

class Book {
public:
  string title;
  string author;
  float price;

  void inputDetails() {
    cout << "Enter Book Title: ";
    cin >> title;
    cout << "Enter Author Name: ";
    cin >> author;
    cout << "Enter Price: ";
    cin >> price;
  }

  void displayDetails() {
    cout << "\n--- Book Details ---" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
  }
};

int main() {
  Book b1;
  b1.inputDetails();
  b1.displayDetails();
  return 0;
}
