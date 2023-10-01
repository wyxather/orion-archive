#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_EchoLogPickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EchoLogPickup.BP_EchoLogPickup_C
// 0x0010 (0x0740 - 0x0730)
class ABP_EchoLogPickup_C : public ABP_OakInventoryItemPickup_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EchoLogPickup.BP_EchoLogPickup_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPickedUpEvent(class AActor** WasPickedUpBy);
	void ExecuteUbergraph_BP_EchoLogPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
