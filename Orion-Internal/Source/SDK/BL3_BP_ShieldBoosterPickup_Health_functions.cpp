// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_Health_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShieldBoosterPickup_Health_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.UserConstructionScript");

	ABP_ShieldBoosterPickup_Health_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShieldBoosterPickup_Health_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.ReceiveBeginPlay");

	ABP_ShieldBoosterPickup_Health_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldBoosterPickup_Health_C::PickedUp(class AOakCharacter* PickupInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.PickedUp");

	ABP_ShieldBoosterPickup_Health_C_PickedUp_Params params;
	params.PickupInstigator = PickupInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Health
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShieldBoosterPickup_Health_C::ExecuteUbergraph_BP_ShieldBoosterPickup_Health(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Health.BP_ShieldBoosterPickup_Health_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Health");

	ABP_ShieldBoosterPickup_Health_C_ExecuteUbergraph_BP_ShieldBoosterPickup_Health_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
