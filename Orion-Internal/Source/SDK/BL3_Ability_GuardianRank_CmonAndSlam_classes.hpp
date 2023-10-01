#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_CmonAndSlam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_CmonAndSlam.Ability_GuardianRank_CmonAndSlam_C
// 0x0008 (0x01B8 - 0x01B0)
class UAbility_GuardianRank_CmonAndSlam_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_CmonAndSlam.Ability_GuardianRank_CmonAndSlam_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_GuardianRank_CmonAndSlam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
