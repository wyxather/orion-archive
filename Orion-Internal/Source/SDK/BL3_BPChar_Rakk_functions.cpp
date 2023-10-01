// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Rakk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Rakk.BPChar_Rakk_C.SetElement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::SetElement(EOakElementalType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.SetElement");

	ABPChar_Rakk_C_SetElement_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.UserConstructionScript");

	ABPChar_Rakk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.OnKilled
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::OnKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.OnKilled");

	ABPChar_Rakk_C_OnKilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.SpreadDamageAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpreadToActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::SpreadDamageAura(class AActor* SpreadToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.SpreadDamageAura");

	ABPChar_Rakk_C_SpreadDamageAura_Params params;
	params.SpreadToActor = SpreadToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.TryChromaticSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::TryChromaticSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.TryChromaticSwitch");

	ABPChar_Rakk_C_TryChromaticSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.ChromaticSwitchWarmup
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::ChromaticSwitchWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.ChromaticSwitchWarmup");

	ABPChar_Rakk_C_ChromaticSwitchWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.ChromaticSwitchCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::ChromaticSwitchCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.ChromaticSwitchCooldown");

	ABPChar_Rakk_C_ChromaticSwitchCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.StartAttackLoopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::StartAttackLoopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.StartAttackLoopAudio");

	ABPChar_Rakk_C_StartAttackLoopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.StopAttackLoopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::StopAttackLoopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.StopAttackLoopAudio");

	ABPChar_Rakk_C_StopAttackLoopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.StartAttackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::StartAttackAction(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.StartAttackAction");

	ABPChar_Rakk_C_StartAttackAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.StopAttackAction
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::StopAttackAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.StopAttackAction");

	ABPChar_Rakk_C_StopAttackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.SetBreathFXSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::SetBreathFXSwitch(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.SetBreathFXSwitch");

	ABPChar_Rakk_C_SetBreathFXSwitch_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk
// (BlueprintEvent)

void ABPChar_Rakk_C::BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk");

	ABPChar_Rakk_C_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Rakk_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.ReceiveBeginPlay");

	ABPChar_Rakk_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk");

	ABPChar_Rakk_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.ImbueWithElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementalType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::ImbueWithElement(EOakElementalType ElementalType, class AActor* Source, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.ImbueWithElement");

	ABPChar_Rakk_C_ImbueWithElement_Params params;
	params.ElementalType = ElementalType;
	params.Source = Source;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.RestoreOriginalElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::RestoreOriginalElement(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.RestoreOriginalElement");

	ABPChar_Rakk_C_RestoreOriginalElement_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.SetDamageAuraActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::SetDamageAuraActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.SetDamageAuraActive");

	ABPChar_Rakk_C_SetDamageAuraActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.ElementTimeout
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Rakk_C::ElementTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.ElementTimeout");

	ABPChar_Rakk_C_ElementTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk");

	ABPChar_Rakk_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Rakk.BPChar_Rakk_C.ExecuteUbergraph_BPChar_Rakk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Rakk_C::ExecuteUbergraph_BPChar_Rakk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Rakk.BPChar_Rakk_C.ExecuteUbergraph_BPChar_Rakk");

	ABPChar_Rakk_C_ExecuteUbergraph_BPChar_Rakk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
