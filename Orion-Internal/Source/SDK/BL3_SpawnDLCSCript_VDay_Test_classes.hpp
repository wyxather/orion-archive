#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCSCript_VDay_Test_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C
// 0x0000 (0x0028 - 0x0028)
class USpawnDLCSCript_VDay_Test_C : public USpawnDLCScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C");
		return ptr;
	}


	void OnActorSpawned(class USpawnerComponent** SpawnerComponent, class AActor** Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
