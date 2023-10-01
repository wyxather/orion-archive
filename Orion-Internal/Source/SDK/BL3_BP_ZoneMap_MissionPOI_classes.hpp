#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_MissionPOI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C
// 0x0014 (0x06B4 - 0x06A0)
class ABP_ZoneMap_MissionPOI_C : public AZoneMapMissionWaypointIcon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Mission_Icon_Size_Scale;                                  // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_MissionPOI.BP_ZoneMap_MissionPOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BeginZoneMapCursorOver();
	void EndZoneMapCursorOver();
	void K2_OnWaypointUpdated();
	void ExecuteUbergraph_BP_ZoneMap_MissionPOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
