// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Tediore_Weapons_Digistruct_In_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Tediore_Weapons_Digistruct_In_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.OnBegin");

	UBP_CE_Tediore_Weapons_Digistruct_In_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Tediore_Weapons_Digistruct_In_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.OnEnd");

	UBP_CE_Tediore_Weapons_Digistruct_In_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.ExecuteUbergraph_BP_CE_Tediore_Weapons_Digistruct_In
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Tediore_Weapons_Digistruct_In_C::ExecuteUbergraph_BP_CE_Tediore_Weapons_Digistruct_In(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Tediore_Weapons_Digistruct_In.BP_CE_Tediore_Weapons_Digistruct_In_C.ExecuteUbergraph_BP_CE_Tediore_Weapons_Digistruct_In");

	UBP_CE_Tediore_Weapons_Digistruct_In_C_ExecuteUbergraph_BP_CE_Tediore_Weapons_Digistruct_In_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
