//swapping two numbers without using third variable by friend function.

#include <iostream>
using namespace std;

class MaxNumber {
private:
    int num1, num2;

public:
    MaxNumber(int n1, int n2) : num1(n1), num2(n2) {}

    friend int findMax(MaxNumber&);

    void display() {
        cout << "Max number is: " << findMax(*this) << "\n";
    }
};

int findMax(MaxNumber& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    MaxNumber obj(n1, n2);

    obj.display();

    return 0;
}

