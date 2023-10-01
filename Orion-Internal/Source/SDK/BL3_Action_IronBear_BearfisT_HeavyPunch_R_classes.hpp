#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearfisT_HeavyPunch_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C
// 0x0008 (0x0248 - 0x0240)
class UAction_IronBear_BearfisT_HeavyPunch_R_C : public UAction_IronBear_BearFist_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_BearfisT_HeavyPunch_R.Action_IronBear_BearfisT_HeavyPunch_R_C");
		return ptr;
	}


	void AN_MeleeHit();
	void ExecuteUbergraph_Action_IronBear_BearfisT_HeavyPunch_R(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
