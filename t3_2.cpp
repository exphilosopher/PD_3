#include <iostream>
#include <string>

using namespace std;

double calculateDiscount(string country, double ticketPrice) {
    double discount = 0.0;

    if (country == "Pakistan") {
        discount = 0.05;
    } else if (country == "Ireland") {
        discount = 0.10;
    } else if (country == "India") {
        discount = 0.20;
    } else if (country == "England") {
        discount = 0.30;
    } else if (country == "Canada") {
        discount = 0.45;
    }

    return ticketPrice * (1 - discount);
}

int main() {
    string country;
    double ticketPrice;

    cout << "Enter the country name: ";
    cin >> country;

    cout << "Enter the ticket price in dollars: ";
    cin >> ticketPrice;

    double finalPrice = calculateDiscount(country, ticketPrice);

    cout << "Final ticket price after discount: $" << finalPrice << endl;

    return 0;
}