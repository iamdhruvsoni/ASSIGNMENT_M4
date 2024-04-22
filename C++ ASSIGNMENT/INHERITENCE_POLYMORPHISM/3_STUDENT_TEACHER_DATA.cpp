//using multiple inheritance and adding the student's percentage and teacher's salary.

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    Person() {}
    Person(string n, int a) : name(n), age(a) {}

    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

// Derived class Student
class Student : public Person {
private:
    float percentage;

public:
    Student() {}
    Student(string n, int a, float p) : Person(n, a), percentage(p) {}

    void readData() {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        cout << "Percentage: " << percentage << "\n";
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    float salary;

public:
    Teacher() {}
    Teacher(string n, int a, float s) : Person(n, a), salary(s) {}

    void readData() {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << "\n";
    }
};

main() {
    Student s;
    cout << "Enter student details:\n";
    s.readData();

    Teacher t;
    cout << "\nEnter teacher details:\n";
    t.readData();

    cout << "\nStudent details:\n";
    s.displayData();

    cout << "\nTeacher details:\n";
    t.displayData();

    return 0;
}

