// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ExplodingObject_Barrel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.GetPullScale
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ExplodingObject_Barrel_C::GetPullScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.GetPullScale");

	ABP_ExplodingObject_Barrel_C_GetPullScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnRep_bSingularityGrabbed
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_Barrel_C::OnRep_bSingularityGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnRep_bSingularityGrabbed");

	ABP_ExplodingObject_Barrel_C_OnRep_bSingularityGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Setup_ExplodingObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_ExplodingObjectPresentation_C** NewPresentation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMI                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C** NewPresentation, class UMaterialInstanceDynamic** DynamicMI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Setup_ExplodingObject");

	ABP_ExplodingObject_Barrel_C_Setup_ExplodingObject_Params params;
	params.NewPresentation = NewPresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMI != nullptr)
		*DynamicMI = params.DynamicMI;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Barrel_SetupMaterialParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            HighlightColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UTexture*                CompTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                NormalTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::Barrel_SetupMaterialParams(class UMaterialInstanceDynamic* Material, const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, class UTexture* CompTexture, class UTexture* NormalTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Barrel_SetupMaterialParams");

	ABP_ExplodingObject_Barrel_C_Barrel_SetupMaterialParams_Params params;
	params.Material = Material;
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;
	params.CompTexture = CompTexture;
	params.NormalTexture = NormalTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_Barrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.UserConstructionScript");

	ABP_ExplodingObject_Barrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_NPC_Kick_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::SmartObject_NPC_Kick_Begin(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_NPC_Kick_Begin");

	ABP_ExplodingObject_Barrel_C_SmartObject_NPC_Kick_Begin_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_Barrel_GoonInteract_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::SmartObject_Barrel_GoonInteract_Success(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_Barrel_GoonInteract_Success");

	ABP_ExplodingObject_Barrel_C_SmartObject_Barrel_GoonInteract_Success_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerKickBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::PlayerKickBarrel(class ACharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerKickBarrel");

	ABP_ExplodingObject_Barrel_C_PlayerKickBarrel_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerButtSlamBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::PlayerButtSlamBarrel(class ACharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerButtSlamBarrel");

	ABP_ExplodingObject_Barrel_C_PlayerButtSlamBarrel_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerMeleeBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::PlayerMeleeBarrel(class ACharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerMeleeBarrel");

	ABP_ExplodingObject_Barrel_C_PlayerMeleeBarrel_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Damaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::Damaged(class UGbxDamageType** DamageType, class UDamageSource** DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Damaged");

	ABP_ExplodingObject_Barrel_C_Damaged_Params params;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel");

	ABP_ExplodingObject_Barrel_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class USingularityComponent*   SingularityComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::OnSingularityPullBegin(class USingularityComponent* SingularityComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullBegin");

	ABP_ExplodingObject_Barrel_C_OnSingularityPullBegin_Params params;
	params.SingularityComponent = SingularityComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class USingularityComponent*   SingularityComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::OnSingularityPullEnd(class USingularityComponent* SingularityComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullEnd");

	ABP_ExplodingObject_Barrel_C_OnSingularityPullEnd_Params params;
	params.SingularityComponent = SingularityComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Explode_Damage
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_Barrel_C::Explode_Damage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Explode_Damage");

	ABP_ExplodingObject_Barrel_C_Explode_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.IronBearFisted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::IronBearFisted(class ACharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.IronBearFisted");

	ABP_ExplodingObject_Barrel_C_IronBearFisted_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplodingObject_Barrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ReceiveBeginPlay");

	ABP_ExplodingObject_Barrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.DEBUG_PrematureExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_Barrel_C::DEBUG_PrematureExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.DEBUG_PrematureExplosion");

	ABP_ExplodingObject_Barrel_C_DEBUG_PrematureExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ThrowExplodingObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ThrowVector                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               RotatorForSpin                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                OptionalAdditiveVector         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::ThrowExplodingObject(struct FVector* ThrowVector, float* Force, struct FRotator* RotatorForSpin, struct FVector* OptionalAdditiveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ThrowExplodingObject");

	ABP_ExplodingObject_Barrel_C_ThrowExplodingObject_Params params;
	params.ThrowVector = ThrowVector;
	params.Force = Force;
	params.RotatorForSpin = RotatorForSpin;
	params.OptionalAdditiveVector = OptionalAdditiveVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ExecuteUbergraph_BP_ExplodingObject_Barrel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_Barrel_C::ExecuteUbergraph_BP_ExplodingObject_Barrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ExecuteUbergraph_BP_ExplodingObject_Barrel");

	ABP_ExplodingObject_Barrel_C_ExecuteUbergraph_BP_ExplodingObject_Barrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
