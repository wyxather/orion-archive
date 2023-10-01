// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_FunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMinionDamageScalar
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                Minion                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FunctionLibrary_C::STATIC_GetMinionDamageScalar(class UObject** Minion, class UObject** __WorldContext, float* Scalar, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMinionDamageScalar");

	UBP_FunctionLibrary_C_GetMinionDamageScalar_Params params;
	params.Minion = Minion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMinionOwner
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Minion                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_GetMinionOwner(class AActor** Minion, class UObject** __WorldContext, class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMinionOwner");

	UBP_FunctionLibrary_C_GetMinionOwner_Params params;
	params.Minion = Minion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.ApplySoulEmberBuff
// 00007FF6F8B35350
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_ApplySoulEmberBuff(class ACharacterGunfire** Owner, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.ApplySoulEmberBuff");

	UBP_FunctionLibrary_C_ApplySoulEmberBuff_Params params;
	params.Owner = Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMinionDamageMod
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                Minion                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_GetMinionDamageMod(class UObject** Minion, class UObject** __WorldContext, float* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMinionDamageMod");

	UBP_FunctionLibrary_C_GetMinionDamageMod_Params params;
	params.Minion = Minion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMaxSummonsForMod
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Bonus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_GetMaxSummonsForMod(class UClass** Mod, class AActor** Owner, int* Bonus, class UObject** __WorldContext, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.GetMaxSummonsForMod");

	UBP_FunctionLibrary_C_GetMaxSummonsForMod_Params params;
	params.Mod = Mod;
	params.Owner = Owner;
	params.Bonus = Bonus;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.LimitMinions
// 00007FF6F8B35350
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MaxCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      NewMinion                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_LimitMinions(int* MaxCount, class ACharacterGunfire** NewMinion, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.LimitMinions");

	UBP_FunctionLibrary_C_LimitMinions_Params params;
	params.MaxCount = MaxCount;
	params.NewMinion = NewMinion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.ScaleDamage
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_ScaleDamage(float* Damage, int* Level, class UObject** __WorldContext, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.ScaleDamage");

	UBP_FunctionLibrary_C_ScaleDamage_Params params;
	params.Damage = Damage;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.Update Trigger Objects
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Trigger_Objects                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FunctionLibrary_C::STATIC_Update_Trigger_Objects(bool* State, class UObject** __WorldContext, TArray<class AActor*>* Trigger_Objects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.Update Trigger Objects");

	UBP_FunctionLibrary_C_Update_Trigger_Objects_Params params;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trigger_Objects != nullptr)
		*Trigger_Objects = params.Trigger_Objects;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.IsDemoFloor
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_FunctionLibrary_C::STATIC_IsDemoFloor(class UObject** WorldContextObject, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.IsDemoFloor");

	UBP_FunctionLibrary_C_IsDemoFloor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FunctionLibrary.BP_FunctionLibrary_C.IsDemo
// 00007FF6F8B35350
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_FunctionLibrary_C::STATIC_IsDemo(class UObject** WorldContextObject, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FunctionLibrary.BP_FunctionLibrary_C.IsDemo");

	UBP_FunctionLibrary_C_IsDemo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
