// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Player_Male_AnimsBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.GetTurnSpeedAbs
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCharacter_Player_Male_AnimsBP_C::GetTurnSpeedAbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.GetTurnSpeedAbs");

	UCharacter_Player_Male_AnimsBP_C_GetTurnSpeedAbs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.Get Camera World Rotation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent**        StateCamera                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_Player_Male_AnimsBP_C::Get_Camera_World_Rotation(class USceneComponent** StateCamera, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.Get Camera World Rotation");

	UCharacter_Player_Male_AnimsBP_C_Get_Camera_World_Rotation_Params params;
	params.StateCamera = StateCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Male_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F
// 00007FF6F8B35350
// (BlueprintEvent)

void UCharacter_Player_Male_AnimsBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Male_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Male_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F");

	UCharacter_Player_Male_AnimsBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Male_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.BlueprintUpdateAnimation
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Player_Male_AnimsBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.BlueprintUpdateAnimation");

	UCharacter_Player_Male_AnimsBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.ExecuteUbergraph_Character_Player_Male_AnimsBP
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Player_Male_AnimsBP_C::ExecuteUbergraph_Character_Player_Male_AnimsBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Player_Male_AnimsBP.Character_Player_Male_AnimsBP_C.ExecuteUbergraph_Character_Player_Male_AnimsBP");

	UCharacter_Player_Male_AnimsBP_C_ExecuteUbergraph_Character_Player_Male_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
