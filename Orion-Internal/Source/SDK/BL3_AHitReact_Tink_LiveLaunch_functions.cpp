// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Tink_LiveLaunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Tink_LiveLaunch.AHitReact_Tink_LiveLaunch_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Tink_LiveLaunch_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Tink_LiveLaunch.AHitReact_Tink_LiveLaunch_C.OnBegin");

	UAHitReact_Tink_LiveLaunch_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Tink_LiveLaunch.AHitReact_Tink_LiveLaunch_C.ExecuteUbergraph_AHitReact_Tink_LiveLaunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Tink_LiveLaunch_C::ExecuteUbergraph_AHitReact_Tink_LiveLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Tink_LiveLaunch.AHitReact_Tink_LiveLaunch_C.ExecuteUbergraph_AHitReact_Tink_LiveLaunch");

	UAHitReact_Tink_LiveLaunch_C_ExecuteUbergraph_AHitReact_Tink_LiveLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
