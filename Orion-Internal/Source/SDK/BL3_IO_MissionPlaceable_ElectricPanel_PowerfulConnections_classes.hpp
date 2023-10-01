#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionPlaceable_ElectricPanel_PowerfulConnections_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionPlaceable_ElectricPanel_PowerfulConnections.IO_MissionPlaceable_ElectricPanel_PowerfulConnections_C
// 0x0020 (0x07B8 - 0x0798)
class AIO_MissionPlaceable_ElectricPanel_PowerfulConnections_C : public AIO_MissionPlaceable_Static_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)
	class UGbxChildActorComponent*                     IO_MissionPlaceable_ExplodingHumanSpine;                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxChildActorComponent*                     IO_Combat_Panel_Electric;                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AIO_Combat_Panel_Electric_C*                 ElectricPanel;                                            // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionPlaceable_ElectricPanel_PowerfulConnections.IO_MissionPlaceable_ElectricPanel_PowerfulConnections_C");
		return ptr;
	}


	void UserConstructionScript();
	void Play_Feedback_PlaceableDefault();
	void Play_Feedback_Placeable();
	void Play_Feedback_Placing();
	void Play_Feedback_Placed();
	void ExecuteUbergraph_IO_MissionPlaceable_ElectricPanel_PowerfulConnections(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
