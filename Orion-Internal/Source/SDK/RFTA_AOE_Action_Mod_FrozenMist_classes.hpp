#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_AOE_Action_Mod_FrozenMist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AOE_Action_Mod_FrozenMist.AOE_Action_Mod_FrozenMist_C
// 0x000A (0x0288 - 0x027E)
class UAOE_Action_Mod_FrozenMist_C : public UAction_AOE_Attack_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Action_Mod_FrozenMist.AOE_Action_Mod_FrozenMist_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_AOE_Action_Mod_FrozenMist(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
