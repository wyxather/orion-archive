// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxWeapon.Weapon.Unlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::Unlock(bool bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Unlock");

	AWeapon_Unlock_Params params;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.TryAutoReload
// (Final, Native, Protected)

void AWeapon::TryAutoReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.TryAutoReload");

	AWeapon_TryAutoReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ToggleMode
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ToggleMode(unsigned char InputChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ToggleMode");

	AWeapon_ToggleMode_Params params;
	params.InputChannel = InputChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SwitchPendingUseMode
// (Final, Native, Protected, BlueprintCallable)

void AWeapon::SwitchPendingUseMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SwitchPendingUseMode");

	AWeapon_SwitchPendingUseMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SwitchMode
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NextUseModeIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::SwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SwitchMode");

	AWeapon_SwitchMode_Params params;
	params.InputChannel = InputChannel;
	params.NextUseModeIndex = NextUseModeIndex;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopZooming
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSkipTransitions               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearInput                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StopZooming(bool bSkipTransitions, bool bClearInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopZooming");

	AWeapon_StopZooming_Params params;
	params.bSkipTransitions = bSkipTransitions;
	params.bClearInput = bClearInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopWeaponAction
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponActionType> WeaponAction                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StopWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopWeaponAction");

	AWeapon_StopWeaponAction_Params params;
	params.WeaponAction = WeaponAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopUsing
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StopUsing(unsigned char InputChannel, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopUsing");

	AWeapon_StopUsing_Params params;
	params.InputChannel = InputChannel;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopReloading
// (Native, Public, BlueprintCallable)

void AWeapon::StopReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopReloading");

	AWeapon_StopReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopModeSwitch
// (Native, Public, BlueprintCallable)

void AWeapon::StopModeSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopModeSwitch");

	AWeapon_StopModeSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponEffectType> EffectType                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseModeIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StopEffects(TEnumAsByte<EWeaponEffectType> EffectType, unsigned char UseModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopEffects");

	AWeapon_StopEffects_Params params;
	params.EffectType = EffectType;
	params.UseModeIndex = UseModeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopDynamicMaterialEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EffectID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StopDynamicMaterialEffect(int EffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopDynamicMaterialEffect");

	AWeapon_StopDynamicMaterialEffect_Params params;
	params.EffectID = EffectID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StopAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Anim                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StopAnimation(class UAnimMontage* Anim, bool bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StopAnimation");

	AWeapon_StopAnimation_Params params;
	params.Anim = Anim;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StartZooming
// (Native, Public, BlueprintCallable)

void AWeapon::StartZooming()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StartZooming");

	AWeapon_StartZooming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StartUsing
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StartUsing(unsigned char InputChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StartUsing");

	AWeapon_StartUsing_Params params;
	params.InputChannel = InputChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.StartReloading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAuto                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::StartReloading(bool bAuto)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.StartReloading");

	AWeapon_StartReloading_Params params;
	params.bAuto = bAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetTargetLocked
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsLocked                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::SetTargetLocked(bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetTargetLocked");

	AWeapon_SetTargetLocked_Params params;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetPreUseState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  UseModeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::SetPreUseState(unsigned char UseModeIndex, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetPreUseState");

	AWeapon_SetPreUseState_Params params;
	params.UseModeIndex = UseModeIndex;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetMaterialVectorParameterValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ParamValue                     (Parm, IsPlainOldData)

void AWeapon::SetMaterialVectorParameterValue(const struct FName& ParamName, const struct FLinearColor& ParamValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetMaterialVectorParameterValue");

	AWeapon_SetMaterialVectorParameterValue_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetMaterialScalarParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::SetMaterialScalarParameterValue(const struct FName& ParamName, float ParamValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetMaterialScalarParameterValue");

	AWeapon_SetMaterialScalarParameterValue_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetEffectVectorParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ParamValue                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FWeaponEffectQueryData  QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::SetEffectVectorParameter(const struct FName& ParamName, const struct FVector& ParamValue, const struct FWeaponEffectQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectVectorParameter");

	AWeapon_SetEffectVectorParameter_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetEffectMaterialParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ParamValue                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponEffectQueryData  QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::SetEffectMaterialParameter(const struct FName& ParamName, class UMaterialInterface* ParamValue, const struct FWeaponEffectQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectMaterialParameter");

	AWeapon_SetEffectMaterialParameter_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetEffectFloatParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponEffectQueryData  QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::SetEffectFloatParameter(const struct FName& ParamName, float ParamValue, const struct FWeaponEffectQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectFloatParameter");

	AWeapon_SetEffectFloatParameter_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetEffectEmitterState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   EmitterName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponEffectQueryData  QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::SetEffectEmitterState(const struct FName& EmitterName, bool bEnabled, const struct FWeaponEffectQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectEmitterState");

	AWeapon_SetEffectEmitterState_Params params;
	params.EmitterName = EmitterName;
	params.bEnabled = bEnabled;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetEffectColorParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ParamValue                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FWeaponEffectQueryData  QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::SetEffectColorParameter(const struct FName& ParamName, const struct FLinearColor& ParamValue, const struct FWeaponEffectQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetEffectColorParameter");

	AWeapon_SetEffectColorParameter_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.SetBoneVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponAttachmentVisibilityType> AttachmentType                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::SetBoneVisibility(const struct FName& BoneName, bool bVisible, TEnumAsByte<EWeaponAttachmentVisibilityType> AttachmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.SetBoneVisibility");

	AWeapon_SetBoneVisibility_Params params;
	params.BoneName = BoneName;
	params.bVisible = bVisible;
	params.AttachmentType = AttachmentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerUnlock
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AWeapon::ServerUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerUnlock");

	AWeapon_ServerUnlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerSwitchMode
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NextUseModeIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerSwitchMode(unsigned char InputChannel, unsigned char NextUseModeIndex, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerSwitchMode");

	AWeapon_ServerSwitchMode_Params params;
	params.InputChannel = InputChannel;
	params.NextUseModeIndex = NextUseModeIndex;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerStopUsing
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerStopUsing(unsigned char InputChannel, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStopUsing");

	AWeapon_ServerStopUsing_Params params;
	params.InputChannel = InputChannel;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerStopModeSwitch
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientUseModeIndex             (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerStopModeSwitch(unsigned char InputChannel, unsigned char ClientUseModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStopModeSwitch");

	AWeapon_ServerStopModeSwitch_Params params;
	params.InputChannel = InputChannel;
	params.ClientUseModeIndex = ClientUseModeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerStartUsing
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientPatternSeed              (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerStartUsing(unsigned char InputChannel, unsigned char ClientPatternSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStartUsing");

	AWeapon_ServerStartUsing_Params params;
	params.InputChannel = InputChannel;
	params.ClientPatternSeed = ClientPatternSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerStartReloading
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  UseModeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAuto                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerStartReloading(unsigned char UseModeIndex, bool bAuto)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerStartReloading");

	AWeapon_ServerStartReloading_Params params;
	params.UseModeIndex = UseModeIndex;
	params.bAuto = bAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerSetZoomState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  UseModeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponZoomState        NewState                       (ConstParm, Parm, ReferenceParm)
// float                          ZoomStartOffset                (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerSetZoomState(unsigned char UseModeIndex, const struct FWeaponZoomState& NewState, float ZoomStartOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerSetZoomState");

	AWeapon_ServerSetZoomState_Params params;
	params.UseModeIndex = UseModeIndex;
	params.NewState = NewState;
	params.ZoomStartOffset = ZoomStartOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerSetPatternSeed
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  ClientPatternSeed              (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerSetPatternSeed(unsigned char ClientPatternSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerSetPatternSeed");

	AWeapon_ServerSetPatternSeed_Params params;
	params.ClientPatternSeed = ClientPatternSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerRestartAutoUse
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AWeapon::ServerRestartAutoUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerRestartAutoUse");

	AWeapon_ServerRestartAutoUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerLock
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerLock(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerLock");

	AWeapon_ServerLock_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerInterruptReloadToUse
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            ClientLoadedAmmo               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ServerInterruptReloadToUse(int ClientLoadedAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerInterruptReloadToUse");

	AWeapon_ServerInterruptReloadToUse_Params params;
	params.ClientLoadedAmmo = ClientLoadedAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ServerEquipInterruptible
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AWeapon::ServerEquipInterruptible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ServerEquipInterruptible");

	AWeapon_ServerEquipInterruptible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.RegisterTrinketAttachment
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterTrinketAttachmentData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::RegisterTrinketAttachment(const struct FWeaponRegisterTrinketAttachmentData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterTrinketAttachment");

	AWeapon_RegisterTrinketAttachment_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.RegisterSkeletalControl
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterSkeletalControlData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::RegisterSkeletalControl(const struct FWeaponRegisterSkeletalControlData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterSkeletalControl");

	AWeapon_RegisterSkeletalControl_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.RegisterSimpleEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponEffectType> EffectType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Effect                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EffectSocket                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::RegisterSimpleEffect(TEnumAsByte<EWeaponEffectType> EffectType, class UParticleSystem* Effect, const struct FName& EffectSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterSimpleEffect");

	AWeapon_RegisterSimpleEffect_Params params;
	params.EffectType = EffectType;
	params.Effect = Effect;
	params.EffectSocket = EffectSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.RegisterMaterialEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterMaterialEffectData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::RegisterMaterialEffect(const struct FWeaponRegisterMaterialEffectData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterMaterialEffect");

	AWeapon_RegisterMaterialEffect_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.RegisterEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWeaponRegisterAttachmentEffectData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::RegisterEffect(const struct FWeaponRegisterAttachmentEffectData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.RegisterEffect");

	AWeapon_RegisterEffect_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ReevaluateConditionalEffects
// (Final, Native, Public, BlueprintCallable)

void AWeapon::ReevaluateConditionalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ReevaluateConditionalEffects");

	AWeapon_ReevaluateConditionalEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.PrevZoomLevel
// (Native, Public, BlueprintCallable)

void AWeapon::PrevZoomLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PrevZoomLevel");

	AWeapon_PrevZoomLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.PlayEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponEffectType> EffectType                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseModeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            EffectID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::PlayEffects(TEnumAsByte<EWeaponEffectType> EffectType, unsigned char UseModeIndex, int EffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PlayEffects");

	AWeapon_PlayEffects_Params params;
	params.EffectType = EffectType;
	params.UseModeIndex = UseModeIndex;
	params.EffectID = EffectID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.PlayDynamicMaterialEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWeaponMaterialEffectData Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapon::PlayDynamicMaterialEffect(const struct FWeaponMaterialEffectData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PlayDynamicMaterialEffect");

	AWeapon_PlayDynamicMaterialEffect_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.PlayAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Anim                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapon::PlayAnimation(class UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.PlayAnimation");

	AWeapon_PlayAnimation_Params params;
	params.Anim = Anim;
	params.bFirstPerson = bFirstPerson;
	params.PlayRate = PlayRate;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.OnZoomedOut
// (Native, Protected)

void AWeapon::OnZoomedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnZoomedOut");

	AWeapon_OnZoomedOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnUseStarted
// (Native, Protected)

void AWeapon::OnUseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUseStarted");

	AWeapon_OnUseStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnUseFinished
// (Native, Protected)

void AWeapon::OnUseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUseFinished");

	AWeapon_OnUseFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes
// (Final, Native, Protected)

void AWeapon::OnUpdateSkeletalControlsWhenUseFinishes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes");

	AWeapon_OnUpdateSkeletalControlsWhenUseFinishes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed
// (Final, Native, Protected)

void AWeapon::OnUpdateSkeletalControlsWhenUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed");

	AWeapon_OnUpdateSkeletalControlsWhenUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges
// (Final, Native, Protected)

void AWeapon::OnUpdateSkeletalControlsWhenAmmoChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges");

	AWeapon_OnUpdateSkeletalControlsWhenAmmoChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnRep_TargetLockedChanged
// (Final, Native, Protected)

void AWeapon::OnRep_TargetLockedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_TargetLockedChanged");

	AWeapon_OnRep_TargetLockedChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex
// (Final, Native, Protected)

void AWeapon::OnRep_PendingUseModeIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex");

	AWeapon_OnRep_PendingUseModeIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnRep_PendingAttachState
// (Final, Native, Protected)

void AWeapon::OnRep_PendingAttachState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_PendingAttachState");

	AWeapon_OnRep_PendingAttachState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex
// (Final, Native, Protected)
// Parameters:
// unsigned char                  PreviousUseModeIndex           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::OnRep_CurrentUseModeIndex(unsigned char PreviousUseModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex");

	AWeapon_OnRep_CurrentUseModeIndex_Params params;
	params.PreviousUseModeIndex = PreviousUseModeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnReloadEnded
// (Native, Protected)
// Parameters:
// bool                           bCompleted                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::OnReloadEnded(bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnReloadEnded");

	AWeapon_OnReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon
// (Final, Native, Protected)

void AWeapon::OnAmmoGivenToEmptyWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon");

	AWeapon_OnAmmoGivenToEmptyWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.NotifySkeletalControl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponEffectType> ControlType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponSkeletalControlEvent    Event                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          EventValue                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::NotifySkeletalControl(TEnumAsByte<EWeaponEffectType> ControlType, const struct FName& ControlName, EWeaponSkeletalControlEvent Event, float EventValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.NotifySkeletalControl");

	AWeapon_NotifySkeletalControl_Params params;
	params.ControlType = ControlType;
	params.ControlName = ControlName;
	params.Event = Event;
	params.EventValue = EventValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.NextZoomLevel
// (Native, Public, BlueprintCallable)

void AWeapon::NextZoomLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.NextZoomLevel");

	AWeapon_NextZoomLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.Lock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::Lock(float Duration, bool bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Lock");

	AWeapon_Lock_Params params;
	params.Duration = Duration;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.K2_StopWeaponActionObj
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              WeaponAction                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::K2_StopWeaponActionObj(class UGbxAction* WeaponAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.K2_StopWeaponActionObj");

	AWeapon_K2_StopWeaponActionObj_Params params;
	params.WeaponAction = WeaponAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.K2_PlayWeaponActionEx
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponActionType> WeaponAction                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FActionState_Base       ActionParams                   (Parm)
// bool                           bCheckForRelevancy             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* AWeapon::K2_PlayWeaponActionEx(TEnumAsByte<EWeaponActionType> WeaponAction, const struct FActionState_Base& ActionParams, bool bCheckForRelevancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.K2_PlayWeaponActionEx");

	AWeapon_K2_PlayWeaponActionEx_Params params;
	params.WeaponAction = WeaponAction;
	params.ActionParams = ActionParams;
	params.bCheckForRelevancy = bCheckForRelevancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.K2_PlayWeaponAction
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWeaponActionType> WeaponAction                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckForRelevancy             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* AWeapon::K2_PlayWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.K2_PlayWeaponAction");

	AWeapon_K2_PlayWeaponAction_Params params;
	params.WeaponAction = WeaponAction;
	params.PlayRate = PlayRate;
	params.Duration = Duration;
	params.bCheckForRelevancy = bCheckForRelevancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsZoomedIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeTransitions            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsZoomedIn(bool bIncludeTransitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsZoomedIn");

	AWeapon_IsZoomedIn_Params params;
	params.bIncludeTransitions = bIncludeTransitions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsZoomed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsZoomed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsZoomed");

	AWeapon_IsZoomed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsUsing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsUsing");

	AWeapon_IsUsing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsTargetLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsTargetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsTargetLocked");

	AWeapon_IsTargetLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsSwitchingModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsSwitchingModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsSwitchingModes");

	AWeapon_IsSwitchingModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsReloading");

	AWeapon_IsReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsPuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsPuttingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsPuttingDown");

	AWeapon_IsPuttingDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsPendingUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsPendingUse(unsigned char InputChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsPendingUse");

	AWeapon_IsPendingUse_Params params;
	params.InputChannel = InputChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsLocked");

	AWeapon_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsLocalAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsLocalAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsLocalAuthority");

	AWeapon_IsLocalAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsInactive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsInactive");

	AWeapon_IsInactive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsEquipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsEquipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsEquipping");

	AWeapon_IsEquipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsAuthorityUsing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsAuthorityUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityUsing");

	AWeapon_IsAuthorityUsing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsAuthoritySwitchingModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsAuthoritySwitchingModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthoritySwitchingModes");

	AWeapon_IsAuthoritySwitchingModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsAuthorityReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsAuthorityReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityReloading");

	AWeapon_IsAuthorityReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsAuthorityPuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsAuthorityPuttingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityPuttingDown");

	AWeapon_IsAuthorityPuttingDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsAuthorityEquipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsAuthorityEquipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsAuthorityEquipping");

	AWeapon_IsAuthorityEquipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.IsActive");

	AWeapon_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GivenTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::GivenTo(class APawn* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GivenTo");

	AWeapon_GivenTo_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.GetZoomFOVScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapon::GetZoomFOVScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetZoomFOVScale");

	AWeapon_GetZoomFOVScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetZoomEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapon::GetZoomEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetZoomEffect");

	AWeapon_GetZoomEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetZoomDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapon::GetZoomDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetZoomDuration");

	AWeapon_GetZoomDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetUseModeComponentByClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseModeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* AWeapon::GetUseModeComponentByClass(class UClass* ComponentClass, unsigned char UseModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetUseModeComponentByClass");

	AWeapon_GetUseModeComponentByClass_Params params;
	params.ComponentClass = ComponentClass;
	params.UseModeIndex = UseModeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetMuteADSAlpha
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapon::GetMuteADSAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetMuteADSAlpha");

	AWeapon_GetMuteADSAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetMaxZoomFOVScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapon::GetMaxZoomFOVScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetMaxZoomFOVScale");

	AWeapon_GetMaxZoomFOVScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetLastInputChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AWeapon::GetLastInputChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetLastInputChannel");

	AWeapon_GetLastInputChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetCurrentReloadPartType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AWeapon::GetCurrentReloadPartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetCurrentReloadPartType");

	AWeapon_GetCurrentReloadPartType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetAttachmentMesh
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* AWeapon::GetAttachmentMesh(bool bFirstPerson, unsigned char SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetAttachmentMesh");

	AWeapon_GetAttachmentMesh_Params params;
	params.bFirstPerson = bFirstPerson;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReferenceComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* AWeapon::GetAssociatedUseModeComponentByClass(class UClass* ComponentClass, class UActorComponent* ReferenceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass");

	AWeapon_GetAssociatedUseModeComponentByClass_Params params;
	params.ComponentClass = ComponentClass;
	params.ReferenceComponent = ReferenceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.GetAimAssistParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAimAssistParameters*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimAssistParameters* AWeapon::GetAimAssistParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.GetAimAssistParameters");

	AWeapon_GetAimAssistParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.EquipInterruptible
// (Final, Native, Public, BlueprintCallable)

void AWeapon::EquipInterruptible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.EquipInterruptible");

	AWeapon_EquipInterruptible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.Dropped
// (Final, Native, Public, BlueprintCallable)

void AWeapon::Dropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Dropped");

	AWeapon_Dropped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.CycleZoomLevel
// (Native, Public, BlueprintCallable)

void AWeapon::CycleZoomLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.CycleZoomLevel");

	AWeapon_CycleZoomLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ClientUnlock
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AWeapon::ClientUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ClientUnlock");

	AWeapon_ClientUnlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ClientStopReloading
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AWeapon::ClientStopReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ClientStopReloading");

	AWeapon_ClientStopReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.ClientLock
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::ClientLock(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.ClientLock");

	AWeapon_ClientLock_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Weapon.AddUseMode
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWeaponUseComponent*     UseComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UActorComponent*> OtherComponents                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InputChannels                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AWeapon::AddUseMode(class UWeaponUseComponent* UseComponent, TArray<class UActorComponent*> OtherComponents, int InputChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.AddUseMode");

	AWeapon_AddUseMode_Params params;
	params.UseComponent = UseComponent;
	params.OtherComponents = OtherComponents;
	params.InputChannels = InputChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Weapon.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   WeaponOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InSlot                         (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponEquipType               InEquipType                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapon::Activate(class APawn* WeaponOwner, unsigned char InSlot, EWeaponEquipType InEquipType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Weapon.Activate");

	AWeapon_Activate_Params params;
	params.WeaponOwner = WeaponOwner;
	params.InSlot = InSlot;
	params.InEquipType = InEquipType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UWeaponPreUseComponent::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated");

	UWeaponPreUseComponent_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UWeaponPreUseComponent::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated");

	UWeaponPreUseComponent_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponUseComponent.ToggleMode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponUseComponent::ToggleMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.ToggleMode");

	UWeaponUseComponent_ToggleMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode
// (Final, Native, Protected)
// Parameters:
// unsigned char                  ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponUseComponent::SwitchToZoomedMode(unsigned char ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode");

	UWeaponUseComponent_SwitchToZoomedMode_Params params;
	params.ZoomLevel = ZoomLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode
// (Final, Native, Protected)
// Parameters:
// unsigned char                  ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponUseComponent::SwitchFromZoomedMode(unsigned char ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode");

	UWeaponUseComponent_SwitchFromZoomedMode_Params params;
	params.ZoomLevel = ZoomLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponUseComponent.OnPreUseFinished
// (Native, Protected)
// Parameters:
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponUseComponent::OnPreUseFinished(bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.OnPreUseFinished");

	UWeaponUseComponent_OnPreUseFinished_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UWeaponUseComponent::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated");

	UWeaponUseComponent_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponUseComponent.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UWeaponUseComponent::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.K2_OnActivated");

	UWeaponUseComponent_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponUseComponent.CanActivateMode
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponUseComponent::CanActivateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponUseComponent.CanActivateMode");

	UWeaponUseComponent_CanActivateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UWeaponFireComponent::ServerResetFireSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence");

	UWeaponFireComponent_ServerResetFireSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration
// (Event, Protected, BlueprintEvent)

void UWeaponFireComponent::OnStopFireRateDeceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration");

	UWeaponFireComponent_OnStopFireRateDeceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration
// (Event, Protected, BlueprintEvent)

void UWeaponFireComponent::OnStopFireRateAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration");

	UWeaponFireComponent_OnStopFireRateAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration
// (Event, Protected, BlueprintEvent)

void UWeaponFireComponent::OnStartFireRateDeceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration");

	UWeaponFireComponent_OnStartFireRateDeceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration
// (Event, Protected, BlueprintEvent)

void UWeaponFireComponent::OnStartFireRateAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration");

	UWeaponFireComponent_OnStartFireRateAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation
// (Native, Protected)

void UWeaponFireComponent::OnRep_ImpactLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation");

	UWeaponFireComponent_OnRep_ImpactLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount
// (Native, Protected)

void UWeaponFireComponent::OnRep_FlashCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount");

	UWeaponFireComponent_OnRep_FlashCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged
// (Native, Protected)

void UWeaponFireComponent::OnRep_FireRateAccelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged");

	UWeaponFireComponent_OnRep_FireRateAccelChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState
// (Native, Protected)

void UWeaponFireComponent::OnRep_ClientFireSequenceState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState");

	UWeaponFireComponent_OnRep_ClientFireSequenceState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven
// (Native, Protected)

void UWeaponFireComponent::OnReloadAmmoGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven");

	UWeaponFireComponent_OnReloadAmmoGiven_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd
// (Final, Native, Protected)
// Parameters:
// EGbxActionEndState             EndState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponFireComponent::OnLoopingFireActionEnd(EGbxActionEndState EndState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd");

	UWeaponFireComponent_OnLoopingFireActionEnd_Params params;
	params.EndState = EndState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.OnGivenTo
// (Final, Native, Protected)

void UWeaponFireComponent::OnGivenTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.OnGivenTo");

	UWeaponFireComponent_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponFireComponent::IsFireRateAccelEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled");

	UWeaponFireComponent_IsFireRateAccelEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponFireComponent.GetLockedTarget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UWeaponFireComponent::GetLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.GetLockedTarget");

	UWeaponFireComponent_GetLockedTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponFireComponent.GetFireRatePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponFireComponent::GetFireRatePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.GetFireRatePercent");

	UWeaponFireComponent_GetFireRatePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence
// (Net, NetReliable, Native, Event, Protected, NetClient)

void UWeaponFireComponent::ClientStopResetFireSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence");

	UWeaponFireComponent_ClientStopResetFireSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UWeaponFireProjectileComponent::GetShotProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData");

	UWeaponFireProjectileComponent_GetShotProjectileData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UWeaponFireProjectileComponent::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData");

	UWeaponFireProjectileComponent_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.StopBlockingPawns
// (Final, Native, Public, BlueprintCallable)

void AProjectile::StopBlockingPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.StopBlockingPawns");

	AProjectile_StopBlockingPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.SetProjectileDamageType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile::SetProjectileDamageType(class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamageType");

	AProjectile_SetProjectileDamageType_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.SetProjectileDamageSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageSource                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile::SetProjectileDamageSource(class UClass* DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamageSource");

	AProjectile_SetProjectileDamageSource_Params params;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.SetProjectileDamageRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile::SetProjectileDamageRadius(float DamageRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamageRadius");

	AProjectile_SetProjectileDamageRadius_Params params;
	params.DamageRadius = DamageRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.SetProjectileDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile::SetProjectileDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.SetProjectileDamage");

	AProjectile_SetProjectileDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.ResetCollisionWith
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToCollide                 (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile::ResetCollisionWith(class AActor* ActorToCollide)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.ResetCollisionWith");

	AProjectile_ResetCollisionWith_Params params;
	params.ActorToCollide = ActorToCollide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnRep_SpawnModifierType
// (Final, Native, Protected)

void AProjectile::OnRep_SpawnModifierType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnRep_SpawnModifierType");

	AProjectile_OnRep_SpawnModifierType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnLastBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::OnLastBounce(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnLastBounce");

	AProjectile_OnLastBounce_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::OnHitWorld(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitWorld");

	AProjectile_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnHitNeutral
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::OnHitNeutral(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitNeutral");

	AProjectile_OnHitNeutral_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnHitFriendly
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::OnHitFriendly(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitFriendly");

	AProjectile_OnHitFriendly_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::OnHitEnemy(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitEnemy");

	AProjectile_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::OnHitDamagableObject(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnHitDamagableObject");

	AProjectile_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnExplode");

	AProjectile_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnComponentDetachedFromParent
// (Final, Native, Public)
// Parameters:
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectile::OnComponentDetachedFromParent(class USceneComponent* SceneComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnComponentDetachedFromParent");

	AProjectile_OnComponentDetachedFromParent_Params params;
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnBounce
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, IsPlainOldData)

void AProjectile::OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnBounce");

	AProjectile_OnBounce_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.OnBeginExplode
// (Event, Protected, BlueprintEvent)

void AProjectile::OnBeginExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.OnBeginExplode");

	AProjectile_OnBeginExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.IgnoreCollisionWith
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile::IgnoreCollisionWith(class AActor* ActorToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.IgnoreCollisionWith");

	AProjectile_IgnoreCollisionWith_Params params;
	params.ActorToIgnore = ActorToIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.HandleDetachRequest
// (Native, Event, Public, BlueprintEvent)

void AProjectile::HandleDetachRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.HandleDetachRequest");

	AProjectile_HandleDetachRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.GetProjectileMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxProjectileMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxProjectileMovementComponent* AProjectile::GetProjectileMovementComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileMovementComponent");

	AProjectile_GetProjectileMovementComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.GetProjectileDamageType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AProjectile::GetProjectileDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamageType");

	AProjectile_GetProjectileDamageType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.GetProjectileDamageSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AProjectile::GetProjectileDamageSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamageSource");

	AProjectile_GetProjectileDamageSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.GetProjectileDamageRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AProjectile::GetProjectileDamageRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamageRadius");

	AProjectile_GetProjectileDamageRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.GetProjectileDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AProjectile::GetProjectileDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetProjectileDamage");

	AProjectile_GetProjectileDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.GetExplosionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UExplosionComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UExplosionComponent* AProjectile::GetExplosionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.GetExplosionComponent");

	AProjectile_GetExplosionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.Projectile.Explode
// (Native, Public, BlueprintCallable)

void AProjectile::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.Explode");

	AProjectile_Explode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.CheckProjectileAttachment
// (Final, Native, Public)

void AProjectile::CheckProjectileAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.CheckProjectileAttachment");

	AProjectile_CheckProjectileAttachment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.Projectile.BounceDelegate
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile::BounceDelegate(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.Projectile.BounceDelegate");

	AProjectile_BounceDelegate_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InScale                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxProjectileMovementComponent::ScaleVelocity(float InScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity");

	UGbxProjectileMovementComponent_ScaleVelocity_Params params;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity
// (Final, Native, Protected)

void UGbxProjectileMovementComponent::OnRep_InitialProjectileGravity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity");

	UGbxProjectileMovementComponent_OnRep_InitialProjectileGravity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxProjectileMovementComponent::OnProjectilePostLastBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature");

	UGbxProjectileMovementComponent_OnProjectilePostLastBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.GbxProjectileMovementComponent.OnHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxProjectileMovementComponent::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.OnHit");

	UGbxProjectileMovementComponent_OnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.GbxProjectileMovementComponent.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxProjectileMovementComponent::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxProjectileMovementComponent.OnBounce");

	UGbxProjectileMovementComponent_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetClient)
// Parameters:
// int                            ProjSyncID                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       ProjFlags                      (Parm, ZeroConstructor, IsPlainOldData)

void ALightProjectileManager::ServerSendDebugProjectileImpact(int ProjSyncID, class AActor* HitActor, const struct FName& BoneName, uint16_t ProjFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact");

	ALightProjectileManager_ServerSendDebugProjectileImpact_Params params;
	params.ProjSyncID = ProjSyncID;
	params.HitActor = HitActor;
	params.BoneName = BoneName;
	params.ProjFlags = ProjFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALightProjectileManager::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished");

	ALightProjectileManager_OnParticleSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.SetLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewLifetime                    (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile::SetLifetime(float NewLifetime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.SetLifetime");

	ULightProjectile_SetLifetime_Params params;
	params.NewLifetime = NewLifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.SetHomingTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 HomingLocation                 (Parm, IsPlainOldData)

void ULightProjectile::SetHomingTargetLocation(const struct FVector& HomingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.SetHomingTargetLocation");

	ULightProjectile_SetHomingTargetLocation_Params params;
	params.HomingLocation = HomingLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.SetHomingTarget
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  HomingTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOffset                   (Parm, IsPlainOldData)

void ULightProjectile::SetHomingTarget(class AActor* HomingTarget, const struct FVector& TargetOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.SetHomingTarget");

	ULightProjectile_SetHomingTarget_Params params;
	params.HomingTarget = HomingTarget;
	params.TargetOffset = TargetOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile::PlayFeedbackSoundEvent(class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent");

	ULightProjectile_PlayFeedbackSoundEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnRep_Shutdown
// (Final, Native, Protected)

void ULightProjectile::OnRep_Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Shutdown");

	ULightProjectile_OnRep_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnRep_InitialClientState
// (Final, Native, Protected)

void ULightProjectile::OnRep_InitialClientState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_InitialClientState");

	ULightProjectile_OnRep_InitialClientState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnRep_Impact
// (Final, Native, Protected)

void ULightProjectile::OnRep_Impact()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Impact");

	ULightProjectile_OnRep_Impact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnRep_Exploded
// (Final, Native, Protected)

void ULightProjectile::OnRep_Exploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Exploded");

	ULightProjectile_OnRep_Exploded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnRep_Attached
// (Final, Native, Protected)

void ULightProjectile::OnRep_Attached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnRep_Attached");

	ULightProjectile_OnRep_Attached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnParticleSystemFinished
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULightProjectile::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnParticleSystemFinished");

	ULightProjectile_OnParticleSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered
// (Final, Native, Protected)
// Parameters:
// class UActorComponent*         UnregisteredComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULightProjectile::OnAttachedComponentUnregistered(class UActorComponent* UnregisteredComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered");

	ULightProjectile_OnAttachedComponentUnregistered_Params params;
	params.UnregisteredComponent = UnregisteredComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     ChangedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULightProjectile::OnAttachedComponentCollisionChanged(class UPrimitiveComponent* ChangedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged");

	ULightProjectile_OnAttachedComponentCollisionChanged_Params params;
	params.ChangedComponent = ChangedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnAttachedActorFractured
// (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectile::OnAttachedActorFractured(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedActorFractured");

	ULightProjectile_OnAttachedActorFractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed");

	ULightProjectile_OnAttachedActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ImpactDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPenetrated                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanReflect                    (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile::K2_ApplyImpactDamage(const struct FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage");

	ULightProjectile_K2_ApplyImpactDamage_Params params;
	params.Hit = Hit;
	params.ImpactDamage = ImpactDamage;
	params.bPenetrated = bPenetrated;
	params.bCanReflect = bCanReflect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightProjectile::IsHomingMovingDirectlyTowardsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget");

	ULightProjectile_IsHomingMovingDirectlyTowardsTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.IsHoming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightProjectile::IsHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.IsHoming");

	ULightProjectile_IsHoming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.InitChildData
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightProjectileInitializationData InitData                       (Parm, OutParm)

void ULightProjectile::InitChildData(struct FLightProjectileInitializationData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.InitChildData");

	ULightProjectile_InitChildData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function GbxWeapon.LightProjectile.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightProjectile::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetTarget");

	ULightProjectile_GetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightProjectile::GetSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetSource");

	ULightProjectile_GetSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetModifierValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightProjectile::GetModifierValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetModifierValue");

	ULightProjectile_GetModifierValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetModifierType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWeaponShotModifierType        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWeaponShotModifierType ULightProjectile::GetModifierType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetModifierType");

	ULightProjectile_GetModifierType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ULightProjectile::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetInstigator");

	ULightProjectile_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetImpactDataOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UImpactData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UImpactData* ULightProjectile::GetImpactDataOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetImpactDataOverride");

	ULightProjectile_GetImpactDataOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetImpactData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UImpactData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UImpactData* ULightProjectile::GetImpactData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetImpactData");

	ULightProjectile_GetImpactData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetHomingStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightProjectile::GetHomingStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetHomingStartTime");

	ULightProjectile_GetHomingStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetFiringPatternID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ULightProjectile::GetFiringPatternID()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetFiringPatternID");

	ULightProjectile_GetFiringPatternID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetDamageType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxDamageType*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxDamageType* ULightProjectile::GetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetDamageType");

	ULightProjectile_GetDamageType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetDamageCauser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightProjectile::GetDamageCauser()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetDamageCauser");

	ULightProjectile_GetDamageCauser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetAttitudeTowards
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> ULightProjectile::GetAttitudeTowards(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttitudeTowards");

	ULightProjectile_GetAttitudeTowards_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetAttachedImpactNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ULightProjectile::GetAttachedImpactNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttachedImpactNormal");

	ULightProjectile_GetAttachedImpactNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightProjectile::GetAttachedDamageReceiverActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor");

	ULightProjectile_GetAttachedDamageReceiverActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetAttachedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightProjectile::GetAttachedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAttachedActor");

	ULightProjectile_GetAttachedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.GetAssociatedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELightProjectileQueryActorType ActorType                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightProjectile::GetAssociatedActor(ELightProjectileQueryActorType ActorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.GetAssociatedActor");

	ULightProjectile_GetAssociatedActor_Params params;
	params.ActorType = ActorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectile.Explode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile::Explode(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.Explode");

	ULightProjectile_Explode_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.EnableHoming
// (Final, Native, Public, BlueprintCallable)

void ULightProjectile::EnableHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.EnableHoming");

	ULightProjectile_EnableHoming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.DisableHoming
// (Final, Native, Public, BlueprintCallable)

void ULightProjectile::DisableHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.DisableHoming");

	ULightProjectile_DisableHoming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.Destroy
// (Final, Native, Public, BlueprintCallable)

void ULightProjectile::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.Destroy");

	ULightProjectile_Destroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectile.ApplyAreaDamage
// (Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectile::ApplyAreaDamage(const struct FVector& Origin, class AActor* HitActor, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectile.ApplyAreaDamage");

	ULightProjectile_ApplyAreaDamage_Params params;
	params.Origin = Origin;
	params.HitActor = HitActor;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnRicochet
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, IsPlainOldData)

void ULightProjectileData::OnRicochet(class ULightProjectile* Projectile, const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnRicochet");

	ULightProjectileData_OnRicochet_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnProxyImpact
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectileData::OnProxyImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnProxyImpact");

	ULightProjectileData_OnProxyImpact_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnLifetimeExpired
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileData::OnLifetimeExpired(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnLifetimeExpired");

	ULightProjectileData_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnImpact
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectileData::OnImpact(class ULightProjectile* Projectile, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnImpact");

	ULightProjectileData_OnImpact_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnExplode
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileData::OnExplode(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnExplode");

	ULightProjectileData_OnExplode_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnDamage
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bCritical                      (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileData::OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnDamage");

	ULightProjectileData_OnDamage_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.bCritical = bCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnBegin
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileData::OnBegin(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnBegin");

	ULightProjectileData_OnBegin_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.OnAttached
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachedActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileData::OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.OnAttached");

	ULightProjectileData_OnAttached_Params params;
	params.Projectile = Projectile;
	params.AttachedActor = AttachedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileData.GetTimedEventNameList
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           FuncList                       (Parm, OutParm, ZeroConstructor)

void ULightProjectileData::GetTimedEventNameList(TArray<struct FName>* FuncList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileData.GetTimedEventNameList");

	ULightProjectileData_GetTimedEventNameList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FuncList != nullptr)
		*FuncList = params.FuncList;
}


// Function GbxWeapon.LightBeamManager.OnParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* FinishedComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALightBeamManager::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamManager.OnParticleSystemFinished");

	ALightBeamManager_OnParticleSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.SetTargetSocket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)

void ULightBeam::SetTargetSocket(const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.SetTargetSocket");

	ULightBeam_SetTargetSocket_Params params;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULightBeam::OnTrackedImpactParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished");

	ULightBeam_OnTrackedImpactParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.OnRep_ModifierValue
// (Final, Native, Protected)

void ULightBeam::OnRep_ModifierValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnRep_ModifierValue");

	ULightBeam_OnRep_ModifierValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.OnRep_ModifierType
// (Final, Native, Protected)

void ULightBeam::OnRep_ModifierType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnRep_ModifierType");

	ULightBeam_OnRep_ModifierType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.OnRep_ClientState
// (Final, Native, Protected)

void ULightBeam::OnRep_ClientState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.OnRep_ClientState");

	ULightBeam_OnRep_ClientState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.LockOntoTarget
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamAttachment    Target                         (ConstParm, Parm, OutParm, ReferenceParm)

void ULightBeam::LockOntoTarget(const struct FLightBeamAttachment& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.LockOntoTarget");

	ULightBeam_LockOntoTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeam.InitChildData
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightBeamInitializationData InitData                       (Parm, OutParm)

void ULightBeam::InitChildData(struct FLightBeamInitializationData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.InitChildData");

	ULightBeam_InitChildData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function GbxWeapon.LightBeam.GetTargetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightBeam::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetTargetActor");

	ULightBeam_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightBeamAttachment    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FLightBeamAttachment ULightBeam::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetTarget");

	ULightBeam_GetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetSourceActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightBeam::GetSourceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetSourceActor");

	ULightBeam_GetSourceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLightBeamAttachment    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FLightBeamAttachment ULightBeam::GetSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetSource");

	ULightBeam_GetSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ULightBeam::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetInstigator");

	ULightBeam_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetImpactForce
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightBeam::GetImpactForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetImpactForce");

	ULightBeam_GetImpactForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetDamageType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxDamageType*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxDamageType* ULightBeam::GetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetDamageType");

	ULightBeam_GetDamageType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetDamageCauser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightBeam::GetDamageCauser()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetDamageCauser");

	ULightBeam_GetDamageCauser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightBeam::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetDamage");

	ULightBeam_GetDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeam.GetAssociatedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELightBeamQueryActorType       ActorType                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULightBeam::GetAssociatedActor(ELightBeamQueryActorType ActorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeam.GetAssociatedActor");

	ULightBeam_GetAssociatedActor_Params params;
	params.ActorType = ActorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeamData.UpdateTarget
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightBeam*              Beam                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightBeamData::UpdateTarget(class ULightBeam* Beam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamData.UpdateTarget");

	ULightBeamData_UpdateTarget_Params params;
	params.Beam = Beam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeamData.CanLockOn
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULightBeam*              Beam                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightBeamData::CanLockOn(class ULightBeam* Beam, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamData.CanLockOn");

	ULightBeamData_CanLockOn_Params params;
	params.Beam = Beam;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAnimInstance::BlueprintSwitchedMode(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode");

	UWeaponAnimInstance_BlueprintSwitchedMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAmmoComponent::ClientRefillAmmo(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo");

	UWeaponAmmoComponent_ClientRefillAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponHeatComponent::SetCanUseWhenOverheated(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated");

	UWeaponHeatComponent_SetCanUseWhenOverheated_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnUseFinished
// (Native, Protected)

void UWeaponHeatComponent::OnUseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnUseFinished");

	UWeaponHeatComponent_OnUseFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnUsed
// (Native, Protected)

void UWeaponHeatComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnUsed");

	UWeaponHeatComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnStopOverheat
// (Event, Protected, BlueprintEvent)

void UWeaponHeatComponent::OnStopOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnStopOverheat");

	UWeaponHeatComponent_OnStopOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnStartOverheat
// (Event, Protected, BlueprintEvent)

void UWeaponHeatComponent::OnStartOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnStartOverheat");

	UWeaponHeatComponent_OnStartOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat
// (Final, Native, Protected)

void UWeaponHeatComponent::OnRep_ReplicatedHeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat");

	UWeaponHeatComponent_OnRep_ReplicatedHeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated
// (Final, Native, Protected)
// Parameters:
// bool                           bWasOverheated                 (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponHeatComponent::OnRep_Overheated(bool bWasOverheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated");

	UWeaponHeatComponent_OnRep_Overheated_Params params;
	params.bWasOverheated = bWasOverheated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnPutDown
// (Native, Protected)

void UWeaponHeatComponent::OnPutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnPutDown");

	UWeaponHeatComponent_OnPutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnEquipped
// (Native, Protected)

void UWeaponHeatComponent::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnEquipped");

	UWeaponHeatComponent_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnDetached
// (Native, Protected)

void UWeaponHeatComponent::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnDetached");

	UWeaponHeatComponent_OnDetached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponHeatComponent.OnAttached
// (Native, Protected)

void UWeaponHeatComponent::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponHeatComponent.OnAttached");

	UWeaponHeatComponent_OnAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode
// (Native, Protected)

void UWeaponZoomComponent::OnSwitchedWeaponMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode");

	UWeaponZoomComponent_OnSwitchedWeaponMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState
// (Final, Native, Protected)

void UWeaponZoomComponent::OnRep_ReplicatedZoomState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState");

	UWeaponZoomComponent_OnRep_ReplicatedZoomState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponZoomComponent.OnDetached
// (Native, Protected)

void UWeaponZoomComponent::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnDetached");

	UWeaponZoomComponent_OnDetached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponZoomComponent.OnAttached
// (Native, Protected)

void UWeaponZoomComponent::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.OnAttached");

	UWeaponZoomComponent_OnAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ModeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponZoomComponent::GetMaxZoomFOVScaleWithMode(unsigned char ModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode");

	UWeaponZoomComponent_GetMaxZoomFOVScaleWithMode_Params params;
	params.ModeIndex = ModeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponZoomComponent::GetMaxZoomFOVScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale");

	UWeaponZoomComponent_GetMaxZoomFOVScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape
// (Final, Native, Public, BlueprintCallable)

void UGbxTrajectometerComponent::UpdateCollisionShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape");

	UGbxTrajectometerComponent_UpdateCollisionShape_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxTrajectometerComponent::SimulationResultEvent__DelegateSignature(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature");

	UGbxTrajectometerComponent_SimulationResultEvent__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxTrajectometerComponent::SetTrajectometerEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled");

	UGbxTrajectometerComponent_SetTrajectometerEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeamStatics.SetBeamFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamInitializationData InitData                       (Parm, OutParm, ReferenceParm)
// ELightBeamFlag                 Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void ULightBeamStatics::STATIC_SetBeamFlag(ELightBeamFlag Flag, struct FLightBeamInitializationData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.SetBeamFlag");

	ULightBeamStatics_SetBeamFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NameId                         (Parm, ZeroConstructor, IsPlainOldData)

void ULightBeamStatics::STATIC_RemoveLightBeamsBySource(class AActor* Source, const struct FName& NameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource");

	ULightBeamStatics_RemoveLightBeamsBySource_Params params;
	params.Source = Source;
	params.NameId = NameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamQueryData     Query                          (ConstParm, Parm, OutParm, ReferenceParm)

void ULightBeamStatics::STATIC_RemoveLightBeamsByActor(const struct FLightBeamQueryData& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor");

	ULightBeamStatics_RemoveLightBeamsByActor_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeamStatics.IsBeamFlagSet
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightBeamInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)
// ELightBeamFlag                 Flag                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightBeamStatics::STATIC_IsBeamFlagSet(const struct FLightBeamInitializationData& InitData, ELightBeamFlag Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.IsBeamFlagSet");

	ULightBeamStatics_IsBeamFlagSet_Params params;
	params.InitData = InitData;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeamStatics.ForEachLightBeam
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamQueryData     Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightBeamStatics::STATIC_ForEachLightBeam(const struct FLightBeamQueryData& Query, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.ForEachLightBeam");

	ULightBeamStatics_ForEachLightBeam_Params params;
	params.Query = Query;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeamStatics.DoesLightBeamExist
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamQueryData     Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightBeamStatics::STATIC_DoesLightBeamExist(const struct FLightBeamQueryData& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.DoesLightBeamExist");

	ULightBeamStatics_DoesLightBeamExist_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULightBeamStatics::STATIC_CreateLightBeamFromData(const struct FLightBeamInitializationData& InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData");

	ULightBeamStatics_CreateLightBeamFromData_Params params;
	params.InitData = InitData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeamStatics.CreateLightBeam
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Data                           (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLightBeamAttachment    Source                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLightBeamAttachment    Target                         (Parm)
// bool                           bTargetLocked                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NameId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UImpactData*             ImpactDataOverride             (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceSelection         ImpactForce                    (Parm)
// float                          LifetimeOverride               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bViewDependent                 (Parm, ZeroConstructor, IsPlainOldData)

void ULightBeamStatics::STATIC_CreateLightBeam(class UClass* Data, class APawn* Instigator, const struct FLightBeamAttachment& Source, const struct FLightBeamAttachment& Target, bool bTargetLocked, const struct FName& NameId, float Damage, class UClass* DamageType, class UClass* DamageSource, float DamageRadius, class AActor* DamageCauser, class UImpactData* ImpactDataOverride, const struct FForceSelection& ImpactForce, float LifetimeOverride, bool bViewDependent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.CreateLightBeam");

	ULightBeamStatics_CreateLightBeam_Params params;
	params.Data = Data;
	params.Instigator = Instigator;
	params.Source = Source;
	params.Target = Target;
	params.bTargetLocked = bTargetLocked;
	params.NameId = NameId;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamageRadius = DamageRadius;
	params.DamageCauser = DamageCauser;
	params.ImpactDataOverride = ImpactDataOverride;
	params.ImpactForce = ImpactForce;
	params.LifetimeOverride = LifetimeOverride;
	params.bViewDependent = bViewDependent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightBeamStatics.ClearBeamFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightBeamInitializationData InitData                       (Parm, OutParm, ReferenceParm)
// ELightBeamFlag                 Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void ULightBeamStatics::STATIC_ClearBeamFlag(ELightBeamFlag Flag, struct FLightBeamInitializationData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightBeamStatics.ClearBeamFlag");

	ULightBeamStatics_ClearBeamFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function GbxWeapon.LightProjectileStatics.SplitLightProjectile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULightProjectile*        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Data                           (Parm, ZeroConstructor, IsPlainOldData)
// ELightProjectileSplitPattern   Pattern                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpreadAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotateAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroySource                 (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_SplitLightProjectile(class ULightProjectile* Projectile, class UClass* Data, ELightProjectileSplitPattern Pattern, int Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.SplitLightProjectile");

	ULightProjectileStatics_SplitLightProjectile_Params params;
	params.Projectile = Projectile;
	params.Data = Data;
	params.Pattern = Pattern;
	params.Count = Count;
	params.SpreadAngle = SpreadAngle;
	params.RotateAngle = RotateAngle;
	params.OffsetDistance = OffsetDistance;
	params.bDestroySource = bDestroySource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.SetProjectileFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationData InitData                       (Parm, OutParm, ReferenceParm)
// ELightProjectileFlag           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_SetProjectileFlag(ELightProjectileFlag Flag, struct FLightProjectileInitializationData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.SetProjectileFlag");

	ULightProjectileStatics_SetProjectileFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function GbxWeapon.LightProjectileStatics.SetHomingState
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsHoming                      (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_SetHomingState(const struct FLightProjectileQueryData& Query, bool bIsHoming)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.SetHomingState");

	ULightProjectileStatics_SetHomingState_Params params;
	params.Query = Query;
	params.bIsHoming = bIsHoming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData Query                          (ConstParm, Parm, OutParm, ReferenceParm)

void ULightProjectileStatics::STATIC_RemoveLightProjectilesByActor(const struct FLightProjectileQueryData& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor");

	ULightProjectileStatics_RemoveLightProjectilesByActor_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightProjectileInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)
// ELightProjectileFlag           Flag                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULightProjectileStatics::STATIC_IsProjectileFlagSet(const struct FLightProjectileInitializationData& InitData, ELightProjectileFlag Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet");

	ULightProjectileStatics_IsProjectileFlagSet_Params params;
	params.InitData = InitData;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightProjectileStatics::STATIC_ForEachLightProjectile(const struct FLightProjectileQueryData& Query, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile");

	ULightProjectileStatics_ForEachLightProjectile_Params params;
	params.Query = Query;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileQueryData Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          StackingEnemyBonusDamage       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinDetonationDelay             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDetonationDelay             (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_DetonateLightProjectiles(const struct FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles");

	ULightProjectileStatics_DetonateLightProjectiles_Params params;
	params.Query = Query;
	params.StackingEnemyBonusDamage = StackingEnemyBonusDamage;
	params.MinDetonationDelay = MinDetonationDelay;
	params.MaxDetonationDelay = MaxDetonationDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULightProjectile*        SourceProjectile               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Data                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_CreateLightProjectileFromSource(class ULightProjectile* SourceProjectile, class UClass* Data, const struct FVector& Location, const struct FVector& Direction, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource");

	ULightProjectileStatics_CreateLightProjectileFromSource_Params params;
	params.SourceProjectile = SourceProjectile;
	params.Data = Data;
	params.Location = Location;
	params.Direction = Direction;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ForceSpawnTimer                (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_CreateLightProjectileFromDataAsync(const struct FLightProjectileInitializationData& InitData, float ForceSpawnTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync");

	ULightProjectileStatics_CreateLightProjectileFromDataAsync_Params params;
	params.InitData = InitData;
	params.ForceSpawnTimer = ForceSpawnTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULightProjectileStatics::STATIC_CreateLightProjectileFromData(const struct FLightProjectileInitializationData& InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData");

	ULightProjectileStatics_CreateLightProjectileFromData_Params params;
	params.InitData = InitData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.CreateLightProjectile
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  Data                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (Parm, ZeroConstructor, IsPlainOldData)
// class UImpactData*             ImpactDataOverride             (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_CreateLightProjectile(class UClass* Data, const struct FVector& Location, const struct FVector& Direction, class APawn* Instigator, class AActor* Source, class AActor* DamageCauser, float Damage, class UClass* DamageType, class UClass* DamageSource, class UImpactData* ImpactDataOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.CreateLightProjectile");

	ULightProjectileStatics_CreateLightProjectile_Params params;
	params.Data = Data;
	params.Location = Location;
	params.Direction = Direction;
	params.Instigator = Instigator;
	params.Source = Source;
	params.DamageCauser = DamageCauser;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.ImpactDataOverride = ImpactDataOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLightProjectileInitializationData InitData                       (Parm, OutParm, ReferenceParm)
// ELightProjectileFlag           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectileStatics::STATIC_ClearProjectileFlag(ELightProjectileFlag Flag, struct FLightProjectileInitializationData* InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag");

	ULightProjectileStatics_ClearProjectileFlag_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitData != nullptr)
		*InitData = params.InitData;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FThrowProjectileAsyncRequest Request                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UProjectileBlueprintLibrary::STATIC_ThrowProjectileAsync(class UObject* WorldContext, const struct FThrowProjectileAsyncRequest& Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync");

	UProjectileBlueprintLibrary_ThrowProjectileAsync_Params params;
	params.WorldContext = WorldContext;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, IsPlainOldData)
// float                          MaxPrediction                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnglePercent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DirectionOffset                (Parm, IsPlainOldData)
// struct FVector                 LocalTargetOffset              (Parm, IsPlainOldData)

void UProjectileBlueprintLibrary::STATIC_ThrowActorAt(class AActor* Actor, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt");

	UProjectileBlueprintLibrary_ThrowActorAt_Params params;
	params.Actor = Actor;
	params.TargetLocation = TargetLocation;
	params.TargetVelocity = TargetVelocity;
	params.MaxPrediction = MaxPrediction;
	params.Speed = Speed;
	params.AnglePercent = AnglePercent;
	params.DirectionOffset = DirectionOffset;
	params.LocalTargetOffset = LocalTargetOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPredictProjectilePathAsyncRequest Request                        (ConstParm, Parm, OutParm, ReferenceParm)

void UProjectileBlueprintLibrary::STATIC_PredictProjectilePathAsync(class UObject* WorldContext, const struct FPredictProjectilePathAsyncRequest& Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync");

	UProjectileBlueprintLibrary_PredictProjectilePathAsync_Params params;
	params.WorldContext = WorldContext;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SourceComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UProjectileBlueprintLibrary::STATIC_GetSafeProjectileThrowTransform_Component(class AActor* SourceActor, class USceneComponent* SourceComponent, const struct FName& SocketName, TArray<class AActor*> IgnoreActors, TEnumAsByte<ECollisionChannel> TraceChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component");

	UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Component_Params params;
	params.SourceActor = SourceActor;
	params.SourceComponent = SourceComponent;
	params.SocketName = SocketName;
	params.IgnoreActors = IgnoreActors;
	params.TraceChannel = TraceChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bThrowFromFirstPersonSocket    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UProjectileBlueprintLibrary::STATIC_GetSafeProjectileThrowTransform(class AActor* SourceActor, const struct FName& SocketName, TArray<class AActor*> IgnoreActors, bool bThrowFromFirstPersonSocket, TEnumAsByte<ECollisionChannel> TraceChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform");

	UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Params params;
	params.SourceActor = SourceActor;
	params.SocketName = SocketName;
	params.IgnoreActors = IgnoreActors;
	params.bThrowFromFirstPersonSocket = bThrowFromFirstPersonSocket;
	params.TraceChannel = TraceChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// int                            SampleCount                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpreadAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotateAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTransform> UProjectileBlueprintLibrary::STATIC_GeneratePointsOnFan(const struct FVector& Origin, const struct FVector& Direction, int SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan");

	UProjectileBlueprintLibrary_GeneratePointsOnFan_Params params;
	params.Origin = Origin;
	params.Direction = Direction;
	params.SampleCount = SampleCount;
	params.SpreadAngle = SpreadAngle;
	params.RotateAngle = RotateAngle;
	params.OriginOffset = OriginOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// int                            SampleCount                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpreadAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotateAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTransform> UProjectileBlueprintLibrary::STATIC_GeneratePointsOnCone(const struct FVector& Origin, const struct FVector& Direction, int SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone");

	UProjectileBlueprintLibrary_GeneratePointsOnCone_Params params;
	params.Origin = Origin;
	params.Direction = Direction;
	params.SampleCount = SampleCount;
	params.SpreadAngle = SpreadAngle;
	params.RotateAngle = RotateAngle;
	params.OriginOffset = OriginOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  BaseActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UProjectileBlueprintLibrary::STATIC_DetachProjectilesFromActor(class AActor* BaseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor");

	UProjectileBlueprintLibrary_DetachProjectilesFromActor_Params params;
	params.BaseActor = BaseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Fraction                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          AngleWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UProjectileBlueprintLibrary::STATIC_CalculateConeVector(float Fraction, const struct FVector& Origin, const struct FVector& Direction, float AngleWidth, float AngleHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector");

	UProjectileBlueprintLibrary_CalculateConeVector_Params params;
	params.Fraction = Fraction;
	params.Origin = Origin;
	params.Direction = Direction;
	params.AngleWidth = AngleWidth;
	params.AngleHeight = AngleHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ResultVelocity                 (Parm, OutParm, IsPlainOldData)
// float                          ResultGravityScale             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPrediction                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnglePercent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DirectionOffset                (Parm, IsPlainOldData)
// struct FVector                 LocalTargetOffset              (Parm, IsPlainOldData)

void UProjectileBlueprintLibrary::STATIC_CalcThrowVelocityAtActor(const struct FVector& StartLocation, class AActor* Target, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, struct FVector* ResultVelocity, float* ResultGravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor");

	UProjectileBlueprintLibrary_CalcThrowVelocityAtActor_Params params;
	params.StartLocation = StartLocation;
	params.Target = Target;
	params.MaxPrediction = MaxPrediction;
	params.Speed = Speed;
	params.AnglePercent = AnglePercent;
	params.DirectionOffset = DirectionOffset;
	params.LocalTargetOffset = LocalTargetOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultVelocity != nullptr)
		*ResultVelocity = params.ResultVelocity;
	if (ResultGravityScale != nullptr)
		*ResultGravityScale = params.ResultGravityScale;
}


// Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultVelocity                 (Parm, OutParm, IsPlainOldData)
// float                          ResultGravityScale             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, IsPlainOldData)
// float                          MaxPrediction                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnglePercent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DirectionOffset                (Parm, IsPlainOldData)
// struct FVector                 LocalTargetOffset              (Parm, IsPlainOldData)

void UProjectileBlueprintLibrary::STATIC_CalcThrowVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset, struct FVector* ResultVelocity, float* ResultGravityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity");

	UProjectileBlueprintLibrary_CalcThrowVelocity_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StartLocation = StartLocation;
	params.TargetLocation = TargetLocation;
	params.TargetVelocity = TargetVelocity;
	params.MaxPrediction = MaxPrediction;
	params.Speed = Speed;
	params.AnglePercent = AnglePercent;
	params.DirectionOffset = DirectionOffset;
	params.LocalTargetOffset = LocalTargetOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultVelocity != nullptr)
		*ResultVelocity = params.ResultVelocity;
	if (ResultGravityScale != nullptr)
		*ResultGravityScale = params.ResultGravityScale;
}


// Function GbxWeapon.RecoilControlComponent.ServerApplyInput
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint32_t                       CompressedInputRot             (Parm, ZeroConstructor, IsPlainOldData)

void URecoilControlComponent::ServerApplyInput(uint32_t CompressedInputRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.RecoilControlComponent.ServerApplyInput");

	URecoilControlComponent_ServerApplyInput_Params params;
	params.CompressedInputRot = CompressedInputRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UWeaponAmmoPoolComponent::ServerSendAmmoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState");

	UWeaponAmmoPoolComponent_ServerSendAmmoState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo
// (Final, Native, Public)

void UWeaponAmmoPoolComponent::OnRep_SpareAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo");

	UWeaponAmmoPoolComponent_OnRep_SpareAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo
// (Final, Native, Protected)

void UWeaponAmmoPoolComponent::OnRep_ServerSyncedLoadedAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo");

	UWeaponAmmoPoolComponent_OnRep_ServerSyncedLoadedAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged
// (Final, Native, Protected)
// Parameters:
// float                          OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAmmoPoolComponent::OnMaxLoadedAmmoChanged(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged");

	UWeaponAmmoPoolComponent_OnMaxLoadedAmmoChanged_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo
// (Final, Native, Public)

void UWeaponAmmoPoolComponent::OnGivenTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo");

	UWeaponAmmoPoolComponent_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            NewLoadedAmmo                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAmmoPoolComponent::ClientSetLoadedAmmo(int NewLoadedAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo");

	UWeaponAmmoPoolComponent_ClientSetLoadedAmmo_Params params;
	params.NewLoadedAmmo = NewLoadedAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponAmmoPoolComponent::ClientConsumeAmmo(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo");

	UWeaponAmmoPoolComponent_ClientConsumeAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponAttachmentSlot.SetMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          InMesh                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWeaponAttachmentSlot::SetMesh(class UMeshComponent* InMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponAttachmentSlot.SetMesh");

	UWeaponAttachmentSlot_SetMesh_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.StopEffects
// (Native, Event, Protected, BlueprintEvent)

void UWeaponChargeComponent::StopEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.StopEffects");

	UWeaponChargeComponent_StopEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.Overcharged
// (Native, Protected)

void UWeaponChargeComponent::Overcharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.Overcharged");

	UWeaponChargeComponent_Overcharged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState
// (Final, Native, Protected)
// Parameters:
// EWeaponChargeState             PrevChargeState                (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponChargeComponent::OnRep_ChargeState(EWeaponChargeState PrevChargeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState");

	UWeaponChargeComponent_OnRep_ChargeState_Params params;
	params.PrevChargeState = PrevChargeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd
// (Final, Native, Protected)
// Parameters:
// EGbxActionEndState             EndState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponChargeComponent::OnChargeActionEnd(EGbxActionEndState EndState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd");

	UWeaponChargeComponent_OnChargeActionEnd_Params params;
	params.EndState = EndState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponChargeComponent::GetDischargeDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration");

	UWeaponChargeComponent_GetDischargeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponChargeComponent.GetChargePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponChargeComponent::GetChargePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.GetChargePercent");

	UWeaponChargeComponent_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponChargeComponent.GetChargeDuration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponChargeComponent::GetChargeDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.GetChargeDuration");

	UWeaponChargeComponent_GetChargeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponChargeComponent.FullyDischarged
// (Native, Protected)

void UWeaponChargeComponent::FullyDischarged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.FullyDischarged");

	UWeaponChargeComponent_FullyDischarged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.FullyCharged
// (Native, Protected)

void UWeaponChargeComponent::FullyCharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.FullyCharged");

	UWeaponChargeComponent_FullyCharged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished
// (Final, Native, Protected)

void UWeaponChargeComponent::DelayChargeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished");

	UWeaponChargeComponent_DelayChargeFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState
// (Final, Native, Private)

void UWeaponClipReloadComponent::OnRep_ClientReloadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState");

	UWeaponClipReloadComponent_OnRep_ClientReloadState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UWeaponFireBeamComponent::GetShotLightBeamData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData");

	UWeaponFireBeamComponent_GetShotLightBeamData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponRecoilComponent.OnUsed
// (Native, Protected)

void UWeaponRecoilComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilComponent.OnUsed");

	UWeaponRecoilComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponRecoilComponent.OnDetached
// (Native, Protected)

void UWeaponRecoilComponent::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilComponent.OnDetached");

	UWeaponRecoilComponent_OnDetached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponRecoilComponent.OnAttached
// (Native, Protected)

void UWeaponRecoilComponent::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilComponent.OnAttached");

	UWeaponRecoilComponent_OnAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern
// (Final, Native, Protected)

void UWeaponRecoilPatternComponent::ResetPattern()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern");

	UWeaponRecoilPatternComponent_ResetPattern_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished
// (Final, Native, Protected)

void UWeaponRecoilPatternComponent::OnUseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished");

	UWeaponRecoilPatternComponent_OnUseFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponRecoilPatternComponent::GetRecoilPatternWidthGoodness()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness");

	UWeaponRecoilPatternComponent_GetRecoilPatternWidthGoodness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponRecoilPatternComponent::GetRecoilPatternHeightGoodness()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness");

	UWeaponRecoilPatternComponent_GetRecoilPatternHeightGoodness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponRecoilPatternComponent::GetRecoilPatternGoodness()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness");

	UWeaponRecoilPatternComponent_GetRecoilPatternGoodness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput
// (Final, Native, Protected)
// Parameters:
// unsigned char                  InputChannel                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSingleFeedReloadComponent::OnUserInput(unsigned char InputChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput");

	UWeaponSingleFeedReloadComponent_OnUserInput_Params params;
	params.InputChannel = InputChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState
// (Final, Native, Private)

void UWeaponSingleFeedReloadComponent::OnRep_ClientReloadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState");

	UWeaponSingleFeedReloadComponent_OnRep_ClientReloadState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_UpdateVisibleAmmo(class AWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo");

	UWeaponStatics_UpdateVisibleAmmo_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.UnhideWeapons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  WeaponUser                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_UnhideWeapons(class AActor* WeaponUser, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.UnhideWeapons");

	UWeaponStatics_UnhideWeapons_Params params;
	params.WeaponUser = WeaponUser;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.UnhideWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  WeaponUser                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_UnhideWeapon(class AActor* WeaponUser, unsigned char Slot, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.UnhideWeapon");

	UWeaponStatics_UnhideWeapon_Params params;
	params.WeaponUser = WeaponUser;
	params.Slot = Slot;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponVisibleAmmoUpdateMethod NewUpdateMethod                (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_SetVisibleAmmoUpdateMethod(class AWeapon* Weapon, EWeaponVisibleAmmoUpdateMethod NewUpdateMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod");

	UWeaponStatics_SetVisibleAmmoUpdateMethod_Params params;
	params.Weapon = Weapon;
	params.NewUpdateMethod = NewUpdateMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.SetVisibleAmmoState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponVisibleAmmoState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_SetVisibleAmmoState(class AWeapon* Weapon, EWeaponVisibleAmmoState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.SetVisibleAmmoState");

	UWeaponStatics_SetVisibleAmmoState_Params params;
	params.Weapon = Weapon;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_ResetVisibleAmmoState(class AWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState");

	UWeaponStatics_ResetVisibleAmmoState_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.RefillAmmo
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsPercent                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_RefillAmmo(class AWeapon* Weapon, int Amount, bool bAsPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.RefillAmmo");

	UWeaponStatics_RefillAmmo_Params params;
	params.Weapon = Weapon;
	params.Amount = Amount;
	params.bAsPercent = bAsPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponActionType> WeaponAction                   (Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FActionState_Base       ActionParams                   (Parm)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UWeaponStatics::STATIC_K2_PlayWeaponHoldActionEx(class AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, class AWeapon* Weapon, const struct FActionState_Base& ActionParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx");

	UWeaponStatics_K2_PlayWeaponHoldActionEx_Params params;
	params.Actor = Actor;
	params.WeaponAction = WeaponAction;
	params.Weapon = Weapon;
	params.ActionParams = ActionParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponActionType> WeaponAction                   (Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UWeaponStatics::STATIC_K2_PlayWeaponHoldAction(class AActor* Actor, TEnumAsByte<EWeaponActionType> WeaponAction, class AWeapon* Weapon, float PlayRate, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction");

	UWeaponStatics_K2_PlayWeaponHoldAction_Params params;
	params.Actor = Actor;
	params.WeaponAction = WeaponAction;
	params.Weapon = Weapon;
	params.PlayRate = PlayRate;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.HideWeapons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  WeaponUser                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_HideWeapons(class AActor* WeaponUser, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.HideWeapons");

	UWeaponStatics_HideWeapons_Params params;
	params.WeaponUser = WeaponUser;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.HideWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  WeaponUser                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_HideWeapon(class AActor* WeaponUser, unsigned char Slot, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.HideWeapon");

	UWeaponStatics_HideWeapon_Params params;
	params.WeaponUser = WeaponUser;
	params.Slot = Slot;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.GiveAmmo
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoaded                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsPercent                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponStatics::STATIC_GiveAmmo(class AWeapon* Weapon, int Amount, bool bLoaded, bool bAsPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GiveAmmo");

	UWeaponStatics_GiveAmmo_Params params;
	params.Weapon = Weapon;
	params.Amount = Amount;
	params.bLoaded = bLoaded;
	params.bAsPercent = bAsPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponStatics.GetWeapon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeapon* UWeaponStatics::STATIC_GetWeapon(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetWeapon");

	UWeaponStatics_GetWeapon_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseMode                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponStatics::STATIC_GetMaxZoomFOVScale(class AWeapon* Weapon, unsigned char UseMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale");

	UWeaponStatics_GetMaxZoomFOVScale_Params params;
	params.Weapon = Weapon;
	params.UseMode = UseMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.GetLoadedAmmo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseMode                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWeaponStatics::STATIC_GetLoadedAmmo(class AWeapon* Weapon, unsigned char UseMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetLoadedAmmo");

	UWeaponStatics_GetLoadedAmmo_Params params;
	params.Weapon = Weapon;
	params.UseMode = UseMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseMode                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponStatics::STATIC_GetFireRateAccelPercent(class AWeapon* Weapon, unsigned char UseMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent");

	UWeaponStatics_GetFireRateAccelPercent_Params params;
	params.Weapon = Weapon;
	params.UseMode = UseMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.GetFireRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseMode                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponStatics::STATIC_GetFireRate(class AWeapon* Weapon, unsigned char UseMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetFireRate");

	UWeaponStatics_GetFireRate_Params params;
	params.Weapon = Weapon;
	params.UseMode = UseMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.GetDamageType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWeapon*                 Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  UseMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxDamageType* UWeaponStatics::STATIC_GetDamageType(class AWeapon* Weapon, unsigned char UseMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.GetDamageType");

	UWeaponStatics_GetDamageType_Params params;
	params.Weapon = Weapon;
	params.UseMode = UseMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// class AActor*                  ReferenceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// class UProjectileEQSProxy*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UProjectileEQSProxy* UWeaponStatics::STATIC_CreateProjectileEQSProxy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* ReferenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy");

	UWeaponStatics_CreateProjectileEQSProxy_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.ReferenceActor = ReferenceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponVisibleAmmoComponent::UpdateBoneVisibility(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility");

	UWeaponVisibleAmmoComponent_UpdateBoneVisibility_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EWeaponVisibleAmmoUpdateMethod NewUpdateMethod                (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponVisibleAmmoComponent::SetVisibleAmmoUpdateMethod(EWeaponVisibleAmmoUpdateMethod NewUpdateMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod");

	UWeaponVisibleAmmoComponent_SetVisibleAmmoUpdateMethod_Params params;
	params.NewUpdateMethod = NewUpdateMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EWeaponVisibleAmmoState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponVisibleAmmoComponent::SetVisibleAmmoState(EWeaponVisibleAmmoState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState");

	UWeaponVisibleAmmoComponent_SetVisibleAmmoState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState
// (Final, Native, Public, BlueprintCallable)

void UWeaponVisibleAmmoComponent::ResetVisibleAmmoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState");

	UWeaponVisibleAmmoComponent_ResetVisibleAmmoState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount
// (Final, Native, Protected)

void UWeaponVisibleAmmoComponent::OnRep_ServerAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount");

	UWeaponVisibleAmmoComponent_OnRep_ServerAmmoCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached
// (Final, Native, Protected)

void UWeaponVisibleAmmoComponent::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached");

	UWeaponVisibleAmmoComponent_OnDetached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached
// (Final, Native, Protected)

void UWeaponVisibleAmmoComponent::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached");

	UWeaponVisibleAmmoComponent_OnAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged
// (Final, Native, Protected)

void UWeaponVisibleAmmoComponent::OnAmmoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged");

	UWeaponVisibleAmmoComponent_OnAmmoChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
