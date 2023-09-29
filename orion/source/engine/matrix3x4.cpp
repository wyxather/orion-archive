#include "Matrix3x4.h"

#include "Vector3.h"

auto orion::Matrix3x4::origin() const noexcept -> Vector3 {
    return Vector3(Matrix3x4::m[0][3], Matrix3x4::m[1][3], Matrix3x4::m[2][3]);
}
