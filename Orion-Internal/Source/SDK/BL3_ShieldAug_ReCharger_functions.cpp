// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_ReCharger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnBarrierEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 BarrierActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_ReCharger_C::K2_OnBarrierEnd(class AActor** BarrierActor, class AShield** Shield, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnBarrierEnd");

	UShieldAug_ReCharger_C_K2_OnBarrierEnd_Params params;
	params.BarrierActor = BarrierActor;
	params.Shield = Shield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.RestoreShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShieldAug_ReCharger_C::RestoreShield(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.RestoreShield");

	UShieldAug_ReCharger_C_RestoreShield_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldUnequipped
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter**          Equipper                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_ReCharger_C::K2_OnShieldUnequipped(class AShield** Shield, class AOakCharacter** Equipper, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldUnequipped");

	UShieldAug_ReCharger_C_K2_OnShieldUnequipped_Params params;
	params.Shield = Shield;
	params.Equipper = Equipper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_NativeDelayCallback
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)
// struct FName*                  DelayName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShieldAug_ReCharger_C::K2_NativeDelayCallback(class AShield** Shield, struct FName* DelayName, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_NativeDelayCallback");

	UShieldAug_ReCharger_C_K2_NativeDelayCallback_Params params;
	params.Shield = Shield;
	params.DelayName = DelayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldDepleted
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_ReCharger_C::K2_OnShieldDepleted(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldDepleted");

	UShieldAug_ReCharger_C_K2_OnShieldDepleted_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
