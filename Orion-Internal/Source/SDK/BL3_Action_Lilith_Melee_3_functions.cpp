// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Lilith_Melee_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Lilith_Melee_3.Action_Lilith_Melee_2_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Lilith_Melee_2_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Melee_3.Action_Lilith_Melee_2_C.OnBegin");

	UAction_Lilith_Melee_2_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Lilith_Melee_3.Action_Lilith_Melee_2_C.LilithMelee
// (BlueprintCallable, BlueprintEvent)

void UAction_Lilith_Melee_2_C::LilithMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Melee_3.Action_Lilith_Melee_2_C.LilithMelee");

	UAction_Lilith_Melee_2_C_LilithMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Lilith_Melee_3.Action_Lilith_Melee_2_C.ExecuteUbergraph_Action_Lilith_Melee_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Lilith_Melee_2_C::ExecuteUbergraph_Action_Lilith_Melee_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Lilith_Melee_3.Action_Lilith_Melee_2_C.ExecuteUbergraph_Action_Lilith_Melee_3");

	UAction_Lilith_Melee_2_C_ExecuteUbergraph_Action_Lilith_Melee_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
