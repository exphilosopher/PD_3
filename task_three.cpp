#include <iostream>
#include <windows.h> // For gotoxy function
using namespace std;

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
 {
    // Define the maze dimensions (adjust as needed)
    int rows = 10;
    int cols = 20;

    // Print the maze (replace with your actual maze design)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "#"; // Replace with your maze wall character
        }
        cout << endl;
    }

    // Set the player's starting position (adjust as needed)
    int playerX = 5;
    int playerY = 2;

    // Print the player at the starting position
    gotoxy(playerX, playerY);
    cout << "P"; // Replace with your player character
    return 0;
}