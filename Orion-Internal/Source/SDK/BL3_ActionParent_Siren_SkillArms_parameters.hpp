#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionParent_Siren_SkillArms_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeOutArms
struct UActionParent_Siren_SkillArms_C_AnimNotify_FadeOutArms_Params
{
};

// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeInArms
struct UActionParent_Siren_SkillArms_C_AnimNotify_FadeInArms_Params
{
};

// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.OnBegin
struct UActionParent_Siren_SkillArms_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.ExecuteUbergraph_ActionParent_Siren_SkillArms
struct UActionParent_Siren_SkillArms_C_ExecuteUbergraph_ActionParent_Siren_SkillArms_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
