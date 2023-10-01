// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_BoosterPickup_CheapTips_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BoosterPickup_CheapTips_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.UserConstructionScript");

	ABP_BoosterPickup_CheapTips_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoosterPickup_CheapTips_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ReceiveBeginPlay");

	ABP_BoosterPickup_CheapTips_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoosterPickup_CheapTips_C::PickedUp(class AOakCharacter* PickupInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.PickedUp");

	ABP_BoosterPickup_CheapTips_C_PickedUp_Params params;
	params.PickupInstigator = PickupInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ExecuteUbergraph_BP_BoosterPickup_CheapTips
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoosterPickup_CheapTips_C::ExecuteUbergraph_BP_BoosterPickup_CheapTips(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ExecuteUbergraph_BP_BoosterPickup_CheapTips");

	ABP_BoosterPickup_CheapTips_C_ExecuteUbergraph_BP_BoosterPickup_CheapTips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
