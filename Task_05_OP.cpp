#include <iostream>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    const char* name = "Your Name"; // Replace "Your Name" with your actual name

    // Get the console screen buffer info
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    
    // Calculate the center position
    int screenWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int screenHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    int x = (screenWidth - strlen(name)) / 2; // Centering horizontally
    int y = screenHeight / 2; // Centering vertically

    gotoxy(x, y);
    std::cout << name;

    return 0;
}




