## Simple Inheritance Example in C++

This is a simple example of shape inheritance in C++. It demonstrates how to create a pure virtual function and implement it in derived classes.

### Code 

```
#include <iostream>

using namespace std;

class Shape {
public:
  virtual void draw() = 0; // pure virtual function
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
```
### Usage

To compile and run the program, simply execute the following commands: </br>
 `g++ main.cpp -o main ` </br>
`./main`

### Output

The program will print the following output to the console:

Drawing a circle with radius 10 </br>
Drawing a square with side 5  </br>

## License
This code is licensed under the MIT License.


