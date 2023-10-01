#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCSCript_Cartels_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C
// 0x0018 (0x0040 - 0x0028)
class USpawnDLCSCript_Cartels_C : public USpawnDLCScript
{
public:
	class UGbxCondition*                               ConditionalReqMissionState_All;                           // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               ConditionalReqMissionState_Opt_Intro;                     // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               ConditionalReqMissionState_Opt_Rep;                       // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C");
		return ptr;
	}


	void OnActorDied(class USpawnerComponent** SpawnerComponent, class AActor** Actor);
	void OnActorSpawned(class USpawnerComponent** SpawnerComponent, class AActor** Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
