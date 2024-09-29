#include <iostream>

using namespace std;

void checkSpeed(int speed) {
    if (speed > 100) {
        cout << "The car was speeding. A challan will be issued." << endl;
    } else {
        cout << "The car was not speeding. No challan will be issued." << endl;
    }
}

int main() {
    int speed;

    cout << "Enter the speed of the car (in km/h): ";
    cin >> speed;

    checkSpeed(speed);

    return 0;
}