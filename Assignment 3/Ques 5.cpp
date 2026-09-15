#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    float balance;
    static int totalAccounts;

public:
    BankAccount(int acc, float bal) {
        accountNo = acc;
        balance = bal;
        totalAccounts++;
    }

    friend void displayAccount(BankAccount b);

    static void displayTotalAccounts() {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void displayAccount(BankAccount b) {
    cout << "Account Number = " << b.accountNo << endl;
    cout << "Balance = " << b.balance << endl;
}

int main() {
    BankAccount b1(1001, 50000);
    BankAccount b2(1002, 75000);

    displayAccount(b1);
    displayAccount(b2);

    BankAccount::displayTotalAccounts();

    return 0;
}
