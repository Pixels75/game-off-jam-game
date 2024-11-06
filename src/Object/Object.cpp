#include "Object.h"

#include "raylib.h"

#include "../Maths/Transform.h"

TransformDT& Object::GetTransform() {
    return m_transform;
}

void Object::Draw() const {
    DrawCircleV(Vector2{m_transform.position.x + (float) GetScreenWidth() / 2, m_transform.position.y + (float) GetScreenHeight() / 2}, m_transform.scale.x * 20, WHITE);
}