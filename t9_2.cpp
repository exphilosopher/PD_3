#include <iostream>

using namespace std;

bool hasEnoughTP(int people, int tp) {
    // Calculate total sheets needed per day
    int dailySheets = people * 57;

    // Calculate total sheets available
    int totalSheets = tp * 500;

    // Calculate days the TP can last
    int days = totalSheets / dailySheets;

    // Check if TP is sufficient for 14 days
    return days >= 14;
}

int main() {
    int people, tp;

    cout << "Enter the number of people in your household: ";
    cin >> people;

    cout << "Enter the number of TP rolls you have: ";
    cin >> tp;

    if (hasEnoughTP(people, tp)) {
        cout << "You have enough TP to last 14 days." << endl;
    } else {
        cout << "You need to buy more TP!" << endl;
    }

    return 0;
}