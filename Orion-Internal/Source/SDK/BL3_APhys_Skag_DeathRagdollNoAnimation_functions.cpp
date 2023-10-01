// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Skag_DeathRagdollNoAnimation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APhys_Skag_DeathRagdollNoAnimation.APhys_Skag_DeathRagdollNoAnimation_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Skag_DeathRagdollNoAnimation_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Skag_DeathRagdollNoAnimation.APhys_Skag_DeathRagdollNoAnimation_C.OnBegin");

	UAPhys_Skag_DeathRagdollNoAnimation_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APhys_Skag_DeathRagdollNoAnimation.APhys_Skag_DeathRagdollNoAnimation_C.ExecuteUbergraph_APhys_Skag_DeathRagdollNoAnimation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Skag_DeathRagdollNoAnimation_C::ExecuteUbergraph_APhys_Skag_DeathRagdollNoAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Skag_DeathRagdollNoAnimation.APhys_Skag_DeathRagdollNoAnimation_C.ExecuteUbergraph_APhys_Skag_DeathRagdollNoAnimation");

	UAPhys_Skag_DeathRagdollNoAnimation_C_ExecuteUbergraph_APhys_Skag_DeathRagdollNoAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
