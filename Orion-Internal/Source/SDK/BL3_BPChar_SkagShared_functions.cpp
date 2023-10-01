// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_GetVariant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_SkagVariants> SkagVariantType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagShared_C::Skag_GetVariant(TEnumAsByte<Enum_SkagVariants>* SkagVariantType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_GetVariant");

	ABPChar_SkagShared_C_Skag_GetVariant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkagVariantType != nullptr)
		*SkagVariantType = params.SkagVariantType;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_GetElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              SkagElement                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagShared_C::Skag_GetElement(EOakElementalType* SkagElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_GetElement");

	ABPChar_SkagShared_C_Skag_GetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkagElement != nullptr)
		*SkagElement = params.SkagElement;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetUIName
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_SetUIName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetUIName");

	ABPChar_SkagShared_C_Skag_SetUIName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.UserConstructionScript");

	ABPChar_SkagShared_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_StolenProjFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_StolenProjFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_StolenProjFinished");

	ABPChar_SkagShared_C_Skag_StolenProjFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Howl_Start
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_Howl_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Howl_Start");

	ABPChar_SkagShared_C_Skag_Howl_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetBadassBombProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_SetBadassBombProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetBadassBombProjectile");

	ABPChar_SkagShared_C_Skag_SetBadassBombProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Howl_Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_Howl_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Howl_Stop");

	ABPChar_SkagShared_C_Skag_Howl_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_How_Interrupted
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_How_Interrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_How_Interrupted");

	ABPChar_SkagShared_C_Skag_How_Interrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetBellyActorSpawnOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnOptionData*        NewBellyActorSpawnOption       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagShared_C::Skag_SetBellyActorSpawnOption(class USpawnOptionData* NewBellyActorSpawnOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetBellyActorSpawnOption");

	ABPChar_SkagShared_C_Skag_SetBellyActorSpawnOption_Params params;
	params.NewBellyActorSpawnOption = NewBellyActorSpawnOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.CE_SkagConfigElementalResist
// (BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::CE_SkagConfigElementalResist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.CE_SkagConfigElementalResist");

	ABPChar_SkagShared_C_CE_SkagConfigElementalResist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForcedTransform              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagShared_C::Skag_Transform(EOakElementalType Element, bool IsForcedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_Transform");

	ABPChar_SkagShared_C_Skag_Transform_Params params;
	params.Element = Element;
	params.IsForcedTransform = IsForcedTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_VomitStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_VomitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_VomitStart");

	ABPChar_SkagShared_C_Skag_VomitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_VomitStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_VomitStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_VomitStop");

	ABPChar_SkagShared_C_Skag_VomitStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_SkagShared_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.ReceiveBeginPlay");

	ABPChar_SkagShared_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetDefaultProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_SetDefaultProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_SetDefaultProjectile");

	ABPChar_SkagShared_C_Skag_SetDefaultProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_ElementalDeath
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Skag_ElementalDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Skag_ElementalDeath");

	ABPChar_SkagShared_C_Skag_ElementalDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagShared_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared");

	ABPChar_SkagShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagShared_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Wwise_Aura_Loop_START
// (BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Wwise_Aura_Loop_START()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Wwise_Aura_Loop_START");

	ABPChar_SkagShared_C_Wwise_Aura_Loop_START_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.Wwise_Aura_Lp_STOP
// (BlueprintCallable, BlueprintEvent)

void ABPChar_SkagShared_C::Wwise_Aura_Lp_STOP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.Wwise_Aura_Lp_STOP");

	ABPChar_SkagShared_C_Wwise_Aura_Lp_STOP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagShared.BPChar_SkagShared_C.ExecuteUbergraph_BPChar_SkagShared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagShared_C::ExecuteUbergraph_BPChar_SkagShared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagShared.BPChar_SkagShared_C.ExecuteUbergraph_BPChar_SkagShared");

	ABPChar_SkagShared_C_ExecuteUbergraph_BPChar_SkagShared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
