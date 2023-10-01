// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_Thug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Cartel_TeleportIn_Thug_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerEnd");

	UBP_CE_Cartel_TeleportIn_Thug_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Cartel_TeleportIn_Thug_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerBegin");

	UBP_CE_Cartel_TeleportIn_Thug_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Cartel_TeleportIn_Thug_C::ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug");

	UBP_CE_Cartel_TeleportIn_Thug_C_ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
