// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronCub_BearFist_Right_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.AN_Melee
// (BlueprintCallable, BlueprintEvent)

void UAction_IronCub_BearFist_Right_C::AN_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.AN_Melee");

	UAction_IronCub_BearFist_Right_C_AN_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_BearFist_Right_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.OnServerBegin");

	UAction_IronCub_BearFist_Right_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.ExecuteUbergraph_Action_IronCub_BearFist_Right
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_BearFist_Right_C::ExecuteUbergraph_Action_IronCub_BearFist_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_BearFist_Right.Action_IronCub_BearFist_Right_C.ExecuteUbergraph_Action_IronCub_BearFist_Right");

	UAction_IronCub_BearFist_Right_C_ExecuteUbergraph_Action_IronCub_BearFist_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
