#include "raylib.h"

#include "Object/Object.h"

int main() {
    InitWindow(600, 400, "Hello World");
    Object obj;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        obj.Draw();
        EndDrawing();
    }

    CloseWindow();
}