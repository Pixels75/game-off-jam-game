#include "Transform.h"

void TransformDT::Move(const Vector2f movement) {
    this->position.x += movement.x;
    this->position.y += movement.y;
}

void TransformDT::Scale(const Vector2f scale) {
    this->scale.x += scale.x;
    this->scale.y += scale.y;
}

void TransformDT::Rotate(const float degrees) {
    rotation += degrees;
}