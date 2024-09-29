#include <iostream>

using namespace std;

int pet(int holidays) {
    int workingDays = 365 - holidays;
    int totalGameTime = (holidays * 127) + (workingDays * 63);
    return totalGameTime;
}

int main() {
    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;

    int totalGameTime = pet(holidays);

    if (totalGameTime == 30000) {
        cout << "Tom can sleep well." << endl;
    } else if (totalGameTime > 30000) {
        cout << "Tom cannot sleep well. He has exceeded the norm by " << totalGameTime - 30000 << " minutes." << endl;
    } else {
        cout << "Tom can sleep well. He has " << 30000 - totalGameTime << " minutes left before reaching the norm." << endl;
    }

    return 0;
}