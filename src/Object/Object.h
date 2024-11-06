#pragma once

#include "../Maths/Transform.h"

class Object {
public:
    Object() = default;
    [[nodiscard]] TransformDT& GetTransform();
    void Draw() const;
private:
    TransformDT m_transform{};
};