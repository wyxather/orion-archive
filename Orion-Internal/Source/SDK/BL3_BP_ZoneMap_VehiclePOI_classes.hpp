#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_VehiclePOI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C
// 0x0018 (0x0658 - 0x0640)
class ABP_ZoneMap_VehiclePOI_C : public AZoneMapVehicleIcon_POI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_VehiclePOI.BP_ZoneMap_VehiclePOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activate_POI();
	void ReceiveBeginPlay();
	void Begin_Zone_Map_Cursor_Over();
	void End_Zone_Map_Cursor_Over();
	void ExecuteUbergraph_BP_ZoneMap_VehiclePOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
