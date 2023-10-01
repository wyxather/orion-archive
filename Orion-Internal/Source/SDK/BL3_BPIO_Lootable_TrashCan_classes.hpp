#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_TrashCan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C
// 0x001D (0x08D1 - 0x08B4)
class ABPIO_Lootable_TrashCan_C : public ABPIO_Lootable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (Transient, DuplicateTransient)
	struct FName                                       Lid;                                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               RandomDirection;                                          // 0x08C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WasInteractedWith;                                        // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEnabling();
	void BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void CE_CheckToSeeIfLidDisappears();
	void ExecuteUbergraph_BPIO_Lootable_TrashCan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
