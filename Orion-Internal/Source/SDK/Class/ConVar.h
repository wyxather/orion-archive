#pragma once

#include "Class.h"

class ConVar
{
public:
	INCONSTRUCTIBLE(ConVar);

	enum __vftable
	{
		GetFloat = 12,
		GetInt,
		GetColor = GetInt,
		GetBool = GetInt,
		GetString = GetInt,

		// class IConVar
		SetValue_Char,
		SetValue_Float,
		SetValue_Int,
		SetValue_Color,
		GetName,
		GetBaseName,
		IsFlagSet,
		GetSplitScreenPlayerSlot,
		__vftable = 21
	};

	VIRTUAL_METHOD(__vftable::GetFloat, getFloat, __stdcall, float, (), (this));
	VIRTUAL_METHOD(__vftable::GetInt, getInt, __stdcall, int, (), (this));
};