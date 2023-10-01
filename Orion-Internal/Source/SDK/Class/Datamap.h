#pragma once

#include "Class.h"

enum class DatamapFieldType;

class Datamap;

class DatamapTypeDescription
{
public:
	INCONSTRUCTIBLE(DatamapTypeDescription);

	DatamapFieldType fieldType; //0x0000
	const char* fieldName; //0x0004
	int32_t fieldOffset; //0x0008
	uint16_t fieldSize; //0x000C
	int16_t flags; //0x000E
	const char* externalName; //0x0010
	void* saveRestoreOps; //0x0014
	void* inputFunc; //0x0018
	Datamap* td; //0x001C
	int32_t fieldSizeInBytes; //0x0020
	DatamapTypeDescription* overrideField; //0x0024
	int32_t overrideCount; //0x0028
	float fieldTolerance; //0x002C
	int32_t flatOffset[2]; //0x0030
	uint16_t flatGroup; //0x0038
	const char pad_003A[2]; //0x003A
}; //Size: 0x003C
static_assert(sizeof(DatamapTypeDescription) == 0x3C);

class Datamap
{
public:
	INCONSTRUCTIBLE(Datamap);

	DatamapTypeDescription* dataDesc; //0x0000
	int32_t dataNumFields; //0x0004
	const char* dataClassName; //0x0008
	Datamap* baseMap; //0x000C
	int32_t packedSize; //0x0010
	void* optimizedDataMap; //0x0014
}; //Size: 0x0018
static_assert(sizeof(Datamap) == 0x18);