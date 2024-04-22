//max number from given two numbers using friend function.

#include <iostream>
using namespace std;

class Max {
    int n1, n2;

public:
    Max() {
        cout << "Enter number 1: ";
        cin >> n1;
        cout << "Enter number 2: ";
        cin >> n2;
    }

    friend int findMax(Max &M);
};

int findMax(Max &M) {
    if (M.n1 > M.n2) {
        return M.n1;
    } else {
        return M.n2;
    }
}

main() {
    Max M;
    int maxNumber = findMax(M);
    cout << "\n\n\t";
    cout << "Maximum number is:" << maxNumber << endl;
    return 0;
}

