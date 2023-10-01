#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Gunner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Gunner.BPChar_Gunner_C.GetPrimaryActionAbility
struct ABPChar_Gunner_C_GetPrimaryActionAbility_Params
{
	class UOakActionAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Gunner.BPChar_Gunner_C.GetHeadMesh
struct ABPChar_Gunner_C_GetHeadMesh_Params
{
	class USkeletalMesh*                               HeadMesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Gunner.BPChar_Gunner_C.UserConstructionScript
struct ABPChar_Gunner_C_UserConstructionScript_Params
{
};

// Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerDeviceVisible
struct ABPChar_Gunner_C_SetGunnerDeviceVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramVisible
struct ABPChar_Gunner_C_SetGunnerHologramVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramTemplate
struct ABPChar_Gunner_C_SetGunnerHologramTemplate_Params
{
	class UParticleSystem*                             Template;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Gunner.BPChar_Gunner_C.ExecuteUbergraph_BPChar_Gunner
struct ABPChar_Gunner_C_ExecuteUbergraph_BPChar_Gunner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
