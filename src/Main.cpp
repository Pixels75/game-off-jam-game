#include "raylib.h"

#include "Object/Object.h"

int main() {
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(640, 480, "Hello Raylib");
    Object obj;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        obj.Draw();
        EndDrawing();
    }

    CloseWindow();
}