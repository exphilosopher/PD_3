#include <iostream>

using namespace std;

int main() {
  int hours, minutes;

  // Get user input
  cout << "Enter hours: ";
  cin >> hours;
  cout << "Enter minutes: ";
  cin >> minutes;

  // Convert hours to minutes
  int hoursInMinutes = hours * 60;

  // Find the longest duration
  int longestDuration = (hoursInMinutes > minutes) ? hoursInMinutes : minutes;

  // Print the result
  if (longestDuration == hoursInMinutes) {
    cout << hours << " hours is the longest duration." << endl;
  } else {
    cout << minutes << " minutes is the longest duration." << endl;
  }

  return 0;
}