#pragma once

#include "Class.h"

class Entity;

class EntityList // CClientEntityList : CBaseEntityList, IClientEntityList
{
public:
	INCONSTRUCTIBLE(EntityList);

	enum __vftable
	{
		// IClientEntityList
		GetClientNetworkable,
		GetClientNetworkableFromHandle,
		GetClientUnknownFromHandle,
		GetClientEntity,
		GetClientEntityFromHandle,
		NumberOfEntities,
		GetHighestEntityIndex,
		SetMaxEntities,
		GetMaxEntities,
		GetClientNetworkableArray,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::GetClientNetworkable, getClientNetworkable, __stdcall, void*, (int index), (this, index));
	VIRTUAL_METHOD(__vftable::GetClientNetworkableFromHandle, getClientNetworkableFromHandle, __stdcall, void*, (int handle), (this, handle));
	VIRTUAL_METHOD(__vftable::GetClientUnknownFromHandle, getClientUnknownFromHandle, __stdcall, void*, (int handle), (this, handle));
	VIRTUAL_METHOD(__vftable::GetClientEntity, getClientEntity, __stdcall, Entity*, (int index), (this, index));
	VIRTUAL_METHOD(__vftable::GetClientEntityFromHandle, getClientEntityFromHandle, __stdcall, Entity*, (int handle), (this, handle));
	VIRTUAL_METHOD(__vftable::NumberOfEntities, numberOfEntities, __stdcall, int, (bool includeNonNetworkable), (this, includeNonNetworkable));
	VIRTUAL_METHOD(__vftable::GetHighestEntityIndex, getHighestEntityIndex, __stdcall, int, (), (this));
	VIRTUAL_METHOD(__vftable::SetMaxEntities, setMaxEntities, __stdcall, void, (int max), (this, max));
	VIRTUAL_METHOD(__vftable::GetMaxEntities, getMaxEntities, __stdcall, int, (), (this));
	VIRTUAL_METHOD(__vftable::GetClientNetworkableArray, getClientNetworkableArray, __stdcall, void*, (), (this));
};