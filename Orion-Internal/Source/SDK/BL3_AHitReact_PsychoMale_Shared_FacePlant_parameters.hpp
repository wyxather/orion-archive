#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PsychoMale_Shared_FacePlant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.OnBegin
struct UAHitReact_PsychoMale_Shared_FacePlant_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.Faceplant
struct UAHitReact_PsychoMale_Shared_FacePlant_C_Faceplant_Params
{
};

// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.OnEnd
struct UAHitReact_PsychoMale_Shared_FacePlant_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant
struct UAHitReact_PsychoMale_Shared_FacePlant_C_ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
