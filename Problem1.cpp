#include <iostream>
using namespace std;

int main() {
    double temperature;
    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature > 30) {
        cout << "Result: Hot\n";
    } else {
        cout << "Result: Cold\n";
    }

    return 0;
}
