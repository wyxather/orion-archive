// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_EnrageMod1_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.IsLocallyControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CE_EnrageMod1_Player_C::IsLocallyControlled(bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.IsLocallyControlled");

	UBP_CE_EnrageMod1_Player_C_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_EnrageMod1_Player_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnBegin");

	UBP_CE_EnrageMod1_Player_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_EnrageMod1_Player_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnServerBegin");

	UBP_CE_EnrageMod1_Player_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_EnrageMod1_Player_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnEnd");

	UBP_CE_EnrageMod1_Player_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_EnrageMod1_Player_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.OnServerEnd");

	UBP_CE_EnrageMod1_Player_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.ExecuteUbergraph_BP_CE_EnrageMod1_Player
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_EnrageMod1_Player_C::ExecuteUbergraph_BP_CE_EnrageMod1_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C.ExecuteUbergraph_BP_CE_EnrageMod1_Player");

	UBP_CE_EnrageMod1_Player_C_ExecuteUbergraph_BP_CE_EnrageMod1_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
