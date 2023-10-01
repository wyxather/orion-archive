#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Varkid_Attack_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_Varkid_Attack_Melee.ARAnim_Varkid_Attack_Melee_C.OnBegin
struct UARAnim_Varkid_Attack_Melee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Varkid_Attack_Melee.ARAnim_Varkid_Attack_Melee_C.Notify_Bite
struct UARAnim_Varkid_Attack_Melee_C_Notify_Bite_Params
{
};

// Function ARAnim_Varkid_Attack_Melee.ARAnim_Varkid_Attack_Melee_C.Notify_Sting
struct UARAnim_Varkid_Attack_Melee_C_Notify_Sting_Params
{
};

// Function ARAnim_Varkid_Attack_Melee.ARAnim_Varkid_Attack_Melee_C.ExecuteUbergraph_ARAnim_Varkid_Attack_Melee
struct UARAnim_Varkid_Attack_Melee_C_ExecuteUbergraph_ARAnim_Varkid_Attack_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
