#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VehicleSpawnMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C
// 0x0010 (0x0580 - 0x0570)
class ABP_VehicleSpawnMesh_C : public AOakVehicleSpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (Transient, DuplicateTransient)
	class UGbxActionComponent*                         GbxAction;                                                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSpawnMesh.BP_VehicleSpawnMesh_C");
		return ptr;
	}


	void AddInstantForce(class AOakVehicle* OakVehicle, const struct FVector& Impulse);
	void UserConstructionScript();
	void SpawnMesh_TriggerDestruction();
	void ExecuteUbergraph_BP_VehicleSpawnMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
