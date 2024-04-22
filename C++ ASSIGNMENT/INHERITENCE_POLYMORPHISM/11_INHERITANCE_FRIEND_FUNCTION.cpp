//Area of circle,rectangle and triangle using funtion overloading.

#include <iostream>
using namespace std;

class Numbers {
private:
    int first, second;

public:
    Numbers(int num1, int num2) : first(num1), second(num2) {}

    friend void swapValues(Numbers&);

    void display() {
        cout << "After swapping, first = " << first << " and second = " << second << endl;
    }
};

void swapValues(Numbers& obj) {
    obj.first = obj.first + obj.second;
    obj.second = obj.first - obj.second;
    obj.first = obj.first - obj.second;
}

main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Numbers obj(num1, num2);

    cout << "Before swapping, first = " << num1 << " and second = " << num2 << endl;

    swapValues(obj);

    obj.display();

    return 0;
}

