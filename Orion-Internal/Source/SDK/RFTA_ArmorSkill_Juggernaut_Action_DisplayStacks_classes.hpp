#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Juggernaut_Action_DisplayStacks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C
// 0x000D (0x02D0 - 0x02C3)
class UArmorSkill_Juggernaut_Action_DisplayStacks_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Juggernaut_Action_DisplayStacks.ArmorSkill_Juggernaut_Action_DisplayStacks_C");
		return ptr;
	}


	void OnActionStart();
	void UpdateStackCount();
	void ExecuteUbergraph_ArmorSkill_Juggernaut_Action_DisplayStacks(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
