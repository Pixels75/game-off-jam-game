#pragma once

#include "raylib.h"

struct Vector2f {
    float x = 0.0f, y = 0.0f;

    [[nodiscard]] float Normalize() const;
    [[nodiscard]] float Magnitude() const;
    [[nodiscard]] float SquaredMagnitude() const;
    [[nodiscard]] Vector2 ToRaylibVector() const;
};