#pragma once

#include "Class.h"
#include "SDK/Struct/Vector3.h"

class Model
{
public:
    INCONSTRUCTIBLE(Model);

    void* handle;
    char name[260];
    int	loadFlags;
    int	serverCount;
    int	type;
    int	flags;
    Vector3 mins;
    Vector3 maxs;
};