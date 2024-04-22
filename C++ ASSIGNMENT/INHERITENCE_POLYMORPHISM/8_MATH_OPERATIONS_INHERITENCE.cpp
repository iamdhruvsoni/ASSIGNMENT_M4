//performing the math operations using the function overloading.

#include<iostream>
using namespace std;

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Cannot divide by zero\n";
            return 0;
        }
    }

    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Cannot divide by zero\n";
            return 0;
        }
    }
};

int main() {
    MathOperations calculator;

    // Integer operations
    cout << "Integer Operations:\n";
    cout << "Addition: " << calculator.add(5, 3) << "\n"; 
    cout << "Subtraction: " << calculator.subtract(5, 3) << "\n";  
    cout << "Multiplication: " << calculator.multiply(5, 3) << "\n";  
    cout << "Division: " << calculator.divide(5, 3) << "\n";  

    // Floating-point operations
    cout << "\nFloating-point Operations:\n";
    cout << "Addition: " << calculator.add(5.5f, 3.3f) << "\n"; 
    cout << "Subtraction: " << calculator.subtract(5.5f, 3.3f) << "\n";
    cout << "Multiplication: " << calculator.multiply(5.5f, 3.3f) << "\n";  
    cout << "Division: " << calculator.divide(5.5f, 3.3f) << "\n";  

    return 0;
}

