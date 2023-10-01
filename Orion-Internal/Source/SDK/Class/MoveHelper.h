#pragma once

#include "Class.h"

class Entity;

class MoveHelper // IMoveHelper
{
public:
	INCONSTRUCTIBLE(MoveHelper);

	enum __vftable
	{
		// class IMoveHelper
		GetName,
		SetHost,
		ResetTouchList,
		AddToTouched,
		ProcessImpacts,
		Con_NPrintf,
		StartSound,
		StartSound2,
		PlayerFallingDamage,
		PlayerSetAnimation,
		GetSurfaceProps,
		IsWorldEntity,
		_DTOR,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::SetHost, setHost, __stdcall, void, (Entity* host), (this, host));
};