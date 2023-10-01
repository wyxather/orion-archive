// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_DigiClone_PanicButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.GetAssociatedPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::GetAssociatedPlayer(class AActor* Actor, class AActor** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.GetAssociatedPlayer");

	UBP_CE_DigiClone_PanicButton_C_GetAssociatedPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.ShouldSimulateRelease
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::ShouldSimulateRelease(class AActor* Actor, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.ShouldSimulateRelease");

	UBP_CE_DigiClone_PanicButton_C_ShouldSimulateRelease_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnServerBegin");

	UBP_CE_DigiClone_PanicButton_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnServerEnd");

	UBP_CE_DigiClone_PanicButton_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnEnd");

	UBP_CE_DigiClone_PanicButton_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnBegin");

	UBP_CE_DigiClone_PanicButton_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnShouldSimulateEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_CE_DigiClone_PanicButton_C::OnShouldSimulateEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.OnShouldSimulateEnd");

	UBP_CE_DigiClone_PanicButton_C_OnShouldSimulateEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.ExecuteUbergraph_BP_CE_DigiClone_PanicButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_DigiClone_PanicButton_C::ExecuteUbergraph_BP_CE_DigiClone_PanicButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C.ExecuteUbergraph_BP_CE_DigiClone_PanicButton");

	UBP_CE_DigiClone_PanicButton_C_ExecuteUbergraph_BP_CE_DigiClone_PanicButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
