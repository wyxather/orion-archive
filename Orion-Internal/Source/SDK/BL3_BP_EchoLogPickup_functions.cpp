// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_EchoLogPickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EchoLogPickup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript");

	ABP_EchoLogPickup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 WasPickedUpBy                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EchoLogPickup_C::OnPickedUpEvent(class AActor** WasPickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent");

	ABP_EchoLogPickup_C_OnPickedUpEvent_Params params;
	params.WasPickedUpBy = WasPickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EchoLogPickup_C::ExecuteUbergraph_BP_EchoLogPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup");

	ABP_EchoLogPickup_C_ExecuteUbergraph_BP_EchoLogPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
