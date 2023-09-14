#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

const int width = 20;
const int height = 20;

bool gameOver;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

enum class Direction { STOP, LEFT, RIGHT, UP, DOWN };
Direction dir;

void InitGame() {
    gameOver = false;
    dir = Direction::STOP;
    x = width / 2;
    y = height / 2;
    fruitX = (rand() % (width-1))+1;
    fruitY = (rand() % (height-1))+1;
    score = 0;
    nTail = 0;
}

/*void RenderGame() {
    system("cls"); // Clear the console

    // Draw the top border
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // Draw the game board
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";

            // Check if (i, j) is the head of the snake
            else if (i == y && j == x)
                cout << "O";
            
            // Check if (i, j) is the position of the fruit
            else if (i == fruitY && j == fruitX)
                cout << "F";
            
            // Check if (i, j) is part of the snake's tail
            else {
                bool isTailSegment = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o";
                        isTailSegment = true;
                    }
                }
                if (!isTailSegment)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    // Draw the bottom border
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}
*/
/*
void RenderGame() {
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1 || i == 0 || i == height - 1)
                cout << "#";
            else if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}
*/
void RenderGame() {
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                cout << "#";
            else if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}


void ProcessInput() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = Direction::LEFT;
                break;
            case 'd':
                dir = Direction::RIGHT;
                break;
            case 'w':
                dir = Direction::UP;
                break;
            case 's':
                dir = Direction::DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void UpdateGame() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case Direction::LEFT:
            x--;
            break;
        case Direction::RIGHT:
            x++;
            break;
        case Direction::UP:
            y--;
            break;
        case Direction::DOWN:
            y++;
            break;
        default:
            break;
    }

    // Check if snake goes out of bounds and wrap around
    if (x >= width) x = 0;
    else if (x < 0) x = width - 1;
    if (y >= height) y = 0;
    else if (y < 0) y = height - 1;

    // Check for collision with tail
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }

    // Check for collision with fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator

    InitGame();

    while (!gameOver) {
        ProcessInput();
        UpdateGame();
        RenderGame();
        Sleep(100); // Adjust the speed of the game
    }

    cout << "Game over! Your score: " << score << endl;
    return 0;
}
