//using inline function finding mult values and cubics

#include <iostream>

using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int num) {
    return num * num * num;
}

main() {
    int x, y;
    
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    cout << "Multiplication of " << x << " and " << y << " is: " << multiply(x, y) << "\n";
    cout << "Cubic value of " << x << " is: " << cubic(x) << "\n";
    cout << "Cubic value of " << y << " is: " << cubic(y) << "\n";
    
    
}

