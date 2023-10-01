// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_Outrunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.VehicleTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::VehicleTutorial(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.VehicleTutorial");

	AVehicle_Outrunner_C_VehicleTutorial_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.UserConstructionScript");

	AVehicle_Outrunner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp__FinishedFunc
// (BlueprintEvent)

void AVehicle_Outrunner_C::Intensity_Ramp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp__FinishedFunc");

	AVehicle_Outrunner_C_Intensity_Ramp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp__UpdateFunc
// (BlueprintEvent)

void AVehicle_Outrunner_C::Intensity_Ramp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp__UpdateFunc");

	AVehicle_Outrunner_C_Intensity_Ramp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp Down__FinishedFunc
// (BlueprintEvent)

void AVehicle_Outrunner_C::Intensity_Ramp_Down__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp Down__FinishedFunc");

	AVehicle_Outrunner_C_Intensity_Ramp_Down__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp Down__UpdateFunc
// (BlueprintEvent)

void AVehicle_Outrunner_C::Intensity_Ramp_Down__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp Down__UpdateFunc");

	AVehicle_Outrunner_C_Intensity_Ramp_Down__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)

void AVehicle_Outrunner_C::BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)

void AVehicle_Outrunner_C::BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner
// (BlueprintEvent)

void AVehicle_Outrunner_C::BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner");

	AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EVehicleImpactForce            ImpactForce                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical(class AActor* HitActor, const struct FHitResult& Hit, EVehicleImpactForce ImpactForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical_Params params;
	params.HitActor = HitActor;
	params.Hit = Hit;
	params.ImpactForce = ImpactForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)

void AVehicle_Outrunner_C::BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Reset Grinding
// (BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::Reset_Grinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Reset Grinding");

	AVehicle_Outrunner_C_Reset_Grinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)

void AVehicle_Outrunner_C::BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)
// Parameters:
// float                          TimeSpentInAir                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LandAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumWheelsOnGround              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllWheelsLanded               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical(float TimeSpentInAir, float LandAngle, int NumWheelsOnGround, bool bAllWheelsLanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical_Params params;
	params.TimeSpentInAir = TimeSpentInAir;
	params.LandAngle = LandAngle;
	params.NumWheelsOnGround = NumWheelsOnGround;
	params.bAllWheelsLanded = bAllWheelsLanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Try Airborn Callout
// (BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::Try_Airborn_Callout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Try Airborn Callout");

	AVehicle_Outrunner_C_Try_Airborn_Callout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical
// (BlueprintEvent)
// Parameters:
// class UCollisionDamageComponent* Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  ActorHit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactForce                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical(class UCollisionDamageComponent* Component, class AActor* ActorHit, const struct FVector& ImpactForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical_Params params;
	params.Component = Component;
	params.ActorHit = ActorHit;
	params.ImpactForce = ImpactForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHealthType             HealthType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical(const struct FHealthType& HealthType, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical_Params params;
	params.HealthType = HealthType;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHealthType             HealthType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical(const struct FHealthType& HealthType, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical");

	AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical_Params params;
	params.HealthType = HealthType;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveOnPlayerHijacksVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVehicleSeatComponent**  Seat                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AOakCharacter**          Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::ReceiveOnPlayerHijacksVehicle(class UVehicleSeatComponent** Seat, class AOakCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveOnPlayerHijacksVehicle");

	AVehicle_Outrunner_C_ReceiveOnPlayerHijacksVehicle_Params params;
	params.Seat = Seat;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVehicle_Outrunner_C::BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player");

	AVehicle_Outrunner_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Multikill Reset
// (BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::Multikill_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Multikill Reset");

	AVehicle_Outrunner_C_Multikill_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner
// (BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner(class APawn* Pawn, class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner");

	AVehicle_Outrunner_C_BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner
// (BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner(class APawn* Pawn, class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner");

	AVehicle_Outrunner_C_BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Bind Dialog Events
// (BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::Bind_Dialog_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Bind Dialog Events");

	AVehicle_Outrunner_C_Bind_Dialog_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.OnLeapDetachReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::OnLeapDetachReaction(class APawn* Pawn, class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.OnLeapDetachReaction");

	AVehicle_Outrunner_C_OnLeapDetachReaction_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.EnemyHit
// (BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::EnemyHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.EnemyHit");

	AVehicle_Outrunner_C_EnemyHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner");

	AVehicle_Outrunner_C_BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicle_Outrunner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveBeginPlay");

	AVehicle_Outrunner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.K2_InitializeSeats
// (Event, Protected, BlueprintEvent)

void AVehicle_Outrunner_C::K2_InitializeSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.K2_InitializeSeats");

	AVehicle_Outrunner_C_K2_InitializeSeats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceivePossessed");

	AVehicle_Outrunner_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveUnpossessed");

	AVehicle_Outrunner_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Landing Feedback
// (BlueprintCallable, BlueprintEvent)

void AVehicle_Outrunner_C::Landing_Feedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.Landing Feedback");

	AVehicle_Outrunner_C_Landing_Feedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner
// (BlueprintEvent)
// Parameters:
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner(class AController* InstigatedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner");

	AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ExecuteUbergraph_Vehicle_Outrunner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicle_Outrunner_C::ExecuteUbergraph_Vehicle_Outrunner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vehicle_Outrunner.Vehicle_Outrunner_C.ExecuteUbergraph_Vehicle_Outrunner");

	AVehicle_Outrunner_C_ExecuteUbergraph_Vehicle_Outrunner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
