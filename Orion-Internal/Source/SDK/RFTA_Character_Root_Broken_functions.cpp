// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Broken.Character_Root_Broken_C.Spawn Splitter
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  NameID                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           SplitAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter_Root_Splitter_C* AsCharacter_Root_Splitter      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::Spawn_Splitter(class UClass** ActorClass, struct FName* NameID, int* SplitAmount, class ACharacter_Root_Splitter_C** AsCharacter_Root_Splitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.Spawn Splitter");

	ACharacter_Root_Broken_C_Spawn_Splitter_Params params;
	params.ActorClass = ActorClass;
	params.NameID = NameID;
	params.SplitAmount = SplitAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Root_Splitter != nullptr)
		*AsCharacter_Root_Splitter = params.AsCharacter_Root_Splitter;
}


// Function Character_Root_Broken.Character_Root_Broken_C.InEventRegion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACharacter_Root_Broken_C::InEventRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.InEventRegion");

	ACharacter_Root_Broken_C_InEventRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_Root_Broken.Character_Root_Broken_C.SplitterKilled
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::SplitterKilled(class ACharacterGunfire** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.SplitterKilled");

	ACharacter_Root_Broken_C_SplitterKilled_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.SplittersDead
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SplittersDead                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Root_Broken_C::SplittersDead(bool* SplittersDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.SplittersDead");

	ACharacter_Root_Broken_C_SplittersDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplittersDead != nullptr)
		*SplittersDead = params.SplittersDead;
}


// Function Character_Root_Broken.Character_Root_Broken_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature");

	ACharacter_Root_Broken_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnEnterDown
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnEnterDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnEnterDown");

	ACharacter_Root_Broken_C_OnEnterDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnExitDown
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnExitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnExitDown");

	ACharacter_Root_Broken_C_OnExitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.SFX_Sprint_On
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::SFX_Sprint_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.SFX_Sprint_On");

	ACharacter_Root_Broken_C_SFX_Sprint_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnDead_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnDead_Event_2");

	ACharacter_Root_Broken_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnSplitRight
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnSplitRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnSplitRight");

	ACharacter_Root_Broken_C_OnSplitRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnRegenerateLeft
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnRegenerateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnRegenerateLeft");

	ACharacter_Root_Broken_C_OnRegenerateLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnRegenerateRight
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnRegenerateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnRegenerateRight");

	ACharacter_Root_Broken_C_OnRegenerateRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnSplitLeft
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnSplitLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnSplitLeft");

	ACharacter_Root_Broken_C_OnSplitLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.OnQuestFailed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::OnQuestFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.OnQuestFailed");

	ACharacter_Root_Broken_C_OnQuestFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.IntroComplete
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Broken_C::IntroComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.IntroComplete");

	ACharacter_Root_Broken_C_IntroComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.SplitterDissolveOut
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDissolveComponent**     DissolveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::SplitterDissolveOut(class UDissolveComponent** DissolveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.SplitterDissolveOut");

	ACharacter_Root_Broken_C_SplitterDissolveOut_Params params;
	params.DissolveComponent = DissolveComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.SplitterSetScale
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        TargetMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::SplitterSetScale(class USceneComponent** TargetMesh, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.SplitterSetScale");

	ACharacter_Root_Broken_C_SplitterSetScale_Params params;
	params.TargetMesh = TargetMesh;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken.Character_Root_Broken_C.ExecuteUbergraph_Character_Root_Broken
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_C::ExecuteUbergraph_Character_Root_Broken(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken.Character_Root_Broken_C.ExecuteUbergraph_Character_Root_Broken");

	ACharacter_Root_Broken_C_ExecuteUbergraph_Character_Root_Broken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
