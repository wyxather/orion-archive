#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionParent_Siren_SkillArms_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C
// 0x0008 (0x0238 - 0x0230)
class UActionParent_Siren_SkillArms_C : public UOakAction_Anim_PhaseTranceArms
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C");
		return ptr;
	}


	void AnimNotify_FadeOutArms();
	void AnimNotify_FadeInArms();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_ActionParent_Siren_SkillArms(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
