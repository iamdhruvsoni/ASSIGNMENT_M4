//student's marksheet using multiple inheritance.

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getData(string n, int r) {
        name = n;
        rollNo = r;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Marks {
protected:
    float marks[5];

public:
    void getMarks(float m[]) {
        for (int i = 0; i < 5; ++i)
            marks[i] = m[i];
    }

    void displayMarks() {
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i)
            cout << marks[i] << " ";
        cout << endl;
    }
};

class MarkSheet : public Student, public Marks {
public:
    void display() {
        displayInfo();
        displayMarks();
    }
};

int main() {
    MarkSheet student;
    string name;
    int rollNo;
    float marks[5];

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks in 5 subjects: ";
    for (int i = 0; i < 5; ++i)
        cin >> marks[i];

    student.getData(name, rollNo);
    student.getMarks(marks);

    cout << "\nStudent Mark Sheet:\n";
    student.display();

    return 0;
}

