// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Tinkloot_DropDown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tinkloot_DropDown_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.OnBegin");

	UANav_Tinkloot_DropDown_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tinkloot_DropDown_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.OnEnd");

	UANav_Tinkloot_DropDown_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.ExecuteUbergraph_ANav_Tinkloot_DropDown
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_Tinkloot_DropDown_C::ExecuteUbergraph_ANav_Tinkloot_DropDown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.ExecuteUbergraph_ANav_Tinkloot_DropDown");

	UANav_Tinkloot_DropDown_C_ExecuteUbergraph_ANav_Tinkloot_DropDown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
