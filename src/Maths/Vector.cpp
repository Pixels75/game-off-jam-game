#include "Vector.h"

#include <cmath>

float Vector2f::Normalize() const {
    return (float) sqrt(pow(x, 2) + pow(y, 2));
}

float Vector2f::Magnitude() const {
    return (float) sqrt(pow(x, 2) + pow(y, 2));
}

float Vector2f::SquaredMagnitude() const {
    return (float) pow(x, 2) + (float) pow(y, 2);
}

Vector2 Vector2f::ToRaylibVector() const {
    return {x, y};
}