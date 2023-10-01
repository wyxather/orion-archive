#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_ZipLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnMesh_ZipLine.SpawnMesh_ZipLine_C
// 0x0000 (0x04F8 - 0x04F8)
class ASpawnMesh_ZipLine_C : public ABP_SpawnMesh_Skeletal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnMesh_ZipLine.SpawnMesh_ZipLine_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
