// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Vehicle_FunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.TestHijackSide
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Occupant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AttachSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Vehicle_FunctionLibrary_C::STATIC_TestHijackSide(class UObject* Occupant, class UObject* AttachSlot, bool IsRight, class UObject* __WorldContext, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.TestHijackSide");

	UBP_Vehicle_FunctionLibrary_C_TestHijackSide_Params params;
	params.Occupant = Occupant;
	params.AttachSlot = AttachSlot;
	params.IsRight = IsRight;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.SetUseTurretOutOfCombat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Vehicle_FunctionLibrary_C::STATIC_SetUseTurretOutOfCombat(class AActor* Actor, bool Active, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.SetUseTurretOutOfCombat");

	UBP_Vehicle_FunctionLibrary_C_SetUseTurretOutOfCombat_Params params;
	params.Actor = Actor;
	params.Active = Active;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.SetUseTurretInCombat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Vehicle_FunctionLibrary_C::STATIC_SetUseTurretInCombat(class AActor* Actor, bool Active, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.SetUseTurretInCombat");

	UBP_Vehicle_FunctionLibrary_C_SetUseTurretInCombat_Params params;
	params.Actor = Actor;
	params.Active = Active;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.UpdateEBrakeAssist
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakVehicle*             Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWheeledVehicleMovementComponentNW* WheelComponentNW               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          BaseAddedRotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             ebrakeAssistCurve              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxInfluence                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Vehicle_FunctionLibrary_C::STATIC_UpdateEBrakeAssist(class AOakVehicle* Vehicle, class UWheeledVehicleMovementComponentNW* WheelComponentNW, float BaseAddedRotation, class UCurveFloat* ebrakeAssistCurve, float MaxInfluence, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.UpdateEBrakeAssist");

	UBP_Vehicle_FunctionLibrary_C_UpdateEBrakeAssist_Params params;
	params.Vehicle = Vehicle;
	params.WheelComponentNW = WheelComponentNW;
	params.BaseAddedRotation = BaseAddedRotation;
	params.ebrakeAssistCurve = ebrakeAssistCurve;
	params.MaxInfluence = MaxInfluence;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.ApplyMeleeImpulse
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakVehicle*             Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Vehicle_FunctionLibrary_C::STATIC_ApplyMeleeImpulse(class AOakVehicle* Vehicle, float ImpulseStrength, class AController* InstigatedBy, class UDamageSource* DamageSource, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C.ApplyMeleeImpulse");

	UBP_Vehicle_FunctionLibrary_C_ApplyMeleeImpulse_Params params;
	params.Vehicle = Vehicle;
	params.ImpulseStrength = ImpulseStrength;
	params.InstigatedBy = InstigatedBy;
	params.DamageSource = DamageSource;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
