#include <iostream>

using namespace std;

class Shape {
public:
  virtual void draw() = 0; // pure virtual function.
};

class Circle : public Shape {
public:
  Circle(int radius) : radius(radius) {}
  void draw() override {
    cout << "Drawing a circle with radius " << radius << endl;
  }
private:
  int radius;
};

class Square : public Shape {
public:
  Square(int side) : side(side) {}
  void draw() override {
    cout << "Drawing a square with side " << side << endl;
  }
private:
  int side;
};

int main() {
  Circle circle(10);
  circle.draw();

  Square square(5);
  square.draw();

  return 0;
}
