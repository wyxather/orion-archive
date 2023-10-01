// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_Clover_Luck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShieldBoosterPickup_Clover_Luck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.UserConstructionScript");

	ABP_ShieldBoosterPickup_Clover_Luck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShieldBoosterPickup_Clover_Luck_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.ReceiveBeginPlay");

	ABP_ShieldBoosterPickup_Clover_Luck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldBoosterPickup_Clover_Luck_C::PickedUp(class AOakCharacter* PickupInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.PickedUp");

	ABP_ShieldBoosterPickup_Clover_Luck_C_PickedUp_Params params;
	params.PickupInstigator = PickupInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Clover_Luck
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldBoosterPickup_Clover_Luck_C::ExecuteUbergraph_BP_ShieldBoosterPickup_Clover_Luck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Clover_Luck.BP_ShieldBoosterPickup_Clover_Luck_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Clover_Luck");

	ABP_ShieldBoosterPickup_Clover_Luck_C_ExecuteUbergraph_BP_ShieldBoosterPickup_Clover_Luck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
