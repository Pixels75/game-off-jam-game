#pragma once

#include "../Maths/Vector.h"

struct TransformDT {
    Vector2f position{0.0f, 0.0f};
    Vector2f scale{1.0f, 1.0f};
    float rotation = 0.0f;

    void Move(Vector2f movement);
    void Scale(Vector2f scale);
    void Rotate(float degrees);
};