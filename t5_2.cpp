#include <iostream>

using namespace std;

bool canReach(int a, int b) {
    return (b - a <= 6 && b - a >= 1);
}

int main() {
    int yourPosition, friendPosition;

    cout << "Enter your position: ";
    cin >> yourPosition;

    cout << "Enter your friend's position: ";
    cin >> friendPosition;


    if (canReach(yourPosition, friendPosition)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}