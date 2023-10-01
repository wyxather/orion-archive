#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Vehicle_FunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Vehicle_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Vehicle_FunctionLibrary.BP_Vehicle_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_TestHijackSide(class UObject* Occupant, class UObject* AttachSlot, bool IsRight, class UObject* __WorldContext, bool* Valid);
	void STATIC_SetUseTurretOutOfCombat(class AActor* Actor, bool Active, class UObject* __WorldContext);
	void STATIC_SetUseTurretInCombat(class AActor* Actor, bool Active, class UObject* __WorldContext);
	void STATIC_UpdateEBrakeAssist(class AOakVehicle* Vehicle, class UWheeledVehicleMovementComponentNW* WheelComponentNW, float BaseAddedRotation, class UCurveFloat* ebrakeAssistCurve, float MaxInfluence, class UObject* __WorldContext);
	void STATIC_ApplyMeleeImpulse(class AOakVehicle* Vehicle, float ImpulseStrength, class AController* InstigatedBy, class UDamageSource* DamageSource, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
