#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x, y;
    
    system("cls");
    cout << "Enter the x-coordinate: ";
    cin >> x;

    cout << "Enter the y-coordinate: ";
    cin >> y;

    gotoxy(x, y);
    cout << "This text is moved to the specified position.";

    return 0;
}