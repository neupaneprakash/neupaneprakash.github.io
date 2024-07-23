#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string ac_name;
    int acc_no;
    double balance;
    static double min_balance;

public:
    void readData() {
        cout << "Enter account name: ";
        getline(cin, ac_name);
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter balance: ";
        cin >> balance;
        cin.ignore(); // Ignore newline character
    }

    void displayData() {
        cout << "Account Name: " << ac_name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }

    static void displayMinBalance() {
        cout << "Minimum balance: " << min_balance << endl;
    }
};

double Account::min_balance = 1000.0;

int main() {
    Account accounts[5];

    for (int i = 0; i < 5; i++) {
        accounts[i].readData();
    }

    cout << "\nAccount Details:\n";
    for (int i = 0; i < 5; i++) {
        accounts[i].displayData();
        cout << endl;
    }

    Account::displayMinBalance();

    return 0;
}