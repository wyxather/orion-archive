#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_ColdSpear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C
// 0x000A (0x0288 - 0x027E)
class UAction_AOE_Mod_ColdSpear_C : public UAction_AOE_Attack_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x027E(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Action_AOE_Mod_ColdSpear(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
