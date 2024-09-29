#include <iostream>
#include <string>

using namespace std;

string flipBool(string input) {
    if (input == "true") {
        return "false";
    } else if (input == "false") {
        return "true";
    } else {
        return "Invalid input";
    }
}

int main() {
    string input;

    cout << "Enter 'true' or 'false': ";
    cin >> input;

    string result = flipBool(input);
    cout << "Flipped value: " << result << endl;

    return 0;
}