// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Varkid_DeathRagdollLaunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APhys_Varkid_DeathRagdollLaunch.APhys_Varkid_DeathRagdollLaunch_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Varkid_DeathRagdollLaunch_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Varkid_DeathRagdollLaunch.APhys_Varkid_DeathRagdollLaunch_C.OnBegin");

	UAPhys_Varkid_DeathRagdollLaunch_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APhys_Varkid_DeathRagdollLaunch.APhys_Varkid_DeathRagdollLaunch_C.ExecuteUbergraph_APhys_Varkid_DeathRagdollLaunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Varkid_DeathRagdollLaunch_C::ExecuteUbergraph_APhys_Varkid_DeathRagdollLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Varkid_DeathRagdollLaunch.APhys_Varkid_DeathRagdollLaunch_C.ExecuteUbergraph_APhys_Varkid_DeathRagdollLaunch");

	UAPhys_Varkid_DeathRagdollLaunch_C_ExecuteUbergraph_APhys_Varkid_DeathRagdollLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
