#pragma once

#include "Class.h"

template <typename T>
class UtlVector
{
public:
    INCONSTRUCTIBLE(UtlVector);

    constexpr auto&& operator[](int i) noexcept { return memory[i]; }
    constexpr auto&& operator[](int i) const noexcept { return memory[i]; }

    T* memory;
    int allocationCount;
    int growSize;
    int size;
    T* elements;
};