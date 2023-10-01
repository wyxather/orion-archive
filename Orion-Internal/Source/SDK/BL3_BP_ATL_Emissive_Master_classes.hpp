#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ATL_Emissive_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ATL_Emissive_Master.BP_ATL_Emissive_Master_C
// 0x0060 (0x0098 - 0x0038)
class UBP_ATL_Emissive_Master_C : public UInventoryAspectData
{
public:
	struct FLinearColor                                BaseColor;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MarkerBaseColor;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MarkerHighlightColor;                                     // 0x0068(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HomingOverrideBase;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HomingOverrideHighlight;                                  // 0x0088(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ATL_Emissive_Master.BP_ATL_Emissive_Master_C");
		return ptr;
	}


	void K2_OnApplyAspect(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState);
	class FString K2_GetFriendlyDescription();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
