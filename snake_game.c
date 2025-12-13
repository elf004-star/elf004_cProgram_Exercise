#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>

// Screen dimensions
#define WIDTH 40
#define HEIGHT 20
#define MAX_TAIL 100

// Snake structure
typedef struct {
    int x, y;
} Point;

// Game variables
int score = 0;
Point snake[MAX_TAIL];
int tail = 0;
Point food;
int direction = 0; // 0: right, 1: down, 2: left, 3: up
int gameOver = 0;

// Function declarations
void InitializeGame();
void DrawGame();
void Input();
void Update();
void GenerateFood();
int CheckCollision(int x, int y);
void GameOver();

void InitializeGame() {
    // Initialize snake position (start in the middle)
    snake[0].x = WIDTH / 2;
    snake[0].y = HEIGHT / 2;
    tail = 0;
    score = 0;
    direction = 0;
    gameOver = 0;
    
    // Generate first food
    GenerateFood();
}

void DrawGame() {
    system("cls");
    
    // Draw top border
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // Draw left border
            if (x == 0) printf("#");
            
            // Draw snake or food or empty space
            if (x == snake[0].x && y == snake[0].y)
                printf("O"); // Snake head
            else if (x == food.x && y == food.y)
                printf("*"); // Food
            else {
                int printed = 0;
                for (int i = 1; i <= tail; i++) {
                    if (snake[i].x == x && snake[i].y == y) {
                        printf("o"); // Snake body
                        printed = 1;
                        break;
                    }
                }
                if (!printed) printf(" ");
            }
            
            // Draw right border
            if (x == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    // Draw bottom border
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    
    // Draw score
    printf("\nScore: %d\n", score);
    printf("Use arrow keys to move. Press 'x' to quit.\n");
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'x':
                gameOver = 1;
                break;
            case 72: // Up arrow
                if (direction != 1) direction = 3;
                break;
            case 80: // Down arrow
                if (direction != 3) direction = 1;
                break;
            case 75: // Left arrow
                if (direction != 0) direction = 2;
                break;
            case 77: // Right arrow
                if (direction != 2) direction = 0;
                break;
        }
    }
}

void Update() {
    // Save previous position
    int prevX = snake[0].x;
    int prevY = snake[0].y;
    int prev2X, prev2Y;
    
    // Move head
    switch (direction) {
        case 0: snake[0].x++; break; // Right
        case 1: snake[0].y++; break; // Down
        case 2: snake[0].x--; break; // Left
        case 3: snake[0].y--; break; // Up
    }
    
    // Move body
    for (int i = 1; i <= tail; i++) {
        prev2X = snake[i].x;
        prev2Y = snake[i].y;
        snake[i].x = prevX;
        snake[i].y = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    
    // Check if snake ate the food
    if (snake[0].x == food.x && snake[0].y == food.y) {
        score += 10;
        tail++;
        GenerateFood();
    }
    
    // Check for collision with walls
    if (snake[0].x < 0 || snake[0].x >= WIDTH || 
        snake[0].y < 0 || snake[0].y >= HEIGHT) {
        GameOver();
    }
    
    // Check for collision with self
    for (int i = 1; i <= tail; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            GameOver();
            break;
        }
    }
}

void GenerateFood() {
    bool valid = false;
    while (!valid) {
        food.x = rand() % WIDTH;
        food.y = rand() % HEIGHT;
        
        valid = true;
        // Check if food spawns on snake
        for (int i = 0; i <= tail; i++) {
            if (food.x == snake[i].x && food.y == snake[i].y) {
                valid = false;
                break;
            }
        }
    }
}

void GameOver() {
    gameOver = 1;
    system("cls");
    printf("\n\nGame Over!\n");
    printf("Final Score: %d\n\n", score);
    printf("Press any key to exit...");
    _getch();
}

int main() {
    // Set console title
    SetConsoleTitle("Snake Game");
    
    // Initialize random seed
    srand(time(0));
    
    // Hide cursor
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
    
    InitializeGame();
    
    while (!gameOver) {
        DrawGame();
        Input();
        Update();
        
        // Control game speed
        Sleep(100);
    }
    
    return 0;
}
