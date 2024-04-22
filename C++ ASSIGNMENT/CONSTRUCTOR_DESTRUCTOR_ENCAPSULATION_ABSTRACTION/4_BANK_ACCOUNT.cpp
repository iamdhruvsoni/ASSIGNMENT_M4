//Bank account details,withdraw and deposit the money to check and display the bank balance at the end

#include <iostream>
#include <string>

using namespace std;

class Acc {
private: 
    string num;
    double bal;

public:
    Acc(const string &n, double initialBal): num(n), bal(initialBal) {}

    void dep(double amt) {
        bal += amt;
        cout << "Deposit successful. Bal: " << bal << endl;
    }

    void with(double amt) {
        if (amt <= bal) {
            bal -= amt;
            cout << "Withdrawal successful. Bal: " << bal << endl;
        } else {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        }
    }
};

int main() {
    string num = "SB-123";
    double initialBal, depAmt, withAmt;
    initialBal = 1000;

    cout << "Acc No: " << num << " Bal: " << initialBal << endl;

    Acc acc(num, 1000.0);

    depAmt = 1500;
    cout << "Deposit Amount: " << depAmt << endl;
    acc.dep(depAmt);

    withAmt = 750;
    cout << "Withdrawal Amount: " << withAmt << endl;
    acc.with(withAmt);

    withAmt = 1800;
    cout << "Attempted Withdrawal Amount: " << withAmt << endl;
    acc.with(withAmt);

    return 0;
}

