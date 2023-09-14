#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

class bank {
    char name[100], add[100], y;
    float balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account() {
    cout << "ENTER YOUR FULL NAME :: ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "ENTER YOUR ADDRESS :: ";
    cin.ignore();
    cin.getline(add, 100);
    cout << "WHAT TYPE OF ACCOUNT YOU WANT TO OPEN \n SAVING(s)\t\t\t\tCURRENT(c)\n";
    cin >> y;
    cout << "ENTER AMOUNT FOR DEPOSIT\n";
    cin >> balance;
    cout << "YOUR ACCOUNT IS CREATED\n";
}

void bank::deposit_money() {
    float a;
    cout << "ENTER AMOUNT TO BE DEPOSITED\n";
    cin >> a;
    balance += a;
    cout << "TOTAL AMOUNT YOU DEPOSITED :: \t" << balance << endl;
}

void bank::display_account() {
    cout << "YOUR FULL NAME :: \t" << name << endl;
    cout << "YOUR ADDRESS :: \t" << add << endl;
    cout << "TYPE OF ACCOUNT YOU OPEN :: \t" << y << endl;
    cout << "TOTAL MONEY YOU DEPOSITED :: \t" << balance << endl;
}

void bank::withdraw_money() {
    float amount;
    cout << "\n withdraw :: ";
    cout << "ENTER AMOUNT TO BE WITHDRAWN :: ";
    cin >> amount;
    balance -= amount;
    cout << "NOW TOTAL AMOUNT IS LEFT :: " << balance << endl;
}

int main() {
    int ch;
    char x;
    bank bnk;
    do {
        cout << "(1) OPEN ACCOUNT \n";
        cout << "(2) DEPOSIT MONEY \n";
        cout << "(3) WITHDRAW MONEY \n";
        cout << "(4) DISPLAY ACCOUNT \n";
        cout << "(5) EXIT\n";
        cout << "SELECT OPTION FROM ABOVE \n";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "1) OPEN ACCOUNT \n";
                bnk.open_account();
                break;
            case 2:
                cout << "2) DEPOSIT MONEY \n";
                bnk.deposit_money();
                break;
            case 3:
                cout << "3) WITHDRAW MONEY \n";
                bnk.withdraw_money();
                break;
            case 4:
                cout << "4) Display Account \n";
                bnk.display_account();
                break;
            case 5:
                exit(1);
            default:
                cout << "YOU WANT TO SELECT THE NEXT OPTION press y \n";
                cout << "IF YOU WANT TO EXIT PRESS n \n";
                x = getch();
                if (x == 'n' || x == 'N') {
                    exit(0);
                }
                break;
        }
    } while (x == 'y' || x == 'Y');
    getch();
    return 0;
}
