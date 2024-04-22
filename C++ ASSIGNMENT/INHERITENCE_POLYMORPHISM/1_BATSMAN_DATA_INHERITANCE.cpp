//using single inheritance displaying the total runs,average runs and best performance 
//of batsman in the class named cricketer

#include <iostream>
#include <string>

using namespace std;

class cricketer {
protected:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class batsman : public cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        input();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        
        averageRuns = totalRuns / 10.0; 
    }

    void displayData() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Total runs: " << totalRuns << "\n";
        cout << "Average runs: " << averageRuns << "\n";
        cout << "Best performance: " << bestPerformance << "\n";
    }
};

int main() {
    batsman player;

    player.inputBatsmanData();
    player.calculateAverageRuns();
    player.displayData();

    
}

