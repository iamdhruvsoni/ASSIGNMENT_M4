#include <iostream>
using namespace std;

class Student {  /* Base class*/
protected:
    int rollNo;

public:
    void getRollNo(int r) {
        rollNo = r;
    }
};

class Test : public Student {  /*Intermediate class*/
protected:
    float subject1, subject2;

public:
    void getMarks(float s1, float s2) {
        subject1 = s1;
        subject2 = s2;
    }
};

class Result : public Test {    /*Derived class*/
public:
        float calculateTotalMarks() {
        return subject1 + subject2;
    }

    void displayResult() {
        cout << "Roll Number: " << rollNo << "\n";
        cout << "Total Marks: " << calculateTotalMarks() << "\n";
    }
};

main() {
    Result student;
    int rollNo;
    float marks1, marks2;

    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks in two subjects: ";
    cin >> marks1 >> marks2;

    student.getRollNo(rollNo);
    student.getMarks(marks1, marks2);

    cout << "\nStudent Result:\n";
    student.displayResult();

    
}

