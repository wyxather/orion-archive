// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_Tink_Anointed_Gigantic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.Throw_R
// (BlueprintCallable, BlueprintEvent)

void UALoop_Tink_Anointed_Gigantic_C::Throw_R()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.Throw_R");

	UALoop_Tink_Anointed_Gigantic_C_Throw_R_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.Throw_L
// (BlueprintCallable, BlueprintEvent)

void UALoop_Tink_Anointed_Gigantic_C::Throw_L()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.Throw_L");

	UALoop_Tink_Anointed_Gigantic_C_Throw_L_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_Tink_Anointed_Gigantic_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.OnBegin");

	UALoop_Tink_Anointed_Gigantic_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.ExitStart
// (BlueprintCallable, BlueprintEvent)

void UALoop_Tink_Anointed_Gigantic_C::ExitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.ExitStart");

	UALoop_Tink_Anointed_Gigantic_C_ExitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.ExecuteUbergraph_ALoop_Tink_Anointed_Gigantic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_Tink_Anointed_Gigantic_C::ExecuteUbergraph_ALoop_Tink_Anointed_Gigantic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C.ExecuteUbergraph_ALoop_Tink_Anointed_Gigantic");

	UALoop_Tink_Anointed_Gigantic_C_ExecuteUbergraph_ALoop_Tink_Anointed_Gigantic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
