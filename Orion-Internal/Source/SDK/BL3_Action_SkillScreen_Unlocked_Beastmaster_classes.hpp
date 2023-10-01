#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SkillScreen_Unlocked_Beastmaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C
// 0x0008 (0x0220 - 0x0218)
class UAction_SkillScreen_Unlocked_Beastmaster_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
