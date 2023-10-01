// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BPAnim_Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FiregripType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ScopeType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ModeType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_BaseWeapon_C::BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BPAnim_Data");

	ABPWeap_BaseWeapon_C_BPAnim_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FiregripType != nullptr)
		*FiregripType = params.FiregripType;
	if (GripType != nullptr)
		*GripType = params.GripType;
	if (ScopeType != nullptr)
		*ScopeType = params.ScopeType;
	if (ModeType != nullptr)
		*ModeType = params.ModeType;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.GetChargePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_BaseWeapon_C::GetChargePercent(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.GetChargePercent");

	ABPWeap_BaseWeapon_C_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.JokeReload
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_BaseWeapon_C::JokeReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.JokeReload");

	ABPWeap_BaseWeapon_C_JokeReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Get IK Offset Data
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DebugSockets                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           First_Person                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WeaponSocket_Left              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WeaponSocket_Right             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              L_IK_Offset                    (Parm, OutParm, IsPlainOldData)
// struct FTransform              R_IK_Offset                    (Parm, OutParm, IsPlainOldData)

void ABPWeap_BaseWeapon_C::Get_IK_Offset_Data(bool DebugSockets, bool First_Person, const struct FName& WeaponSocket_Left, const struct FName& WeaponSocket_Right, struct FTransform* L_IK_Offset, struct FTransform* R_IK_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Get IK Offset Data");

	ABPWeap_BaseWeapon_C_Get_IK_Offset_Data_Params params;
	params.DebugSockets = DebugSockets;
	params.First_Person = First_Person;
	params.WeaponSocket_Left = WeaponSocket_Left;
	params.WeaponSocket_Right = WeaponSocket_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (L_IK_Offset != nullptr)
		*L_IK_Offset = params.L_IK_Offset;
	if (R_IK_Offset != nullptr)
		*R_IK_Offset = params.R_IK_Offset;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BoneRotator_Incremental
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BoneRotationSpeed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentRotation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NewRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CurrentRotator                 (Parm, OutParm, IsPlainOldData)

void ABPWeap_BaseWeapon_C::BoneRotator_Incremental(float Current, float Target, float DeltaTime, float BoneRotationSpeed, float TotalRotation, float* CurrentRotation, float* NewRotation, struct FRotator* CurrentRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.BoneRotator_Incremental");

	ABPWeap_BaseWeapon_C_BoneRotator_Incremental_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.BoneRotationSpeed = BoneRotationSpeed;
	params.TotalRotation = TotalRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentRotation != nullptr)
		*CurrentRotation = params.CurrentRotation;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
	if (CurrentRotator != nullptr)
		*CurrentRotator = params.CurrentRotator;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.UserConstructionScript");

	ABPWeap_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReInitialize
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_BaseWeapon_C::ReInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ReInitialize");

	ABPWeap_BaseWeapon_C_ReInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_BaseWeapon_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.WeaponAttached");

	ABPWeap_BaseWeapon_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_BaseWeapon_C::Notify_ReloadStarted(bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadStarted");

	ABPWeap_BaseWeapon_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_BaseWeapon_C::Notify_ReloadEnded(bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.Notify_ReloadEnded");

	ABPWeap_BaseWeapon_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ExecuteUbergraph_BPWeap_BaseWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_BaseWeapon_C::ExecuteUbergraph_BPWeap_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_BaseWeapon.BPWeap_BaseWeapon_C.ExecuteUbergraph_BPWeap_BaseWeapon");

	ABPWeap_BaseWeapon_C_ExecuteUbergraph_BPWeap_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
