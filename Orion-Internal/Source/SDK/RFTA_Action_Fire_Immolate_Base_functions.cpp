// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Fire_Immolate_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Do Damage
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Fire_Immolate_Base_C::Do_Damage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Do Damage");

	UAction_Fire_Immolate_Base_C_Do_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Clear Visual
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Fire_Immolate_Base_C::Clear_Visual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Clear Visual");

	UAction_Fire_Immolate_Base_C_Clear_Visual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Set Visual
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  VisualID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       AsCharacter_Gunfire            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Immolate_Base_C::Set_Visual(struct FName* VisualID, class ACharacterGunfire** AsCharacter_Gunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Set Visual");

	UAction_Fire_Immolate_Base_C_Set_Visual_Params params;
	params.VisualID = VisualID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Gunfire != nullptr)
		*AsCharacter_Gunfire = params.AsCharacter_Gunfire;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.PlayVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem**        EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Immolate_Base_C::PlayVFX(class UParticleSystem** EmitterTemplate, struct FName* AttachPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.PlayVFX");

	UAction_Fire_Immolate_Base_C_PlayVFX_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachPointName = AttachPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.AllowAction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo*            InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAction_Fire_Immolate_Base_C::AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.AllowAction");

	UAction_Fire_Immolate_Base_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Start Immolate
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FrequencyTimer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Immolate_Base_C::Start_Immolate(float* FrequencyTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Start Immolate");

	UAction_Fire_Immolate_Base_C_Start_Immolate_Params params;
	params.FrequencyTimer = FrequencyTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnDotTimer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Fire_Immolate_Base_C::OnDotTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnDotTimer");

	UAction_Fire_Immolate_Base_C_OnDotTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Fire_Immolate_Base_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnActionStart");

	UAction_Fire_Immolate_Base_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Immolate_Base_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnDead_Event_1");

	UAction_Fire_Immolate_Base_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Fire_Immolate_Base_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnPostComputeStats");

	UAction_Fire_Immolate_Base_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.ExecuteUbergraph_Action_Fire_Immolate_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Fire_Immolate_Base_C::ExecuteUbergraph_Action_Fire_Immolate_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.ExecuteUbergraph_Action_Fire_Immolate_Base");

	UAction_Fire_Immolate_Base_C_ExecuteUbergraph_Action_Fire_Immolate_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
