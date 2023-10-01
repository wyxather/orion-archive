#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Vampiric_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_Vampiric.Action_Mod_Vampiric_C
// 0x0008 (0x02F0 - 0x02E8)
class UAction_Mod_Vampiric_C : public UAction_HealOverTime_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Vampiric.Action_Mod_Vampiric_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_Vampiric(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
