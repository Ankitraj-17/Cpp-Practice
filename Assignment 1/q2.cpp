#include <iostream>
using namespace std;

class Rectangle {
public:
  float length;
  float width;

  float calculateArea() { return length * width; }

  float calculatePerimeter() { return 2 * (length + width); }
};

int main() {
  Rectangle rect;

  cout << "Enter length: ";
  cin >> rect.length;
  cout << "Enter width: ";
  cin >> rect.width;

  cout << "\nArea: " << rect.calculateArea() << endl;
  cout << "Perimeter: " << rect.calculatePerimeter() << endl;

  return 0;
}
