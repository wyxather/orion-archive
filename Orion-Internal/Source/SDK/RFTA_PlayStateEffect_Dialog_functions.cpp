// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PlayStateEffect_Dialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.TickTransition
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayStateComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayStateEffect_Dialog_C::TickTransition(class UPlayStateComponent** Component, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.TickTransition");

	UPlayStateEffect_Dialog_C_TickTransition_Params params;
	params.Component = Component;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.WasShowingDeathScreen
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayStateEffect_Dialog_C** Previous                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayStateEffect_Dialog_C::WasShowingDeathScreen(class APlayerController** Player, class UPlayStateEffect_Dialog_C** Previous, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.WasShowingDeathScreen");

	UPlayStateEffect_Dialog_C_WasShowingDeathScreen_Params params;
	params.Player = Player;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.Apply
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayStateComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayStateEffect**       Previous                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayStateEffect_Dialog_C::Apply(class UPlayStateComponent** Component, class UPlayStateEffect** Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.Apply");

	UPlayStateEffect_Dialog_C_Apply_Params params;
	params.Component = Component;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.GetEditorLabel
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UPlayStateEffect_Dialog_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.GetEditorLabel");

	UPlayStateEffect_Dialog_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
