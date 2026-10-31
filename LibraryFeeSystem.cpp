#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string studentName;
    int admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter current fee balance: ";
        cin >> feeBalance;
    }

    void makePayment(double amount) {
        if (amount > 0 && amount <= feeBalance) {
            feeBalance -= amount;
            cout << "Payment of Ksh" << amount << " processed successfully.\n";
        } else if (amount > feeBalance) {
            cout << "Payment exceeds the remaining balance.\n";
        } else {
            cout << "Invalid payment amount.\n";
        }
    }

    void displayStatus() {
        cout << "\n==== Student Fee Status ========\n";
        cout << "Name: " << studentName << "\n";
        cout << "Admission Number: " << admissionNumber << "\n";
        cout << "Remaining Fee Balance: Ksh" << feeBalance << "\n";
        cout << "==================================\n";
    }
};

int main() {
    student s;
    double paymentAmount;

    cout << "--- Input Student Details ---\n";
    s.inputStudent();
    s.displayStatus();
    cout << "Enter amount to pay towards fees: ";
    cin >> paymentAmount;
    s.makePayment(paymentAmount);

    s.displayStatus();

    return 0;
}