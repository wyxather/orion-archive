// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_OpCannon_Unequip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_OpCannon_Unequip.A_OpCannon_Unequip_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_OpCannon_Unequip_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_OpCannon_Unequip.A_OpCannon_Unequip_C.OnServerEnd");

	UA_OpCannon_Unequip_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_OpCannon_Unequip.A_OpCannon_Unequip_C.ExecuteUbergraph_A_OpCannon_Unequip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_OpCannon_Unequip_C::ExecuteUbergraph_A_OpCannon_Unequip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_OpCannon_Unequip.A_OpCannon_Unequip_C.ExecuteUbergraph_A_OpCannon_Unequip");

	UA_OpCannon_Unequip_C_ExecuteUbergraph_A_OpCannon_Unequip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
