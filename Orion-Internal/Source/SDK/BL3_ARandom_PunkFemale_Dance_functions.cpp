// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PunkFemale_Dance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_PunkFemale_Dance_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C.OnEnd");

	UARandom_PunkFemale_Dance_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C.ExecuteUbergraph_ARandom_PunkFemale_Dance
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_PunkFemale_Dance_C::ExecuteUbergraph_ARandom_PunkFemale_Dance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C.ExecuteUbergraph_ARandom_PunkFemale_Dance");

	UARandom_PunkFemale_Dance_C_ExecuteUbergraph_ARandom_PunkFemale_Dance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
