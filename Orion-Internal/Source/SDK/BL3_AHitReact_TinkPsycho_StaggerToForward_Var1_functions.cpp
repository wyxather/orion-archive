// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_TinkPsycho_StaggerToForward_Var1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_TinkPsycho_StaggerToForward_Var1.AHitReact_TinkPsycho_StaggerToForward_Var1_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_TinkPsycho_StaggerToForward_Var1_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_TinkPsycho_StaggerToForward_Var1.AHitReact_TinkPsycho_StaggerToForward_Var1_C.OnBegin");

	UAHitReact_TinkPsycho_StaggerToForward_Var1_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_TinkPsycho_StaggerToForward_Var1.AHitReact_TinkPsycho_StaggerToForward_Var1_C.ExecuteUbergraph_AHitReact_TinkPsycho_StaggerToForward_Var1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_TinkPsycho_StaggerToForward_Var1_C::ExecuteUbergraph_AHitReact_TinkPsycho_StaggerToForward_Var1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_TinkPsycho_StaggerToForward_Var1.AHitReact_TinkPsycho_StaggerToForward_Var1_C.ExecuteUbergraph_AHitReact_TinkPsycho_StaggerToForward_Var1");

	UAHitReact_TinkPsycho_StaggerToForward_Var1_C_ExecuteUbergraph_AHitReact_TinkPsycho_StaggerToForward_Var1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
