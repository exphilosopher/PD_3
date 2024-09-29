#include <iostream>
#include <windows.h> // For gotoxy() function on Windows

using namespace std;

void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clear_screen() {
  system("cls"); // Clear the console screen on Windows
}

void print_maze() {
  // Define maze structure using gotoxy
  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      if (y == 0 || y == 9 || x == 0 || x == 9) {
        gotoxy(x, y);
        cout << "#"; // Walls
      } else if ((y == 2 && x % 4 == 1) || 
                 (y == 4 && x % 4 == 3) || 
                 (y == 6 && x % 4 == 1)) {
        gotoxy(x, y);
        cout << "#"; // Internal walls
      } else {
        gotoxy(x, y);
        cout << " "; // Empty space
      }
    }
  }
}

int main() {
  clear_screen();
  print_maze();
  return 0;
}