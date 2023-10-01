#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_LiquidEscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Consumable_LiquidEscape.Consumable_LiquidEscape_C
// 0x000F (0x0638 - 0x0629)
class AConsumable_LiquidEscape_C : public AItem_Potion_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_LiquidEscape.Consumable_LiquidEscape_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnUse();
	void ExecuteUbergraph_Consumable_LiquidEscape(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
