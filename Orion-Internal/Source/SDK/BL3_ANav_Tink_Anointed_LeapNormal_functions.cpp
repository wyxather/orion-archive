// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Tink_Anointed_LeapNormal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_Tink_Anointed_LeapNormal.ANav_Tink_Anointed_LeapNormal_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tink_Anointed_LeapNormal_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tink_Anointed_LeapNormal.ANav_Tink_Anointed_LeapNormal_C.OnBegin");

	UANav_Tink_Anointed_LeapNormal_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Tink_Anointed_LeapNormal.ANav_Tink_Anointed_LeapNormal_C.MeleeStop
// (BlueprintCallable, BlueprintEvent)

void UANav_Tink_Anointed_LeapNormal_C::MeleeStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tink_Anointed_LeapNormal.ANav_Tink_Anointed_LeapNormal_C.MeleeStop");

	UANav_Tink_Anointed_LeapNormal_C_MeleeStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Tink_Anointed_LeapNormal.ANav_Tink_Anointed_LeapNormal_C.ExecuteUbergraph_ANav_Tink_Anointed_LeapNormal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tink_Anointed_LeapNormal_C::ExecuteUbergraph_ANav_Tink_Anointed_LeapNormal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tink_Anointed_LeapNormal.ANav_Tink_Anointed_LeapNormal_C.ExecuteUbergraph_ANav_Tink_Anointed_LeapNormal");

	UANav_Tink_Anointed_LeapNormal_C_ExecuteUbergraph_ANav_Tink_Anointed_LeapNormal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
