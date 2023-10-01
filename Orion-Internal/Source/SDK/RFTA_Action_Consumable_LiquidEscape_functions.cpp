// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Consumable_LiquidEscape_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.AddedNoWoundedTag
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Consumable_LiquidEscape_C::AddedNoWoundedTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.AddedNoWoundedTag");

	UAction_Consumable_LiquidEscape_C_AddedNoWoundedTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Consumable_LiquidEscape_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.OnActionStart");

	UAction_Consumable_LiquidEscape_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.ExecuteUbergraph_Action_Consumable_LiquidEscape
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Consumable_LiquidEscape_C::ExecuteUbergraph_Action_Consumable_LiquidEscape(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_LiquidEscape.Action_Consumable_LiquidEscape_C.ExecuteUbergraph_Action_Consumable_LiquidEscape");

	UAction_Consumable_LiquidEscape_C_ExecuteUbergraph_Action_Consumable_LiquidEscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
