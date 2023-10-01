// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_DragonHeart_Action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UConsumable_DragonHeart_Action_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnPostComputeStats");

	UConsumable_DragonHeart_Action_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UConsumable_DragonHeart_Action_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnActionStart");

	UConsumable_DragonHeart_Action_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.ExecuteUbergraph_Consumable_DragonHeart_Action
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConsumable_DragonHeart_Action_C::ExecuteUbergraph_Consumable_DragonHeart_Action(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.ExecuteUbergraph_Consumable_DragonHeart_Action");

	UConsumable_DragonHeart_Action_C_ExecuteUbergraph_Consumable_DragonHeart_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
