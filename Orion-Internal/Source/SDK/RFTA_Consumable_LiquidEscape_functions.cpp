// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_LiquidEscape_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AConsumable_LiquidEscape_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ModifyInspectInfo");

	AConsumable_LiquidEscape_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.OnUse
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AConsumable_LiquidEscape_C::OnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.OnUse");

	AConsumable_LiquidEscape_C_OnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ExecuteUbergraph_Consumable_LiquidEscape
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_LiquidEscape_C::ExecuteUbergraph_Consumable_LiquidEscape(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ExecuteUbergraph_Consumable_LiquidEscape");

	AConsumable_LiquidEscape_C_ExecuteUbergraph_Consumable_LiquidEscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
