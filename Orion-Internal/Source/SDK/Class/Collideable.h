#pragma once

#include "Class.h"

struct Vector3;

class Collideable
{
public:
	INCONSTRUCTIBLE(Collideable);

	enum __vftable
	{
		ObbMins = 1,
		ObbMaxs,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::ObbMins, obbMins, __stdcall, const Vector3&, (), (this));
	VIRTUAL_METHOD(__vftable::ObbMaxs, obbMaxs, __stdcall, const Vector3&, (), (this));
};