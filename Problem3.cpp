#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double bill, amountToPay;
    cout << "Enter bill amount: ";
    cin >> bill;

    if (bill >= 1000) {
        amountToPay = bill - (bill * 0.10);
    } else {
        amountToPay = bill;
    }

    cout << fixed << setprecision(2);
    cout << "Amount to pay: " << amountToPay << '\n';

    return 0;
}
