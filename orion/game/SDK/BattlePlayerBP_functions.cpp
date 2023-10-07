#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattlePlayerBP.BattlePlayerBP_C
// (Actor)

class UClass* ABattlePlayerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePlayerBP_C");

	return Clss;
}


// BattlePlayerBP_C BattlePlayerBP.Default__BattlePlayerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattlePlayerBP_C* ABattlePlayerBP_C::GetDefaultObj()
{
	static class ABattlePlayerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattlePlayerBP_C*>(ABattlePlayerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePlayerBP.BattlePlayerBP_C.GetReviveOrderType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EACTION_ORDER_TYPE      OrderType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetReviveOrderType(enum class EACTION_ORDER_TYPE* OrderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetReviveOrderType");

	Params::ABattlePlayerBP_C_GetReviveOrderType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderType != nullptr)
		*OrderType = Parms.OrderType;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetDisablePlayVoice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDisablePlayVoice                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::GetDisablePlayVoice(bool* IsDisablePlayVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetDisablePlayVoice");

	Params::ABattlePlayerBP_C_GetDisablePlayVoice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDisablePlayVoice != nullptr)
		*IsDisablePlayVoice = Parms.IsDisablePlayVoice;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckEnableSetCharaTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::CheckEnableSetCharaTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckEnableSetCharaTransform");

	Params::ABattlePlayerBP_C_CheckEnableSetCharaTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdatePotentinalityActionUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UpdatePotentinalityActionUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdatePotentinalityActionUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SwitchDiseaseEffectVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SwitchDiseaseEffectVisibility(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SwitchDiseaseEffectVisibility");

	Params::ABattlePlayerBP_C_SwitchDiseaseEffectVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayActionOrderIconDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayActionOrderIconDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayActionOrderIconDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnHitDamageSP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsBreakAttack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::OnHitDamageSP(bool bIsBreakAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnHitDamageSP");

	Params::ABattlePlayerBP_C_OnHitDamageSP_Params Parms{};

	Parms.bIsBreakAttack = bIsBreakAttack;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CanPlayVoiceWhileDisease
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      BattleVoiceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::CanPlayVoiceWhileDisease(enum class EBATTLE_VOICE_TYPE BattleVoiceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CanPlayVoiceWhileDisease");

	Params::ABattlePlayerBP_C_CanPlayVoiceWhileDisease_Params Parms{};

	Parms.BattleVoiceType = BattleVoiceType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDoomUIParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleManagerBP_C*          BattleManager_OLD                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExecDiseaseHandler         DiseaseHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBattleDeathCount_C*         DoomUI                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DeathCount                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ColorType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::SetDoomUIParameter(class ABattleManagerBP_C* BattleManager_OLD, const struct FExecDiseaseHandler& DiseaseHandle, class UBattleDeathCount_C** DoomUI, int32* DeathCount, int32* ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDoomUIParameter");

	Params::ABattlePlayerBP_C_SetDoomUIParameter_Params Parms{};

	Parms.BattleManager_OLD = BattleManager_OLD;
	Parms.DiseaseHandle = DiseaseHandle;

	UObject::ProcessEvent(Func, &Parms);

	if (DoomUI != nullptr)
		*DoomUI = Parms.DoomUI;

	if (DeathCount != nullptr)
		*DeathCount = Parms.DeathCount;

	if (ColorType != nullptr)
		*ColorType = Parms.ColorType;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ResetSelectWeaponForMasquerade
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        ETargetWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::ResetSelectWeaponForMasquerade(enum class EWEAPON_CATEGORY ETargetWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ResetSelectWeaponForMasquerade");

	Params::ABattlePlayerBP_C_ResetSelectWeaponForMasquerade_Params Parms{};

	Parms.ETargetWeapon = ETargetWeapon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetEquipmentLabelList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class FName> ABattlePlayerBP_C::GetEquipmentLabelList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetEquipmentLabelList");

	Params::ABattlePlayerBP_C_GetEquipmentLabelList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ClearEquipmentDataForMasquerade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ClearEquipmentDataForMasquerade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ClearEquipmentDataForMasquerade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckExecDiseaseForPostOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::CheckExecDiseaseForPostOrder(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckExecDiseaseForPostOrder");

	Params::ABattlePlayerBP_C_CheckExecDiseaseForPostOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckDiseaseInAdvance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CheckDiseaseInAdvance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckDiseaseInAdvance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetBestMagicDeffenceWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetBestMagicDeffenceWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetBestMagicDeffenceWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetBestPhysicsDeffenceWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetBestPhysicsDeffenceWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetBestPhysicsDeffenceWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SwitchCatapultWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NWeaponIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::SwitchCatapultWeapon(bool bDirNext, int32* NWeaponIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SwitchCatapultWeapon");

	Params::ABattlePlayerBP_C_SwitchCatapultWeapon_Params Parms{};

	Parms.bDirNext = bDirNext;

	UObject::ProcessEvent(Func, &Parms);

	if (NWeaponIndex != nullptr)
		*NWeaponIndex = Parms.NWeaponIndex;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.BeginCharacterOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FWaitTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::BeginCharacterOrder(float* FWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "BeginCharacterOrder");

	Params::ABattlePlayerBP_C_BeginCharacterOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FWaitTime != nullptr)
		*FWaitTime = Parms.FWaitTime;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.IsReleaseWeaponTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsRelease                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::IsReleaseWeaponTexture(bool* IsRelease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "IsReleaseWeaponTexture");

	Params::ABattlePlayerBP_C_IsReleaseWeaponTexture_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRelease != nullptr)
		*IsRelease = Parms.IsRelease;

}


// Function BattlePlayerBP.BattlePlayerBP_C.UnloadWeaponTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UnloadWeaponTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UnloadWeaponTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetRecoveredVoiceEnforcer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        InEnforcer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        OutEnforcer                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetRecoveredVoiceEnforcer(class ABattleCharacterBase* InEnforcer, class ABattleCharacterBase** OutEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetRecoveredVoiceEnforcer");

	Params::ABattlePlayerBP_C_GetRecoveredVoiceEnforcer_Params Parms{};

	Parms.InEnforcer = InEnforcer;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEnforcer != nullptr)
		*OutEnforcer = Parms.OutEnforcer;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CanPlayRecoveredVoice
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::CanPlayRecoveredVoice(class ABattleCharacterBase* Enforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CanPlayRecoveredVoice");

	Params::ABattlePlayerBP_C_CanPlayRecoveredVoice_Params Parms{};

	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnTakeDisease
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           EDiseaseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_CATEGORY       EDiseaseCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsNewDisease                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnTakeDisease");

	Params::ABattlePlayerBP_C_OnTakeDisease_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.EDiseaseType = EDiseaseType;
	Parms.EDiseaseCategory = EDiseaseCategory;
	Parms.NInvocationValue = NInvocationValue;
	Parms.NBoostLevel = NBoostLevel;
	Parms.bIsNewDisease = bIsNewDisease;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnTakeNewDisease
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           EDiseaseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::OnTakeNewDisease(enum class EDISEASE_TYPE EDiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnTakeNewDisease");

	Params::ABattlePlayerBP_C_OnTakeNewDisease_Params Parms{};

	Parms.EDiseaseType = EDiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayBattleVoice
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      EBattleVoiceType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleVoiceSetData         CPlayCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsSkipDiseaseCheck                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayBattleVoice");

	Params::ABattlePlayerBP_C_PlayBattleVoice_Params Parms{};

	Parms.EBattleVoiceType = EBattleVoiceType;
	Parms.CPlayCondition = CPlayCondition;
	Parms.bIsSkipDiseaseCheck = bIsSkipDiseaseCheck;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetEnchantAttribute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        ECheckWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         EEnchantAttribute                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::GetEnchantAttribute(enum class EWEAPON_CATEGORY ECheckWeapon, enum class EATTRIBUTE_TYPE* EEnchantAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetEnchantAttribute");

	Params::ABattlePlayerBP_C_GetEnchantAttribute_Params Parms{};

	Parms.ECheckWeapon = ECheckWeapon;

	UObject::ProcessEvent(Func, &Parms);

	if (EEnchantAttribute != nullptr)
		*EEnchantAttribute = Parms.EEnchantAttribute;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCurrentPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattlePlayerBP_C::GetCurrentPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCurrentPosition");

	Params::ABattlePlayerBP_C_GetCurrentPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetReplayDiseaseMask
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NDiseaseMask                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetReplayDiseaseMask(int32* NDiseaseMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetReplayDiseaseMask");

	Params::ABattlePlayerBP_C_GetReplayDiseaseMask_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NDiseaseMask != nullptr)
		*NDiseaseMask = Parms.NDiseaseMask;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterJob
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EJOB_TYPE               EFirstJob                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               ESecondJob                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnableSecondJob                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::GetCharacterJob(enum class EJOB_TYPE* EFirstJob, enum class EJOB_TYPE* ESecondJob, bool* bEnableSecondJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterJob");

	Params::ABattlePlayerBP_C_GetCharacterJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EFirstJob != nullptr)
		*EFirstJob = Parms.EFirstJob;

	if (ESecondJob != nullptr)
		*ESecondJob = Parms.ESecondJob;

	if (bEnableSecondJob != nullptr)
		*bEnableSecondJob = Parms.bEnableSecondJob;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterJobByRowID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NFirstJob                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NSecondJob                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCharacterJobByRowID(int32* NFirstJob, int32* NSecondJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterJobByRowID");

	Params::ABattlePlayerBP_C_GetCharacterJobByRowID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NFirstJob != nullptr)
		*NFirstJob = Parms.NFirstJob;

	if (NSecondJob != nullptr)
		*NSecondJob = Parms.NSecondJob;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetReplayStatus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSelfTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_REPLAY_CHARA_STATUSEReplayStatus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetReplayStatus");

	Params::ABattlePlayerBP_C_GetReplayStatus_Params Parms{};

	Parms.bIsSelfTurn = bIsSelfTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (EReplayStatus != nullptr)
		*EReplayStatus = Parms.EReplayStatus;

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateSubStatusParam
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateBoost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdatePotential                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::UpdateSubStatusParam(bool UpdateBoost, bool UpdatePotential)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateSubStatusParam");

	Params::ABattlePlayerBP_C_UpdateSubStatusParam_Params Parms{};

	Parms.UpdateBoost = UpdateBoost;
	Parms.UpdatePotential = UpdatePotential;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.IsCharacterDecondition
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::IsCharacterDecondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "IsCharacterDecondition");

	Params::ABattlePlayerBP_C_IsCharacterDecondition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckCharacterReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CheckCharacterReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckCharacterReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayBattleVoiceForDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NDamageValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::PlayBattleVoiceForDamage(int32 NDamageValue, class AActionCommandBase* CActionCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayBattleVoiceForDamage");

	Params::ABattlePlayerBP_C_PlayBattleVoiceForDamage_Params Parms{};

	Parms.NDamageValue = NDamageValue;
	Parms.CActionCommand = CActionCommand;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SearchEquipmentAilment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAilmentHandler>     AilmentHandler                                                   (Parm, OutParm)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SearchEquipmentAilment(enum class EAILMENT_TYPE AilmentType, TArray<struct FAilmentHandler>* AilmentHandler, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SearchEquipmentAilment");

	Params::ABattlePlayerBP_C_SearchEquipmentAilment_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        StrCharacterName                                                 (Parm, OutParm)

void ABattlePlayerBP_C::GetCharacterName(class FText* StrCharacterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterName");

	Params::ABattlePlayerBP_C_GetCharacterName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StrCharacterName != nullptr)
		*StrCharacterName = Parms.StrCharacterName;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CalcDecreaseValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              DecValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RetValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::CalcDecreaseValue(float DecValue, int32 MinHP, int32* RetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CalcDecreaseValue");

	Params::ABattlePlayerBP_C_CalcDecreaseValue_Params Parms{};

	Parms.DecValue = DecValue;
	Parms.MinHP = MinHP;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.DecideActionForSubParty
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FWaitTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::DecideActionForSubParty(float* FWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "DecideActionForSubParty");

	Params::ABattlePlayerBP_C_DecideActionForSubParty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FWaitTime != nullptr)
		*FWaitTime = Parms.FWaitTime;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateStatusParam
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateBoost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdatePotential                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::UpdateStatusParam(bool UpdateBoost, bool UpdatePotential)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateStatusParam");

	Params::ABattlePlayerBP_C_UpdateStatusParam_Params Parms{};

	Parms.UpdateBoost = UpdateBoost;
	Parms.UpdatePotential = UpdatePotential;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.TurnONStatusUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::TurnONStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "TurnONStatusUI");

	Params::ABattlePlayerBP_C_TurnONStatusUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.TurnOffStatusUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::TurnOffStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "TurnOffStatusUI");

	Params::ABattlePlayerBP_C_TurnOffStatusUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SearchEquipmentAilmentForUnique
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAilment                    Ailment                                                          (Parm, OutParm, HasGetValueTypeHash)
// struct FAilmentHandler             AilmentHandler                                                   (Parm, OutParm, NoDestructor)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SearchEquipmentAilmentForUnique(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SearchEquipmentAilmentForUnique");

	Params::ABattlePlayerBP_C_SearchEquipmentAilmentForUnique_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (Ailment != nullptr)
		*Ailment = std::move(Parms.Ailment);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharmEnemyLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABattlePlayerBP_C::GetCharmEnemyLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharmEnemyLabel");

	Params::ABattlePlayerBP_C_GetCharmEnemyLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetEquipmentList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FItemData>           ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<struct FItemData> ABattlePlayerBP_C::GetEquipmentList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetEquipmentList");

	Params::ABattlePlayerBP_C_GetEquipmentList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetEquipmentWeaponCategory
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class EWEAPON_CATEGORY>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<enum class EWEAPON_CATEGORY> ABattlePlayerBP_C::GetEquipmentWeaponCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetEquipmentWeaponCategory");

	Params::ABattlePlayerBP_C_GetEquipmentWeaponCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ClearEquipmentData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ClearEquipmentData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ClearEquipmentData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetPartyCharaData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPartyCharacterData         PartyCharaData                                                   (Parm, OutParm, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetPartyCharaData(struct FPartyCharacterData* PartyCharaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetPartyCharaData");

	Params::ABattlePlayerBP_C_GetPartyCharaData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PartyCharaData != nullptr)
		*PartyCharaData = std::move(Parms.PartyCharaData);

}


// Function BattlePlayerBP.BattlePlayerBP_C.AddMaxHP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NAdditiveMaxHP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::AddMaxHP(int32 NAdditiveMaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "AddMaxHP");

	Params::ABattlePlayerBP_C_AddMaxHP_Params Parms{};

	Parms.NAdditiveMaxHP = NAdditiveMaxHP;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SwitchMainWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NWeaponIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::SwitchMainWeapon(bool bDirNext, int32* NWeaponIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SwitchMainWeapon");

	Params::ABattlePlayerBP_C_SwitchMainWeapon_Params Parms{};

	Parms.bDirNext = bDirNext;

	UObject::ProcessEvent(Func, &Parms);

	if (NWeaponIndex != nullptr)
		*NWeaponIndex = Parms.NWeaponIndex;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetMasterParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetMasterParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetMasterParameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.MakeDefaultEquipmentItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Parm, OutParm)

void ABattlePlayerBP_C::MakeDefaultEquipmentItem(enum class EEQUIPMENT_PART EquipmentPart, struct FItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "MakeDefaultEquipmentItem");

	Params::ABattlePlayerBP_C_MakeDefaultEquipmentItem_Params Parms{};

	Parms.EquipmentPart = EquipmentPart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = std::move(Parms.ItemData);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckEquipmentWeapon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        ECheckWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::CheckEquipmentWeapon(enum class EWEAPON_CATEGORY ECheckWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckEquipmentWeapon");

	Params::ABattlePlayerBP_C_CheckEquipmentWeapon_Params Parms{};

	Parms.ECheckWeapon = ECheckWeapon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SwitchNormalAttackWeapon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NWeaponIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::SwitchNormalAttackWeapon(bool bDirNext, int32* NWeaponIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SwitchNormalAttackWeapon");

	Params::ABattlePlayerBP_C_SwitchNormalAttackWeapon_Params Parms{};

	Parms.bDirNext = bDirNext;

	UObject::ProcessEvent(Func, &Parms);

	if (NWeaponIndex != nullptr)
		*NWeaponIndex = Parms.NWeaponIndex;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ChangeMainWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        ETargetWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseWeaponTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ChangeMainWeapon");

	Params::ABattlePlayerBP_C_ChangeMainWeapon_Params Parms{};

	Parms.ETargetWeapon = ETargetWeapon;
	Parms.bUseWeaponTexture = bUseWeaponTexture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetMainWeaponParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharacterParam             EquipmentRevision                                                (Parm, OutParm, NoDestructor)

void ABattlePlayerBP_C::GetMainWeaponParameter(struct FCharacterParam* EquipmentRevision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetMainWeaponParameter");

	Params::ABattlePlayerBP_C_GetMainWeaponParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentRevision != nullptr)
		*EquipmentRevision = std::move(Parms.EquipmentRevision);

}


// Function BattlePlayerBP.BattlePlayerBP_C.IsCharacterDeadlySense
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::IsCharacterDeadlySense()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "IsCharacterDeadlySense");

	Params::ABattlePlayerBP_C_IsCharacterDeadlySense_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.FinishPotentialityAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCheckResume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::FinishPotentialityAction(bool bCheckResume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "FinishPotentialityAction");

	Params::ABattlePlayerBP_C_FinishPotentialityAction_Params Parms{};

	Parms.bCheckResume = bCheckResume;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.AddPotentialityActionPoint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NAddPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIgnore                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::AddPotentialityActionPoint(int32 NAddPoint, bool bIgnore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "AddPotentialityActionPoint");

	Params::ABattlePlayerBP_C_AddPotentialityActionPoint_Params Parms{};

	Parms.NAddPoint = NAddPoint;
	Parms.bIgnore = bIgnore;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnHitDamageHP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsBreakAttack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBreakTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       ETotalResist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       EWeaponResist                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnHitDamageHP");

	Params::ABattlePlayerBP_C_OnHitDamageHP_Params Parms{};

	Parms.bIsBreakAttack = bIsBreakAttack;
	Parms.bIsBreakTarget = bIsBreakTarget;
	Parms.ETotalResist = ETotalResist;
	Parms.EWeaponResist = EWeaponResist;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetDiseaseEffectPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetDiseaseEffectPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetDiseaseEffectPosition");

	Params::ABattlePlayerBP_C_GetDiseaseEffectPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ReleasePotentialityAction
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ReleasePotentialityAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ReleasePotentialityAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.EndCharacterOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FWaitTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::EndCharacterOrder(float* FWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "EndCharacterOrder");

	Params::ABattlePlayerBP_C_EndCharacterOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FWaitTime != nullptr)
		*FWaitTime = Parms.FWaitTime;

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetupSubAnimationCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>AcTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     CCommandOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::SetupSubAnimationCharacter(TArray<class ABattleCharacterBase*>& AcTarget, const struct FVector& CCommandOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetupSubAnimationCharacter");

	Params::ABattlePlayerBP_C_SetupSubAnimationCharacter_Params Parms{};

	Parms.AcTarget = AcTarget;
	Parms.CCommandOffset = CCommandOffset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecStartCharacterWarp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::ExecStartCharacterWarp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecStartCharacterWarp");

	Params::ABattlePlayerBP_C_ExecStartCharacterWarp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecEndCharacterWarp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::ExecEndCharacterWarp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecEndCharacterWarp");

	Params::ABattlePlayerBP_C_ExecEndCharacterWarp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckPotentialityActionRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CheckPotentialityActionRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckPotentialityActionRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SaveCharacterParameter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattlePlayerBP_C::SaveCharacterParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SaveCharacterParameter");

	Params::ABattlePlayerBP_C_SaveCharacterParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayVictoryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseVictoryAction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::PlayVictoryAction(bool UseVictoryAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayVictoryAction");

	Params::ABattlePlayerBP_C_PlayVictoryAction_Params Parms{};

	Parms.UseVictoryAction = UseVictoryAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CalcAddBoostPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::CalcAddBoostPoint(int32* AddPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CalcAddBoostPoint");

	Params::ABattlePlayerBP_C_CalcAddBoostPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AddPoint != nullptr)
		*AddPoint = Parms.AddPoint;

}


// Function BattlePlayerBP.BattlePlayerBP_C.AddDiseaseForReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_TYPE_BITMASK   DiseaseType_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::AddDiseaseForReplay(int32 Status, enum class EDISEASE_TYPE_BITMASK DiseaseType_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "AddDiseaseForReplay");

	Params::ABattlePlayerBP_C_AddDiseaseForReplay_Params Parms{};

	Parms.Status = Status;
	Parms.DiseaseType_ = DiseaseType_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.On Post Remove Disease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::On_Post_Remove_Disease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "On Post Remove Disease");

	Params::ABattlePlayerBP_C_On_Post_Remove_Disease_Params Parms{};

	Parms.DiseaseData = DiseaseData;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnPreRemoveDisease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::OnPreRemoveDisease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnPreRemoveDisease");

	Params::ABattlePlayerBP_C_OnPreRemoveDisease_Params Parms{};

	Parms.DiseaseData = DiseaseData;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetBestPhysicsAttackWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetBestPhysicsAttackWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetBestPhysicsAttackWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.InstantStepInForReplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::InstantStepInForReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InstantStepInForReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.Debug_GetJobPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::Debug_GetJobPoint(int32* JobPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "Debug_GetJobPoint");

	Params::ABattlePlayerBP_C_Debug_GetJobPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobPoint != nullptr)
		*JobPoint = Parms.JobPoint;

}


// Function BattlePlayerBP.BattlePlayerBP_C.Debug_GetExp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Exp                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::Debug_GetExp(int32* Exp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "Debug_GetExp");

	Params::ABattlePlayerBP_C_Debug_GetExp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exp != nullptr)
		*Exp = Parms.Exp;

}


// Function BattlePlayerBP.BattlePlayerBP_C.Debug_GetMoney
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Money                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::Debug_GetMoney(int32* Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "Debug_GetMoney");

	Params::ABattlePlayerBP_C_Debug_GetMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Money != nullptr)
		*Money = Parms.Money;

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitEquipmentDataForReplayMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::InitEquipmentDataForReplayMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitEquipmentDataForReplayMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitializeReplayModeStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::InitializeReplayModeStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitializeReplayModeStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitializeReplayMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleReplayPlayerData     ReplayData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndRollSegmentSet      ReplaySegment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::InitializeReplayMode(const struct FBattleReplayPlayerData& ReplayData, enum class EEndRollSegmentSet ReplaySegment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitializeReplayMode");

	Params::ABattlePlayerBP_C_InitializeReplayMode_Params Parms{};

	Parms.ReplayData = ReplayData;
	Parms.ReplaySegment = ReplaySegment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetOnHitDamageDiseaseRatio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBoost                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsConvergence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EABILITY_TYPE           AbilityType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCompensation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCritical                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActionCommandBase*          ActionCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetOnHitDamageDiseaseRatio(class ABattleCharacterBaseBP_C* Target, bool IsBoost, bool IsConvergence, enum class EAILMENT_CALC_TYPE CalcType, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, enum class EABILITY_TYPE AbilityType, bool IsCompensation, bool IsCritical, class AActionCommandBase* ActionCommand, float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetOnHitDamageDiseaseRatio");

	Params::ABattlePlayerBP_C_GetOnHitDamageDiseaseRatio_Params Parms{};

	Parms.Target = Target;
	Parms.IsBoost = IsBoost;
	Parms.IsConvergence = IsConvergence;
	Parms.CalcType = CalcType;
	Parms.Weapon = Weapon;
	Parms.Attribute = Attribute;
	Parms.AbilityType = AbilityType;
	Parms.IsCompensation = IsCompensation;
	Parms.IsCritical = IsCritical;
	Parms.ActionCommand = ActionCommand;

	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SearchWeaponAbilityUP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalInvocationValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SearchWeaponAbilityUP(int32* TotalInvocationValue, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SearchWeaponAbilityUP");

	Params::ABattlePlayerBP_C_SearchWeaponAbilityUP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalInvocationValue != nullptr)
		*TotalInvocationValue = Parms.TotalInvocationValue;

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SearchMagicAbilityUP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalInvocationValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SearchMagicAbilityUP(enum class EATTRIBUTE_TYPE Attribute, int32* TotalInvocationValue, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SearchMagicAbilityUP");

	Params::ABattlePlayerBP_C_SearchMagicAbilityUP_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalInvocationValue != nullptr)
		*TotalInvocationValue = Parms.TotalInvocationValue;

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetBestMagicAttackWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetBestMagicAttackWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetBestMagicAttackWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateDisease_DragIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::UpdateDisease_DragIn(bool* Remove, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateDisease_DragIn");

	Params::ABattlePlayerBP_C_UpdateDisease_DragIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattlePlayerBP.BattlePlayerBP_C.SearchMainWeaponAilment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAilment                    Ailment                                                          (Parm, OutParm, HasGetValueTypeHash)
// struct FAilmentHandler             AilmentHandler                                                   (Parm, OutParm, NoDestructor)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SearchMainWeaponAilment(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SearchMainWeaponAilment");

	Params::ABattlePlayerBP_C_SearchMainWeaponAilment_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (Ailment != nullptr)
		*Ailment = std::move(Parms.Ailment);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnTakeDamageHP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         AttributeType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::OnTakeDamageHP(class ABattleCharacterBaseBP_C* Enforcer, int32 DamageValue, enum class EWEAPON_CATEGORY WeaponType, enum class EATTRIBUTE_TYPE AttributeType, enum class EAILMENT_CALC_TYPE_OLD CalcType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnTakeDamageHP");

	Params::ABattlePlayerBP_C_OnTakeDamageHP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.DamageValue = DamageValue;
	Parms.WeaponType = WeaponType;
	Parms.AttributeType = AttributeType;
	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateDiseaseCounter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::UpdateDiseaseCounter(enum class EDISEASE_TYPE Type, bool* Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateDiseaseCounter");

	Params::ABattlePlayerBP_C_UpdateDiseaseCounter_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetRecoveryLevelRatio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseDEF                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetRecoveryLevelRatio");

	Params::ABattlePlayerBP_C_GetRecoveryLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseDEF != nullptr)
		*BaseDEF = Parms.BaseDEF;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetDamageLevelRatio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseATK                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetDamageLevelRatio");

	Params::ABattlePlayerBP_C_GetDamageLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseATK != nullptr)
		*BaseATK = Parms.BaseATK;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetTakeDamageDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageRatio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetTakeDamageDiseaseRatio(enum class EAILMENT_CALC_TYPE CalcType, enum class EATTRIBUTE_TYPE Attribute, float* DamageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetTakeDamageDiseaseRatio");

	Params::ABattlePlayerBP_C_GetTakeDamageDiseaseRatio_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageRatio != nullptr)
		*DamageRatio = Parms.DamageRatio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitDiseaseResist
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           CharaEquipment                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattlePlayerBP_C::InitDiseaseResist(TArray<struct FItemData>& CharaEquipment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitDiseaseResist");

	Params::ABattlePlayerBP_C_InitDiseaseResist_Params Parms{};

	Parms.CharaEquipment = CharaEquipment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageForPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPoisonDamage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InstantDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SetDamageForPlayer(int32 DamageValue, bool IsPoisonDamage, bool InstantDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamageForPlayer");

	Params::ABattlePlayerBP_C_SetDamageForPlayer_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.IsPoisonDamage = IsPoisonDamage;
	Parms.InstantDeath = InstantDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetStatusDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetStatusDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetStatusDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetAttributeResist_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         AttackAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckWeakLock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetAttributeResist_OLD(enum class EATTRIBUTE_TYPE AttackAttribute, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetAttributeResist_OLD");

	Params::ABattlePlayerBP_C_GetAttributeResist_OLD_Params Parms{};

	Parms.AttackAttribute = AttackAttribute;
	Parms.CheckWeakLock = CheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeResist != nullptr)
		*AttributeResist = Parms.AttributeResist;

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecDisease_Poison
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecPoison                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::ExecDisease_Poison(bool* ExecPoison, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecDisease_Poison");

	Params::ABattlePlayerBP_C_ExecDisease_Poison_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecPoison != nullptr)
		*ExecPoison = Parms.ExecPoison;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetMP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MPMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetMP(int32* MP, int32* MPMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetMP");

	Params::ABattlePlayerBP_C_GetMP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MP != nullptr)
		*MP = Parms.MP;

	if (MPMax != nullptr)
		*MPMax = Parms.MPMax;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetHP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              HP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HPMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetHP(int32* HP, int32* HPMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetHP");

	Params::ABattlePlayerBP_C_GetHP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HP != nullptr)
		*HP = Parms.HP;

	if (HPMax != nullptr)
		*HPMax = Parms.HPMax;

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitializeSupportAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::InitializeSupportAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitializeSupportAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetAccuracyOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Accuracy                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetAccuracyOld(int32* Accuracy, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetAccuracyOld");

	Params::ABattlePlayerBP_C_GetAccuracyOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accuracy != nullptr)
		*Accuracy = Parms.Accuracy;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetEvasionOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Evasion                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetEvasionOld(int32* Evasion, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetEvasionOld");

	Params::ABattlePlayerBP_C_GetEvasionOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Evasion != nullptr)
		*Evasion = Parms.Evasion;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetAgilityOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Agility                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetAgilityOld(int32* Agility, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetAgilityOld");

	Params::ABattlePlayerBP_C_GetAgilityOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Agility != nullptr)
		*Agility = Parms.Agility;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetConcentrateOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Concentrate                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetConcentrateOld(int32* Concentrate, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetConcentrateOld");

	Params::ABattlePlayerBP_C_GetConcentrateOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Concentrate != nullptr)
		*Concentrate = Parms.Concentrate;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.CheckLevelMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               LevelMax                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::CheckLevelMax(bool* LevelMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CheckLevelMax");

	Params::ABattlePlayerBP_C_CheckLevelMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LevelMax != nullptr)
		*LevelMax = Parms.LevelMax;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCommandDetail
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                UniqueCommandDetail                                              (Parm, OutParm)
// class FName                        FirstJobCommandDeatil                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SecondJobCommandDetail                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCommandDetail(TArray<class FName>* UniqueCommandDetail, class FName* FirstJobCommandDeatil, class FName* SecondJobCommandDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCommandDetail");

	Params::ABattlePlayerBP_C_GetCommandDetail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UniqueCommandDetail != nullptr)
		*UniqueCommandDetail = std::move(Parms.UniqueCommandDetail);

	if (FirstJobCommandDeatil != nullptr)
		*FirstJobCommandDeatil = Parms.FirstJobCommandDeatil;

	if (SecondJobCommandDetail != nullptr)
		*SecondJobCommandDetail = Parms.SecondJobCommandDetail;

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayBattleVoice_Boost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::PlayBattleVoice_Boost(int32 BoostLv)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayBattleVoice_Boost");

	Params::ABattlePlayerBP_C_PlayBattleVoice_Boost_Params Parms{};

	Parms.BoostLv = BoostLv;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterDefenseOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCharacterDefenseOld(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterDefenseOld");

	Params::ABattlePlayerBP_C_GetCharacterDefenseOld_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterAttackOld
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCharacterAttackOld(enum class EAILMENT_CALC_TYPE_OLD CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterAttackOld");

	Params::ABattlePlayerBP_C_GetCharacterAttackOld_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.DamageTarget = DamageTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterNameID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        TextID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCharacterNameID(class FName* TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterNameID");

	Params::ABattlePlayerBP_C_GetCharacterNameID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextID != nullptr)
		*TextID = Parms.TextID;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCommandName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                UniqueCommandName                                                (Parm, OutParm)
// class FName                        FirstJobCommandName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SecondJobCommandName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCommandName(TArray<class FName>* UniqueCommandName, class FName* FirstJobCommandName, class FName* SecondJobCommandName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCommandName");

	Params::ABattlePlayerBP_C_GetCommandName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UniqueCommandName != nullptr)
		*UniqueCommandName = std::move(Parms.UniqueCommandName);

	if (FirstJobCommandName != nullptr)
		*FirstJobCommandName = Parms.FirstJobCommandName;

	if (SecondJobCommandName != nullptr)
		*SecondJobCommandName = Parms.SecondJobCommandName;

}


// Function BattlePlayerBP.BattlePlayerBP_C.JudgeCover
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::JudgeCover(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "JudgeCover");

	Params::ABattlePlayerBP_C_JudgeCover_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattlePlayerBP.BattlePlayerBP_C.BeginBattleTurn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::BeginBattleTurn(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "BeginBattleTurn");

	Params::ABattlePlayerBP_C_BeginBattleTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetSupporter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleSupporterBP_C*        Supporter                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSupporter                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::GetSupporter(class ABattleSupporterBP_C** Supporter, bool* IsSupporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetSupporter");

	Params::ABattlePlayerBP_C_GetSupporter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Supporter != nullptr)
		*Supporter = Parms.Supporter;

	if (IsSupporter != nullptr)
		*IsSupporter = Parms.IsSupporter;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCharacterLevel(int32* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterLevel");

	Params::ABattlePlayerBP_C_GetCharacterLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterOrderIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PixelScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaFootPivot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CharacterSwitch                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::GetCharacterOrderIcon(class UTexture2D** OrderIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* Scale, float* InvertX, struct FVector2D* CharaFootPivot, bool* CharacterSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterOrderIcon");

	Params::ABattlePlayerBP_C_GetCharacterOrderIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

	if (IconUV != nullptr)
		*IconUV = std::move(Parms.IconUV);

	if (PixelScale != nullptr)
		*PixelScale = std::move(Parms.PixelScale);

	if (CharaOffset != nullptr)
		*CharaOffset = std::move(Parms.CharaOffset);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (CharaFootPivot != nullptr)
		*CharaFootPivot = std::move(Parms.CharaFootPivot);

	if (CharacterSwitch != nullptr)
		*CharacterSwitch = Parms.CharacterSwitch;

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCharacterActiveIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  FrontIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PixelScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CharaScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  WeaponIcon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaFootPivot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetCharacterActiveIcon(class UTexture2D** OrderIcon, class UTexture2D** FrontIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* CharaScale, float* InvertX, class UTexture2D** WeaponIcon, struct FVector2D* CharaFootPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCharacterActiveIcon");

	Params::ABattlePlayerBP_C_GetCharacterActiveIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

	if (FrontIcon != nullptr)
		*FrontIcon = Parms.FrontIcon;

	if (IconUV != nullptr)
		*IconUV = std::move(Parms.IconUV);

	if (PixelScale != nullptr)
		*PixelScale = std::move(Parms.PixelScale);

	if (CharaOffset != nullptr)
		*CharaOffset = std::move(Parms.CharaOffset);

	if (CharaScale != nullptr)
		*CharaScale = Parms.CharaScale;

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (WeaponIcon != nullptr)
		*WeaponIcon = Parms.WeaponIcon;

	if (CharaFootPivot != nullptr)
		*CharaFootPivot = std::move(Parms.CharaFootPivot);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetEffectSpawnPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ground                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::GetEffectSpawnPosition(bool Ground, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetEffectSpawnPosition");

	Params::ABattlePlayerBP_C_GetEffectSpawnPosition_Params Parms{};

	Parms.Ground = Ground;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayerStepOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayerStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayerStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayerStepIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayerStepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayerStepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.BeginCharacterTurn_OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::BeginCharacterTurn_OLD(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "BeginCharacterTurn_OLD");

	Params::ABattlePlayerBP_C_BeginCharacterTurn_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayLevelupAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayLevelupAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayLevelupAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.GetCommandList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IncludeAdvancedAbility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                UniqueCommandList                                                (Parm, OutParm)
// TArray<class FName>                FirstJobCommandList                                              (Parm, OutParm)
// TArray<class FName>                SecondJobCommandList                                             (Parm, OutParm)

void ABattlePlayerBP_C::GetCommandList(bool IncludeAdvancedAbility, TArray<class FName>* UniqueCommandList, TArray<class FName>* FirstJobCommandList, TArray<class FName>* SecondJobCommandList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "GetCommandList");

	Params::ABattlePlayerBP_C_GetCommandList_Params Parms{};

	Parms.IncludeAdvancedAbility = IncludeAdvancedAbility;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueCommandList != nullptr)
		*UniqueCommandList = std::move(Parms.UniqueCommandList);

	if (FirstJobCommandList != nullptr)
		*FirstJobCommandList = std::move(Parms.FirstJobCommandList);

	if (SecondJobCommandList != nullptr)
		*SecondJobCommandList = std::move(Parms.SecondJobCommandList);

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitAttributeResist
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           CharaEquipment                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EATTRIBUTE_RESIST>AttributeResist                                                  (Parm, OutParm)

void ABattlePlayerBP_C::InitAttributeResist(TArray<struct FItemData>& CharaEquipment, TArray<enum class EATTRIBUTE_RESIST>* AttributeResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitAttributeResist");

	Params::ABattlePlayerBP_C_InitAttributeResist_Params Parms{};

	Parms.CharaEquipment = CharaEquipment;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeResist != nullptr)
		*AttributeResist = std::move(Parms.AttributeResist);

}


// Function BattlePlayerBP.BattlePlayerBP_C.InitEquipmentData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveEquipmentData          Equipment                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ForMasquerade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::InitEquipmentData(const struct FSaveEquipmentData& Equipment, bool ForMasquerade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "InitEquipmentData");

	Params::ABattlePlayerBP_C_InitEquipmentData_Params Parms{};

	Parms.Equipment = Equipment;
	Parms.ForMasquerade = ForMasquerade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyCharacterData         CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MemberNum                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CharaStepPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WaterSide                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::Initialize(const struct FPartyCharacterData& CharacterData, int32 Index, int32 MemberNum, const struct FVector& CharaStepPoint, bool WaterSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "Initialize");

	Params::ABattlePlayerBP_C_Initialize_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.Index = Index;
	Parms.MemberNum = MemberNum;
	Parms.CharaStepPoint = CharaStepPoint;
	Parms.WaterSide = WaterSide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepInTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepInTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepInTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepInTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepInTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepInTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepOutTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepOutTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepOutTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepOutTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepOutTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepOutTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayerHardenDeadKnockBackOffset__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayerHardenDeadKnockBackOffset__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayerHardenDeadKnockBackOffset__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayerHardenDeadKnockBackOffset__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayerHardenDeadKnockBackOffset__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayerHardenDeadKnockBackOffset__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayInhaleMoveTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayInhaleMoveTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayInhaleMoveTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayInhaleMoveTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayInhaleMoveTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayInhaleMoveTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989");

	Params::ABattlePlayerBP_C_OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnLoaded_F5FBC5B74DA43B905CD8659E682C847E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::OnLoaded_F5FBC5B74DA43B905CD8659E682C847E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnLoaded_F5FBC5B74DA43B905CD8659E682C847E");

	Params::ABattlePlayerBP_C_OnLoaded_F5FBC5B74DA43B905CD8659E682C847E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.OnLoaded_EADE36EE4527E711872AD48813213439
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::OnLoaded_EADE36EE4527E711872AD48813213439(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OnLoaded_EADE36EE4527E711872AD48813213439");

	Params::ABattlePlayerBP_C_OnLoaded_EADE36EE4527E711872AD48813213439_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InstantDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamage");

	Params::ABattlePlayerBP_C_SetDamage_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;
	Parms.InstantDeath = InstantDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UseMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::UseMP(int32 UseMP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UseMP");

	Params::ABattlePlayerBP_C_UseMP_Params Parms{};

	Parms.UseMP = UseMP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.Update Animation State OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::Update_Animation_State_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "Update Animation State OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamage_MP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::SetDamage_MP(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamage_MP");

	Params::ABattlePlayerBP_C_SetDamage_MP_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamage_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::SetDamage_BP(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamage_BP");

	Params::ABattlePlayerBP_C_SetDamage_BP_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageHPMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HPMinimum                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRatio                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SetDamageHPMax(float Damage, int32 HPMinimum, bool IsRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamageHPMax");

	Params::ABattlePlayerBP_C_SetDamageHPMax_Params Parms{};

	Parms.Damage = Damage;
	Parms.HPMinimum = HPMinimum;
	Parms.IsRatio = IsRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageForPoison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SetDamageForPoison(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamageForPoison");

	Params::ABattlePlayerBP_C_SetDamageForPoison_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryMP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "RecoveryMP");

	Params::ABattlePlayerBP_C_RecoveryMP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryHP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "RecoveryHP");

	Params::ABattlePlayerBP_C_RecoveryHP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDamageBPMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::SetDamageBPMax(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDamageBPMax");

	Params::ABattlePlayerBP_C_SetDamageBPMax_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecRevive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NReviveHP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseReviveVoice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecRevive");

	Params::ABattlePlayerBP_C_ExecRevive_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NReviveHP = NReviveHP;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bUseReviveVoice = bUseReviveVoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::RecoveryBP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "RecoveryBP");

	Params::ABattlePlayerBP_C_RecoveryBP_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.RecoveryPotentialityActionPoint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMeatItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::RecoveryPotentialityActionPoint(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "RecoveryPotentialityActionPoint");

	Params::ABattlePlayerBP_C_RecoveryPotentialityActionPoint_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NValue = NValue;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bIsMeatItem = bIsMeatItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.EndStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::EndStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "EndStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateBoostGaugeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UpdateBoostGaugeUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateBoostGaugeUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.OpenStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::OpenStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OpenStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CloseStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CloseStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CloseStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.HideStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::HideStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "HideStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ResumeStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ResumeStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ResumeStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.BeginPlayerUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleSelectPlayerStatus_C* StatusUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_BattleSelectSubPlayerStatus_C*SubStatusUI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattleDamageNumber_C*       DamageUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::BeginPlayerUI(class UBattleSelectPlayerStatus_C* StatusUI, class UWBP_BattleSelectSubPlayerStatus_C* SubStatusUI, class UBattleDamageNumber_C* DamageUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "BeginPlayerUI");

	Params::ABattlePlayerBP_C_BeginPlayerUI_Params Parms{};

	Parms.StatusUI = StatusUI;
	Parms.SubStatusUI = SubStatusUI;
	Parms.DamageUI = DamageUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateSideCharacterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UpdateSideCharacterUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateSideCharacterUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UpdateStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.OpenSubStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::OpenSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "OpenSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CloseSubStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CloseSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CloseSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateSubStatusUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UpdateSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.UpdateSubBoostGaugeUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::UpdateSubBoostGaugeUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "UpdateSubBoostGaugeUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::SetOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.HideSubStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::HideSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "HideSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ResumeSubStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ResumeSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ResumeSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CreateAnimCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::CreateAnimCharacter(class FName ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CreateAnimCharacter");

	Params::ABattlePlayerBP_C_CreateAnimCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ChangeAnimCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HidePotUI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::ChangeAnimCharacter(class FName ActionLabel, bool HidePotUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ChangeAnimCharacter");

	Params::ABattlePlayerBP_C_ChangeAnimCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;
	Parms.HidePotUI = HidePotUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.BeginAddBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::BeginAddBoostPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "BeginAddBoostPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CalcNextTurnWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CalcNextTurnWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CalcNextTurnWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayBlowAwayMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayBlowAwayMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayBlowAwayMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ReturnBlowAway
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ReturnBlowAway()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ReturnBlowAway");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayHardenDeadKnockBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayHardenDeadKnockBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayHardenDeadKnockBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayDragInMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_DRAG_IN_TYPE    DragInType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::PlayDragInMove(enum class EBATTLE_DRAG_IN_TYPE DragInType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayDragInMove");

	Params::ABattlePlayerBP_C_PlayDragInMove_Params Parms{};

	Parms.DragInType = DragInType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ReturnDragIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ReturnDragIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ReturnDragIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.LoadActionOrderIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::LoadActionOrderIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "LoadActionOrderIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayEscapeSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayEscapeSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayEscapeSuccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayEscapeFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayEscapeFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayEscapeFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.FinishStepOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::FinishStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "FinishStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ResumeMasquerade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WaitAction                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::ResumeMasquerade(bool WaitAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ResumeMasquerade");

	Params::ABattlePlayerBP_C_ResumeMasquerade_Params Parms{};

	Parms.WaitAction = WaitAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CreateSubAnimationCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NCreateNum                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::CreateSubAnimationCharacter(int32 NCreateNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CreateSubAnimationCharacter");

	Params::ABattlePlayerBP_C_CreateSubAnimationCharacter_Params Parms{};

	Parms.NCreateNum = NCreateNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.DeadDragIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::DeadDragIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "DeadDragIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayCharmEscape
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayCharmEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayCharmEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ReturnCharmEscape
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ReturnCharmEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ReturnCharmEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.Debug_ChangeSecondJob
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SecondJobID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::Debug_ChangeSecondJob(int32 SecondJobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "Debug_ChangeSecondJob");

	Params::ABattlePlayerBP_C_Debug_ChangeSecondJob_Params Parms{};

	Parms.SecondJobID = SecondJobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecBlowAwayAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationTurn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::ExecBlowAwayAction(class ABattleCharacterBase* Enforcer, int32 NInvocationTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecBlowAwayAction");

	Params::ABattlePlayerBP_C_ExecBlowAwayAction_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.NInvocationTurn = NInvocationTurn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecDragInAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationTurn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DRAG_IN_TYPE    EDragInType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::ExecDragInAction(class ABattleCharacterBase* Enforcer, int32 NInvocationTurn, enum class EBATTLE_DRAG_IN_TYPE EDragInType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecDragInAction");

	Params::ABattlePlayerBP_C_ExecDragInAction_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.NInvocationTurn = NInvocationTurn;
	Parms.EDragInType = EDragInType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecCharmAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::ExecCharmAction(class ABattleCharacterBase* Enforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecCharmAction");

	Params::ABattlePlayerBP_C_ExecCharmAction_Params Parms{};

	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecReturnCharmAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ExecReturnCharmAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecReturnCharmAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecSwitchSlidePartyMainToSub
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ExecSwitchSlidePartyMainToSub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecSwitchSlidePartyMainToSub");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecSwitchSlidePartySubToMain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ExecSwitchSlidePartySubToMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecSwitchSlidePartySubToMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.LoadWeaponTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::LoadWeaponTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "LoadWeaponTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.WeaponTextureLoadFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::WeaponTextureLoadFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "WeaponTextureLoadFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.PlayCaptureMove
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::PlayCaptureMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "PlayCaptureMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ReturnCaptureMove
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::ReturnCaptureMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ReturnCaptureMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepInForRandom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepInForRandom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepInForRandom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.SetDefaultLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInMainParty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattlePlayerBP_C::SetDefaultLocation(bool bInMainParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "SetDefaultLocation");

	Params::ABattlePlayerBP_C_SetDefaultLocation_Params Parms{};

	Parms.bInMainParty = bInMainParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePlayerBP.BattlePlayerBP_C.CoverStepOutForRandom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattlePlayerBP_C::CoverStepOutForRandom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "CoverStepOutForRandom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePlayerBP.BattlePlayerBP_C.ExecuteUbergraph_BattlePlayerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePlayerBP_C::ExecuteUbergraph_BattlePlayerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattlePlayerBP_C", "ExecuteUbergraph_BattlePlayerBP");

	Params::ABattlePlayerBP_C_ExecuteUbergraph_BattlePlayerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


