#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Consumable_LiquidEscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C
// 0x000D (0x02D0 - 0x02C3)
class UAction_Consumable_LiquidEscape_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C");
		return ptr;
	}


	void AddedNoWoundedTag(struct FName* Tag);
	void OnActionStart();
	void ExecuteUbergraph_Action_Consumable_LiquidEscape(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
