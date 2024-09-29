#include <iostream>
#include <string>

using namespace std;

void printMenu(string universityName) {
    cout << "\n-----------------------------------------------------\n";
    cout << "         " << universityName << " Admission Management System         \n";
    cout << "-----------------------------------------------------\n";
    cout << "1. Calculate Aggregate\n";
    cout << "2. Compare ECAT Marks\n";
    cout << "3. Exit\n";
    cout << "-----------------------------------------------------\n";
}

double calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks) {
    double aggregate = (matricMarks * 0.3) + (interMarks * 0.3) + (ecatMarks * 0.4);
    cout << "\nAggregate for " << name << ": " << aggregate << "%" << endl;
    return aggregate;
}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2) {
    if (ecatMarksStd1 > ecatMarksStd2) {
        cout
 << "\n" << nameStd1 << " has higher ECAT marks and will be assigned the first roll number." << endl;
    } else if (ecatMarksStd1 < ecatMarksStd2) {
        cout << "\n" << nameStd2 << " has higher ECAT marks and will be assigned the first roll number." << endl;
    } else {
        cout << "\nBoth " << nameStd1 << " and " << nameStd2 << " have the same ECAT marks." << endl;
    }
}

int main() {
    string universityName = "Your University Name";
    int choice;
    string name, nameStd1, nameStd2;
    int matricMarks, interMarks, ecatMarks, ecatMarksStd1, ecatMarksStd2;

    do {
        printMenu(universityName);
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter student name: ";
                cin >> name;
                cout << "Enter Matric marks (out of 1100): ";
                cin >> matricMarks;
                cout << "Enter Intermediate marks (out of 550): ";
                cin >> interMarks;
                cout << "Enter ECAT marks (out of 400): ";
                cin >> ecatMarks;

                calculateAggregate(name, matricMarks, interMarks, ecatMarks);
                break;
            case 2:
                cout << "\nEnter name of student 1: ";
                cin >> nameStd1;
                cout << "Enter ECAT marks for " << nameStd1 << ": ";
                cin >> ecatMarksStd1;
                cout << "\nEnter name of student 2: ";
                cin >> nameStd2;
                cout << "Enter ECAT marks for " << nameStd2 << ": ";
                cin >> ecatMarksStd2;
                compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
                break;
            case 3:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}