//Area of rectangle using inheritance.

#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    void input() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }
};

class Rectangle : public Shape {
public:
        double calculateArea() {
        return width * height;
    }
};

main() {
    Rectangle rectangle;

    rectangle.input();
    cout << "Area of the rectangle: " << rectangle.calculateArea() << "\n";

  
}

