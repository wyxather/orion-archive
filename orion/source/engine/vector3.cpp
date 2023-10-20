#include "source/engine/vector3.h"

#include "source/engine/matrix3x4.h"

using orion::engine::Vector3;

auto Vector3::transform(const Matrix3x4& m) const noexcept -> Vector3
{
    return Vector3{Vector3::dot_product(Vector3{m[0][0], m[0][1], m[0][2]}) + m[0][3],
                   Vector3::dot_product(Vector3{m[1][0], m[1][1], m[1][2]}) + m[1][3],
                   Vector3::dot_product(Vector3{m[2][0], m[2][1], m[2][2]}) + m[2][3]};
}
