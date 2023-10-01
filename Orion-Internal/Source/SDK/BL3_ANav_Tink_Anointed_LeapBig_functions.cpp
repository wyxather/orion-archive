// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Tink_Anointed_LeapBig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tink_Anointed_LeapBig_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C.OnBegin");

	UANav_Tink_Anointed_LeapBig_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C.OnExit
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tink_Anointed_LeapBig_C::OnExit(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C.OnExit");

	UANav_Tink_Anointed_LeapBig_C_OnExit_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C.ExecuteUbergraph_ANav_Tink_Anointed_LeapBig
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tink_Anointed_LeapBig_C::ExecuteUbergraph_ANav_Tink_Anointed_LeapBig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C.ExecuteUbergraph_ANav_Tink_Anointed_LeapBig");

	UANav_Tink_Anointed_LeapBig_C_ExecuteUbergraph_ANav_Tink_Anointed_LeapBig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
