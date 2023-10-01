#pragma once

#include "Class.h"

class BaseFileSystem
{
public:
	INCONSTRUCTIBLE(BaseFileSystem);

	enum __vftable
	{
		Read,
		Write,
		Open,
		Close,
		Seek,
		Tell,
		Size,
		Size2,
		Flush,
		Precache,
		FileExists,
		IsFileWritable,
		SetFileWritable,
		GetFileTime,
		ReadFile,
		WriteFile,
		UnzipFile,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::Read, read, __stdcall, int, (void* output, int size, void* handle), (this, output, size, handle));
	VIRTUAL_METHOD(__vftable::Write, write, __stdcall, int, (void* input, int size, void* handle), (this, input, size, handle));
	VIRTUAL_METHOD(__vftable::Open, open, __stdcall, void*, (const char* fileName, const char* options, const char* pathID), (this, fileName, options, pathID));
	VIRTUAL_METHOD(__vftable::Close, close, __stdcall, void, (void* handle), (this, handle));
	VIRTUAL_METHOD(__vftable::Size2, size, __stdcall, unsigned int, (void* handle), (this, handle));
};