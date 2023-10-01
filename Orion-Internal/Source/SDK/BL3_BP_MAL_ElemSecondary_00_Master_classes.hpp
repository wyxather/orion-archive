#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_MAL_ElemSecondary_00_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MAL_ElemSecondary_00_Master.BP_MAL_ElemSecondary_00_Master_C
// 0x0020 (0x0058 - 0x0038)
class UBP_MAL_ElemSecondary_00_Master_C : public UInventoryAspectData
{
public:
	struct FLinearColor                                BaseColor;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MAL_ElemSecondary_00_Master.BP_MAL_ElemSecondary_00_Master_C");
		return ptr;
	}


	void K2_OnApplyAspect(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState);
	class FString K2_GetFriendlyDescription();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
