#pragma once

#include "Class.h"

class MemAlloc // class IMemAlloc
{ 
public:
	INCONSTRUCTIBLE(MemAlloc);

	enum __vftable
	{
		Alloc = 1,
		Realloc = 3,
		Free = 5,
		__vftable = 47
	};

	VIRTUAL_METHOD(__vftable::Alloc, alloc, __stdcall, void*, (std::size_t size), (this, size));
	VIRTUAL_METHOD(__vftable::Realloc, realloc, __stdcall, void*, (void* data, std::size_t size), (this, data, size));
	VIRTUAL_METHOD(__vftable::Free, free, __stdcall, void, (void* data), (this, data));
};