// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PunkAnointed_Death_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PunkAnointed_Death.A_PunkAnointed_Death_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PunkAnointed_Death_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PunkAnointed_Death.A_PunkAnointed_Death_C.OnBegin");

	UA_PunkAnointed_Death_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PunkAnointed_Death.A_PunkAnointed_Death_C.ExecuteUbergraph_A_PunkAnointed_Death
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PunkAnointed_Death_C::ExecuteUbergraph_A_PunkAnointed_Death(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PunkAnointed_Death.A_PunkAnointed_Death_C.ExecuteUbergraph_A_PunkAnointed_Death");

	UA_PunkAnointed_Death_C_ExecuteUbergraph_A_PunkAnointed_Death_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
