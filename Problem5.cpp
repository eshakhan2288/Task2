#include <iostream>
using namespace std;

int main() {
    double speed;
    cout << "Enter car speed (km/h): ";
    cin >> speed;

    if (speed > 60) {
        cout << "Over the speed limit\n";
    } else {
        cout << "Safe speed\n";
    }

    return 0;
}
