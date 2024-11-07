#include "raylib.h"

int main() {
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(640, 480, "Hello Raylib");

    const Model suzanne = LoadModel("../res/test.obj");
    const Texture2D texture = LoadTexture("../res/checkerboard.png");
    suzanne.materials[0].maps[MATERIAL_MAP_ALBEDO].texture = texture;

    Camera3D cam;
    cam.position = Vector3(3, 1, 3);
    cam.fovy = 60.0f;
    cam.projection = CAMERA_PERSPECTIVE;
    cam.target = Vector3(0, 0, 0);
    cam.up = Vector3(0, 1, 0);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        BeginMode3D(cam);
        DrawModel(suzanne, {0.0f, 0.0f, 0.0f}, 1.0f, WHITE);
        EndMode3D();
        EndDrawing();
    }

    CloseWindow();
}