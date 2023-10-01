#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_BoosterPickup_CheapTips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C
// 0x0010 (0x04F8 - 0x04E8)
class ABP_BoosterPickup_CheapTips_C : public AShieldChargeInventoryPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Player*                        PickerUpper;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PickedUp(class AOakCharacter* PickupInstigator);
	void ExecuteUbergraph_BP_BoosterPickup_CheapTips(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
