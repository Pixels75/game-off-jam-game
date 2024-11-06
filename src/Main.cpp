#include "raylib.h"

int main() {
    InitWindow(600, 400, "Hello World");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}