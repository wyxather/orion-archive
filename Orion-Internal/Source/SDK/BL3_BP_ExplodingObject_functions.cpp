// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ExplodingObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewSimulate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::SetSimulatePhysics(bool bNewSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics");

	ABP_ExplodingObject_C_SetSimulatePhysics_Params params;
	params.bNewSimulate = bNewSimulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged");

	ABP_ExplodingObject_C_Damaged_Params params;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::VisualState_ExplodedStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop");

	ABP_ExplodingObject_C_VisualState_ExplodedStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::VisualState_ExplodedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart");

	ABP_ExplodingObject_C_VisualState_ExplodedStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Enum_ExplodingObjectDamage> DamageType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::Get_DamageType(TEnumAsByte<Enum_ExplodingObjectDamage>* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType");

	ABP_ExplodingObject_C_Get_DamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageType != nullptr)
		*DamageType = params.DamageType;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::VisualState_FuseStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop");

	ABP_ExplodingObject_C_VisualState_FuseStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::VisualState_FuseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart");

	ABP_ExplodingObject_C_VisualState_FuseStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::OnRep_DamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType");

	ABP_ExplodingObject_C_OnRep_DamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ThrowVector                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotatorForSpin                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OptionalAdditiveVector         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ExplodingObject_C::ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject");

	ABP_ExplodingObject_C_ThrowExplodingObject_Params params;
	params.ThrowVector = ThrowVector;
	params.Force = Force;
	params.RotatorForSpin = RotatorForSpin;
	params.OptionalAdditiveVector = OptionalAdditiveVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_ExplodingObjectPresentation_C* NewPresentation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMI                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject");

	ABP_ExplodingObject_C_Setup_ExplodingObject_Params params;
	params.NewPresentation = NewPresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMI != nullptr)
		*DynamicMI = params.DynamicMI;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Setup_RandomizeDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType");

	ABP_ExplodingObject_C_Setup_RandomizeDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript");

	ABP_ExplodingObject_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::BPI_ResetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth");

	ABP_ExplodingObject_C_BPI_ResetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ExplodingObject_C::BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal");

	ABP_ExplodingObject_C_BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::BPI_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode");

	ABP_ExplodingObject_C_BPI_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ThrowVector                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotatorForSpin                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FuseSpeedScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdditiveVector                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ExplodingObject_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow");

	ABP_ExplodingObject_C_BPI_ImpulseThrow_Params params;
	params.ThrowVector = ThrowVector;
	params.Force = Force;
	params.RotatorForSpin = RotatorForSpin;
	params.FuseSpeedScale = FuseSpeedScale;
	params.AdditiveVector = AdditiveVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PhysicsOn_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::BPI_SetSimulatePhysics(bool PhysicsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics");

	ABP_ExplodingObject_C_BPI_SetSimulatePhysics_Params params;
	params.PhysicsOn_ = PhysicsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::BPI_StartFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse");

	ABP_ExplodingObject_C_BPI_StartFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplodingObject_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay");

	ABP_ExplodingObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1");

	ABP_ExplodingObject_C___UserState_ExplodingObjectState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2");

	ABP_ExplodingObject_C___UserState_ExplodingObjectState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3");

	ABP_ExplodingObject_C___UserState_ExplodingObjectState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_4
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_4(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_4");

	ABP_ExplodingObject_C___UserState_ExplodingObjectState_4_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ExplodingObject_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject");

	ABP_ExplodingObject_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Explode_Damage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage");

	ABP_ExplodingObject_C_Explode_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Explode_Puddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle");

	ABP_ExplodingObject_C_Explode_Puddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Explode_Cloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud");

	ABP_ExplodingObject_C_Explode_Cloud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Explode_Loot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot");

	ABP_ExplodingObject_C_Explode_Loot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode");

	ABP_ExplodingObject_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     WakingComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject");

	ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject_Params params;
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject");

	ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled");

	ABP_ExplodingObject_C_BPI_SetNavPainterEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingObject_C::ExecuteUbergraph_BP_ExplodingObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject");

	ABP_ExplodingObject_C_ExecuteUbergraph_BP_ExplodingObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingObject_C::Exploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature");

	ABP_ExplodingObject_C_Exploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
