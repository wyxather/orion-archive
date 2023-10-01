// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PlayStateEffect_LoadingScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.TickTransition
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayStateComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayStateEffect_LoadingScreen_C::TickTransition(class UPlayStateComponent** Component, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.TickTransition");

	UPlayStateEffect_LoadingScreen_C_TickTransition_Params params;
	params.Component = Component;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.GetEditorLabel
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UPlayStateEffect_LoadingScreen_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.GetEditorLabel");

	UPlayStateEffect_LoadingScreen_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.Apply
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPlayStateComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayStateEffect**       Previous                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayStateEffect_LoadingScreen_C::Apply(class UPlayStateComponent** Component, class UPlayStateEffect** Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.Apply");

	UPlayStateEffect_LoadingScreen_C_Apply_Params params;
	params.Component = Component;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
