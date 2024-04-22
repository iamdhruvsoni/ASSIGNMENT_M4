//2D Matrix addition using operator overloading.

#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *data;

public:
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void input() {
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }

    void display() {
        int numRows = size / 2;
        for (int i = 0; i < numRows; ++i) {
            cout << " " << data[i] << "  " << data[i + numRows] << "\n";
        }
    }

    ~Matrix() {
        delete[] data;
    }
};

main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix mat1(size), mat2(size);
    cout << "Enter elements of matrix 1: " ;
    mat1.input();
    cout << "Enter elements of matrix 2: " ;
    mat2.input();

    Matrix sum = mat1 + mat2;

    cout << "Matrix 1 and Matrix 2 combined:" << "\n";
    mat1.display();
    
    cout << "Resultant matrix after addition:" << "\n";
    sum.display();

    return 0;
}

