// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_AOE_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_AOE_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.OnBegin");

	UARAnim_Skag_Shared_AOE_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.Notify_AOE
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_AOE_C::Notify_AOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.Notify_AOE");

	UARAnim_Skag_Shared_AOE_C_Notify_AOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.ExecuteUbergraph_ARAnim_Skag_Shared_AOE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_AOE_C::ExecuteUbergraph_ARAnim_Skag_Shared_AOE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_AOE.ARAnim_Skag_Shared_AOE_C.ExecuteUbergraph_ARAnim_Skag_Shared_AOE");

	UARAnim_Skag_Shared_AOE_C_ExecuteUbergraph_ARAnim_Skag_Shared_AOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
