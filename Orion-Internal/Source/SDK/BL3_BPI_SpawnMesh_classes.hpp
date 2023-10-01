#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_SpawnMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_SpawnMesh.BPI_SpawnMesh_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_SpawnMesh_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SpawnMesh.BPI_SpawnMesh_C");
		return ptr;
	}


	void SpawnMesh_TriggerDestruction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
