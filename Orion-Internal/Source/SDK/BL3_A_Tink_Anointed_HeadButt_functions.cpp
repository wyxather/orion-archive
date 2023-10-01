// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_Anointed_HeadButt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Tink_Anointed_HeadButt.A_Tink_Anointed_HeadButt_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Anointed_HeadButt_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_HeadButt.A_Tink_Anointed_HeadButt_C.OnBegin");

	UA_Tink_Anointed_HeadButt_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_Anointed_HeadButt.A_Tink_Anointed_HeadButt_C.HeadButtStart
// (BlueprintCallable, BlueprintEvent)

void UA_Tink_Anointed_HeadButt_C::HeadButtStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_HeadButt.A_Tink_Anointed_HeadButt_C.HeadButtStart");

	UA_Tink_Anointed_HeadButt_C_HeadButtStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Tink_Anointed_HeadButt.A_Tink_Anointed_HeadButt_C.ExecuteUbergraph_A_Tink_Anointed_HeadButt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Tink_Anointed_HeadButt_C::ExecuteUbergraph_A_Tink_Anointed_HeadButt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Tink_Anointed_HeadButt.A_Tink_Anointed_HeadButt_C.ExecuteUbergraph_A_Tink_Anointed_HeadButt");

	UA_Tink_Anointed_HeadButt_C_ExecuteUbergraph_A_Tink_Anointed_HeadButt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
