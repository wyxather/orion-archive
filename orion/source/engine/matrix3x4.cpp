#include "source/engine/matrix3x4.h"

#include "source/engine/vector3.h"

using orion::engine::Matrix3x4;

auto Matrix3x4::origin() const noexcept -> Vector3 {
    return Vector3 {m[0][3], m[1][3], m[2][3]};
}
