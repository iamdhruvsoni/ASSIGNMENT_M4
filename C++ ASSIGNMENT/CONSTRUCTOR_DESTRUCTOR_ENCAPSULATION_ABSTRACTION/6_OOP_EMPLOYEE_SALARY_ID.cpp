//Including
//member functions to calculate and set salary based on employee
//performance,using of constructor.

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(const string& n, int i, double s): name(n), id(i), salary(s) {}

    void calculateSalary(double rating) {
        if (rating >= 0.0 && rating <= 1.4) {
            salary *= rating;
        } else {
            cout << "Invalid rating. Salary remains unchanged." << endl;
        }
    }

    void setSalary(double s) {
        salary = s;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    string name;
    int id;
    double salary;

    cout << "Input employee name: ";
    cin >> name;

    cout << "Input employee ID: ";
    cin >> id;

    cout << "Input employee salary: ";
    cin >> salary;

    Employee emp(name, id, salary);

    cout << "Initial salary: " << emp.getSalary() << endl;

    double rating;
    cout << "Input performance rating (0.0-1.2): ";
    cin >> rating;

    emp.calculateSalary(rating);

    cout << "Updated salary: " << emp.getSalary() << endl;

    return 0;
}

