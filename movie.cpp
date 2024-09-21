#include<iostream>
using namespace std;
main()
{
    string movieName;
    float adultTicketPrice, childTicketPrice;
    int adultTicketsSold, childTicketsSold;
    float donationPercentage;

    cout << "Enter the movie name: ";
    getline(cin, movieName);

    cout << "Enter the adult ticket price: $";
    cin >> adultTicketPrice;
    cout << "Enter the child ticket price: $";
    cin >> childTicketPrice;

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;
    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    cout << "Enter the percentage of the amount to be donated to charity: ";
    cin >> donationPercentage;

    float totalAmountGenerated = (adultTicketsSold * adultTicketPrice) + (childTicketsSold * childTicketPrice);
    float donationAmount = (totalAmountGenerated * donationPercentage) / 100;
    float remainingAmount = totalAmountGenerated - donationAmount;

    cout << "\nMovie: " << movieName << endl;
    cout << "Total amount generated from ticket sales: $" << fixed  << totalAmountGenerated << endl;
    cout << "Donation to charity (" << donationPercentage << "%): $" << fixed << donationAmount << endl;
    cout << "Remaining amount after donation: $" << fixed<< remainingAmount << endl;

    return 0;
}