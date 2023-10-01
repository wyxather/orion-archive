// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakConsumableItemPickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OakConsumableItemPickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.UserConstructionScript");

	ABP_OakConsumableItemPickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OakConsumableItemPickup_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ReceiveEndPlay");

	ABP_OakConsumableItemPickup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.OnPickedUpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 WasPickedUpBy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OakConsumableItemPickup_C::OnPickedUpEvent(class AActor** WasPickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.OnPickedUpEvent");

	ABP_OakConsumableItemPickup_C_OnPickedUpEvent_Params params;
	params.WasPickedUpBy = WasPickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ExecuteUbergraph_BP_OakConsumableItemPickup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OakConsumableItemPickup_C::ExecuteUbergraph_BP_OakConsumableItemPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ExecuteUbergraph_BP_OakConsumableItemPickup");

	ABP_OakConsumableItemPickup_C_ExecuteUbergraph_BP_OakConsumableItemPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
