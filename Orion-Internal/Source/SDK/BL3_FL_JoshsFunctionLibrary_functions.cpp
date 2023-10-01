// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FL_JoshsFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ValidateSpawnPoint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnPointComponent*    PointToValidate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          MaxDropDistance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_ValidateSpawnPoint(class USpawnPointComponent* PointToValidate, float MaxDropDistance, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ValidateSpawnPoint");

	UFL_JoshsFunctionLibrary_C_ValidateSpawnPoint_Params params;
	params.PointToValidate = PointToValidate;
	params.MaxDropDistance = MaxDropDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.AIScriptedLookAtPlayers
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_AIScriptedLookAtPlayers(class AActor* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.AIScriptedLookAtPlayers");

	UFL_JoshsFunctionLibrary_C_AIScriptedLookAtPlayers_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardInt
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardInt(const struct FName& BlackboardKey, class AActor* ControlledActor, int Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardInt");

	UFL_JoshsFunctionLibrary_C_SetBlackboardInt_Params params;
	params.BlackboardKey = BlackboardKey;
	params.ControlledActor = ControlledActor;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardInt
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardInt(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardInt");

	UFL_JoshsFunctionLibrary_C_GetBlackboardInt_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TestHitReaction
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_TestHitReactionType> Hit_Reaction_Type              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_TestHitReactionDirection> Hit_Reaction_Direction         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FForceSelection         Force                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Display_Text                   (Parm, OutParm)

void UFL_JoshsFunctionLibrary_C::STATIC_TestHitReaction(class AActor* Actor, TEnumAsByte<Enum_TestHitReactionType> Hit_Reaction_Type, TEnumAsByte<Enum_TestHitReactionDirection> Hit_Reaction_Direction, const struct FForceSelection& Force, class UObject* __WorldContext, struct FText* Display_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TestHitReaction");

	UFL_JoshsFunctionLibrary_C_TestHitReaction_Params params;
	params.Actor = Actor;
	params.Hit_Reaction_Type = Hit_Reaction_Type;
	params.Hit_Reaction_Direction = Hit_Reaction_Direction;
	params.Force = Force;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Text != nullptr)
		*Display_Text = params.Display_Text;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ThrowLightProjectile
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhoIsThrowing_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  LightProjectileData            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetOverride                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPrediction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AnglePercent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DirectionOffset                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LocalTargetOffset              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            DataFlags                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_ThrowLightProjectile(class AActor* WhoIsThrowing_, class UClass* LightProjectileData, const struct FName& SourceSocket, class AActor* TargetOverride, const struct FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, int DataFlags, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ThrowLightProjectile");

	UFL_JoshsFunctionLibrary_C_ThrowLightProjectile_Params params;
	params.WhoIsThrowing_ = WhoIsThrowing_;
	params.LightProjectileData = LightProjectileData;
	params.SourceSocket = SourceSocket;
	params.TargetOverride = TargetOverride;
	params.TargetSocket = TargetSocket;
	params.MaxPrediction = MaxPrediction;
	params.Speed = Speed;
	params.AnglePercent = AnglePercent;
	params.DirectionOffset = DirectionOffset;
	params.LocalTargetOffset = LocalTargetOffset;
	params.DataFlags = DataFlags;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TransformSplat
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SplatTransform                 (Parm, OutParm, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_TransformSplat(const struct FHitResult& HitResult, class UObject* __WorldContext, struct FTransform* SplatTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.TransformSplat");

	UFL_JoshsFunctionLibrary_C_TransformSplat_Params params;
	params.HitResult = HitResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplatTransform != nullptr)
		*SplatTransform = params.SplatTransform;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GrantSecondWind
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToGrantSecondWindTo       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GrantSecondWind(class AActor* ActorToGrantSecondWindTo, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GrantSecondWind");

	UFL_JoshsFunctionLibrary_C_GrantSecondWind_Params params;
	params.ActorToGrantSecondWindTo = ActorToGrantSecondWindTo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SimpleScreenParticle
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ScreenParticle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowMultipleInstances         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyDrawIfShieldsAreDepleted   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_SimpleScreenParticle(class AActor* Target, class UParticleSystem* ScreenParticle, bool AllowMultipleInstances, bool OnlyDrawIfShieldsAreDepleted, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SimpleScreenParticle");

	UFL_JoshsFunctionLibrary_C_SimpleScreenParticle_Params params;
	params.Target = Target;
	params.ScreenParticle = ScreenParticle;
	params.AllowMultipleInstances = AllowMultipleInstances;
	params.OnlyDrawIfShieldsAreDepleted = OnlyDrawIfShieldsAreDepleted;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetElementalTypeFromWeapon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorWithWeapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakElementalType              WeaponElement                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GetElementalTypeFromWeapon(class AActor* ActorWithWeapon, class UObject* __WorldContext, EOakElementalType* WeaponElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetElementalTypeFromWeapon");

	UFL_JoshsFunctionLibrary_C_GetElementalTypeFromWeapon_Params params;
	params.ActorWithWeapon = ActorWithWeapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponElement != nullptr)
		*WeaponElement = params.WeaponElement;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardObject
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardObject(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, class UObject** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardObject");

	UFL_JoshsFunctionLibrary_C_GetBlackboardObject_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardObject
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardObject(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardObject");

	UFL_JoshsFunctionLibrary_C_SetBlackboardObject_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.Setup for Throw Actor At
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Who_is_Throwing_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetOverride                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetSocket                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_Setup_for_Throw_Actor_At(class APawn* Who_is_Throwing_, class AActor* TargetOverride, const struct FName& TargetSocket, class UObject* __WorldContext, struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.Setup for Throw Actor At");

	UFL_JoshsFunctionLibrary_C_Setup_for_Throw_Actor_At_Params params;
	params.Who_is_Throwing_ = Who_is_Throwing_;
	params.TargetOverride = TargetOverride;
	params.TargetSocket = TargetSocket;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetCurrentTarget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Who_s_Target_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GetCurrentTarget(class APawn* Who_s_Target_, class UObject* __WorldContext, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetCurrentTarget");

	UFL_JoshsFunctionLibrary_C_GetCurrentTarget_Params params;
	params.Who_s_Target_ = Who_s_Target_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardFloat
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardFloat(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardFloat");

	UFL_JoshsFunctionLibrary_C_GetBlackboardFloat_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardBool
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GetBlackboardBool(class AActor* ControlledActor, const struct FName& BlackboardKey, class UObject* __WorldContext, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GetBlackboardBool");

	UFL_JoshsFunctionLibrary_C_GetBlackboardBool_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardFloat
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardFloat(class AActor* ControlledActor, const struct FName& BlackboardKey, float Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardFloat");

	UFL_JoshsFunctionLibrary_C_SetBlackboardFloat_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardBool
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ControlledActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BlackboardKey                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_SetBlackboardBool(class AActor* ControlledActor, const struct FName& BlackboardKey, bool Value, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetBlackboardBool");

	UFL_JoshsFunctionLibrary_C_SetBlackboardBool_Params params;
	params.ControlledActor = ControlledActor;
	params.BlackboardKey = BlackboardKey;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetStance
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOakStanceData*          New_Stance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_SetStance(class AActor* Target, class UOakStanceData* New_Stance, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.SetStance");

	UFL_JoshsFunctionLibrary_C_SetStance_Params params;
	params.Target = Target;
	params.New_Stance = New_Stance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ForciblyResetSpawner
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Kill_Existing_Actors           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_ForciblyResetSpawner(class ASpawner* Spawner, bool Kill_Existing_Actors, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ForciblyResetSpawner");

	UFL_JoshsFunctionLibrary_C_ForciblyResetSpawner_Params params;
	params.Spawner = Spawner;
	params.Kill_Existing_Actors = Kill_Existing_Actors;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ResourceLock
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_ResourceLockType> Lock_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LockState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_ResourceLock(class AActor* Actor, TEnumAsByte<Enum_ResourceLockType> Lock_Type, const struct FName& Reason, bool LockState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.ResourceLock");

	UFL_JoshsFunctionLibrary_C_ResourceLock_Params params;
	params.Actor = Actor;
	params.Lock_Type = Lock_Type;
	params.Reason = Reason;
	params.LockState = LockState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GBXActionVariableSetup
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MySelf                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MyTarget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  MyDamageCausingComponent       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ACharacter*              MyCharacter                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTeam*                   MyTeam                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_JoshsFunctionLibrary_C::STATIC_GBXActionVariableSetup(class AActor* Actor, class UObject* __WorldContext, class AActor** MySelf, class AActor** MyTarget, class UDamageCauserComponent** MyDamageCausingComponent, class ACharacter** MyCharacter, class UTeam** MyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_JoshsFunctionLibrary.FL_JoshsFunctionLibrary_C.GBXActionVariableSetup");

	UFL_JoshsFunctionLibrary_C_GBXActionVariableSetup_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MySelf != nullptr)
		*MySelf = params.MySelf;
	if (MyTarget != nullptr)
		*MyTarget = params.MyTarget;
	if (MyDamageCausingComponent != nullptr)
		*MyDamageCausingComponent = params.MyDamageCausingComponent;
	if (MyCharacter != nullptr)
		*MyCharacter = params.MyCharacter;
	if (MyTeam != nullptr)
		*MyTeam = params.MyTeam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
