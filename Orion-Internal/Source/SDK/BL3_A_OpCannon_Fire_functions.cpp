// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_OpCannon_Fire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_OpCannon_Fire.A_OpCannon_Fire_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_OpCannon_Fire_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_OpCannon_Fire.A_OpCannon_Fire_C.OnServerEnd");

	UA_OpCannon_Fire_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_OpCannon_Fire.A_OpCannon_Fire_C.AN_FireShot
// (BlueprintCallable, BlueprintEvent)

void UA_OpCannon_Fire_C::AN_FireShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_OpCannon_Fire.A_OpCannon_Fire_C.AN_FireShot");

	UA_OpCannon_Fire_C_AN_FireShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_OpCannon_Fire.A_OpCannon_Fire_C.ExecuteUbergraph_A_OpCannon_Fire
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_OpCannon_Fire_C::ExecuteUbergraph_A_OpCannon_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_OpCannon_Fire.A_OpCannon_Fire_C.ExecuteUbergraph_A_OpCannon_Fire");

	UA_OpCannon_Fire_C_ExecuteUbergraph_A_OpCannon_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
