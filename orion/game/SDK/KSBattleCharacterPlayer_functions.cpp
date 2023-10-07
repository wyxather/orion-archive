#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSBattleCharacterPlayer.KSBattleCharacterPlayer_C
// (Actor, Pawn)

class UClass* AKSBattleCharacterPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSBattleCharacterPlayer_C");

	return Clss;
}


// KSBattleCharacterPlayer_C KSBattleCharacterPlayer.Default__KSBattleCharacterPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSBattleCharacterPlayer_C* AKSBattleCharacterPlayer_C::GetDefaultObj()
{
	static class AKSBattleCharacterPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSBattleCharacterPlayer_C*>(AKSBattleCharacterPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ResetLatestAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::ResetLatestAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "ResetLatestAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.InitializeForMasquerade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::InitializeForMasquerade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "InitializeForMasquerade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetBaseJobActionLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BaseJobLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetBaseJobActionLabel(class FName BaseJobLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetBaseJobActionLabel");

	Params::AKSBattleCharacterPlayer_C_SetBaseJobActionLabel_Params Parms{};

	Parms.BaseJobLabel = BaseJobLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateGuard
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Guard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateGuard(bool Guard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateGuard");

	Params::AKSBattleCharacterPlayer_C_SetStateGuard_Params Parms{};

	Parms.Guard = Guard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateCommandSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CommandSelectFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PreparationFlag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayForceIdle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateCommandSelect(bool CommandSelectFlag, bool PreparationFlag, bool PlayForceIdle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateCommandSelect");

	Params::AKSBattleCharacterPlayer_C_SetStateCommandSelect_Params Parms{};

	Parms.CommandSelectFlag = CommandSelectFlag;
	Parms.PreparationFlag = PreparationFlag;
	Parms.PlayForceIdle = PlayForceIdle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateChargeAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChargeFlag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateChargeAction(bool ChargeFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateChargeAction");

	Params::AKSBattleCharacterPlayer_C_SetStateChargeAction_Params Parms{};

	Parms.ChargeFlag = ChargeFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateGuardSP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GuardSPFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateGuardSP(bool GuardSPFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateGuardSP");

	Params::AKSBattleCharacterPlayer_C_SetStateGuardSP_Params Parms{};

	Parms.GuardSPFlag = GuardSPFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.GetDefaultWarpTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  DefaultWarpTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::GetDefaultWarpTransform(struct FTransform* DefaultWarpTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "GetDefaultWarpTransform");

	Params::AKSBattleCharacterPlayer_C_GetDefaultWarpTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DefaultWarpTransform != nullptr)
		*DefaultWarpTransform = std::move(Parms.DefaultWarpTransform);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetDefaultWarpTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  DefaultWarpTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetDefaultWarpTransform(const struct FTransform& DefaultWarpTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetDefaultWarpTransform");

	Params::AKSBattleCharacterPlayer_C_SetDefaultWarpTransform_Params Parms{};

	Parms.DefaultWarpTransform = DefaultWarpTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NPCFlag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWEAPON_CATEGORY        EquipWeaponType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetCharacterNPC(bool NPCFlag, enum class EWEAPON_CATEGORY EquipWeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetCharacterNPC");

	Params::AKSBattleCharacterPlayer_C_SetCharacterNPC_Params Parms{};

	Parms.NPCFlag = NPCFlag;
	Parms.EquipWeaponType = EquipWeaponType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.GetMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECHARACTER_MODE         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECHARACTER_MODE AKSBattleCharacterPlayer_C::GetMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "GetMode");

	Params::AKSBattleCharacterPlayer_C_GetMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateLevelup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLevelup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateLevelup(bool IsLevelup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateLevelup");

	Params::AKSBattleCharacterPlayer_C_SetStateLevelup_Params Parms{};

	Parms.IsLevelup = IsLevelup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateVictory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVictory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateVictory(bool IsVictory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateVictory");

	Params::AKSBattleCharacterPlayer_C_SetStateVictory_Params Parms{};

	Parms.IsVictory = IsVictory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetEquipWeaponType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetEquipWeaponType(enum class EWEAPON_CATEGORY WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetEquipWeaponType");

	Params::AKSBattleCharacterPlayer_C_SetEquipWeaponType_Params Parms{};

	Parms.WeaponType = WeaponType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.Set State Potentiality Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPotentialityAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                EffectColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::Set_State_Potentiality_Action(bool IsPotentialityAction, const struct FLinearColor& EffectColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "Set State Potentiality Action");

	Params::AKSBattleCharacterPlayer_C_Set_State_Potentiality_Action_Params Parms{};

	Parms.IsPotentialityAction = IsPotentialityAction;
	Parms.EffectColor = EffectColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetCharacterVisible(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetCharacterVisible");

	Params::AKSBattleCharacterPlayer_C_SetCharacterVisible_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.Set State Harden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HardenFlag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::Set_State_Harden(bool HardenFlag, enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "Set State Harden");

	Params::AKSBattleCharacterPlayer_C_Set_State_Harden_Params Parms{};

	Parms.HardenFlag = HardenFlag;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateDisease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DiseaseFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateDisease(bool DiseaseFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateDisease");

	Params::AKSBattleCharacterPlayer_C_SetStateDisease_Params Parms{};

	Parms.DiseaseFlag = DiseaseFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetCharacterAlpha(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetCharacterAlpha");

	Params::AKSBattleCharacterPlayer_C_SetCharacterAlpha_Params Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetupActionTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetupActionTable(class FName ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetupActionTable");

	Params::AKSBattleCharacterPlayer_C_SetupActionTable_Params Parms{};

	Parms.ActionLabel = ActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ClearActionStack
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::ClearActionStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "ClearActionStack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PopActionStack
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EKSCharacterAction      PopAction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::PopActionStack(bool* Result, enum class EKSCharacterAction* PopAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PopActionStack");

	Params::AKSBattleCharacterPlayer_C_PopActionStack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (PopAction != nullptr)
		*PopAction = Parms.PopAction;

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PushActionStack
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::PushActionStack(enum class EKSCharacterAction Action, enum class EKSCharacterDir Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PushActionStack");

	Params::AKSBattleCharacterPlayer_C_PushActionStack_Params Parms{};

	Parms.Action = Action;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.GetIdle
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Action                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::GetIdle(enum class EKSCharacterAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "GetIdle");

	Params::AKSBattleCharacterPlayer_C_GetIdle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayActionLocal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::PlayActionLocal(enum class EKSCharacterAction Action, enum class EKSCharacterDir Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayActionLocal");

	Params::AKSBattleCharacterPlayer_C_PlayActionLocal_Params Parms{};

	Parms.Action = Action;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DeadFlag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStateDead(bool DeadFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateDead");

	Params::AKSBattleCharacterPlayer_C_SetStateDead_Params Parms{};

	Parms.DeadFlag = DeadFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStatePinch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PinchFlag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetStatePinch(bool PinchFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStatePinch");

	Params::AKSBattleCharacterPlayer_C_SetStatePinch_Params Parms{};

	Parms.PinchFlag = PinchFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ClearActionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::ClearActionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "ClearActionState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::IsPlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "IsPlaying");

	Params::AKSBattleCharacterPlayer_C_IsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.HardenDeadFadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::HardenDeadFadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "HardenDeadFadeOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.HardenDeadFadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::HardenDeadFadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "HardenDeadFadeOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayerSelectedAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayerSelectedAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayerSelectedAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayerSelectedAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayerSelectedAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayerSelectedAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayerBoostSelectedAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayerBoostSelectedAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayerBoostSelectedAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayerBoostSelectedAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayerBoostSelectedAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayerBoostSelectedAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.StartPotentialityActionEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::StartPotentialityActionEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "StartPotentialityActionEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.StartPotentialityActionEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::StartPotentialityActionEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "StartPotentialityActionEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.LoopPotentialityActionEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::LoopPotentialityActionEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "LoopPotentialityActionEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.LoopPotentialityActionEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::LoopPotentialityActionEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "LoopPotentialityActionEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "ReceiveTick");

	Params::AKSBattleCharacterPlayer_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetBattleSelectMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetBattleSelectMaterial(bool Select, bool Boost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetBattleSelectMaterial");

	Params::AKSBattleCharacterPlayer_C_SetBattleSelectMaterial_Params Parms{};

	Parms.Select = Select;
	Parms.Boost = Boost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayBattleAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_ACTION_TYPE     BattleAction                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StackClear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::PlayBattleAction(enum class EBATTLE_ACTION_TYPE BattleAction, bool StackClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayBattleAction");

	Params::AKSBattleCharacterPlayer_C_PlayBattleAction_Params Parms{};

	Parms.BattleAction = BattleAction;
	Parms.StackClear = StackClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetStateBoost
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetStateBoost(int32 BoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetStateBoost");

	Params::AKSBattleCharacterPlayer_C_SetStateBoost_Params Parms{};

	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayCharacterAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StackClear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::PlayCharacterAction(enum class EKSCharacterAction Label, enum class EKSCharacterDir Direction, bool StackClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayCharacterAction");

	Params::AKSBattleCharacterPlayer_C_PlayCharacterAction_Params Parms{};

	Parms.Label = Label;
	Parms.Direction = Direction;
	Parms.StackClear = StackClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetEnablePlayAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetEnablePlayAction(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetEnablePlayAction");

	Params::AKSBattleCharacterPlayer_C_SetEnablePlayAction_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayHardenDeadFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayHardenDeadFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayHardenDeadFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayStartPotentialityActionEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayStartPotentialityActionEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayStartPotentialityActionEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.PlayLoopPotentialityActionEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::PlayLoopPotentialityActionEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "PlayLoopPotentialityActionEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.StopPotentialityActionEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::StopPotentialityActionEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "StopPotentialityActionEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.OnAnimationFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterPlayer_C::OnAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "OnAnimationFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetCharacterOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WithCanoe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetCharacterOpacity(float Opacity, bool WithCanoe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetCharacterOpacity");

	Params::AKSBattleCharacterPlayer_C_SetCharacterOpacity_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.WithCanoe = WithCanoe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetPotentialityActionBodyColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetPotentialityActionBodyColor(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetPotentialityActionBodyColor");

	Params::AKSBattleCharacterPlayer_C_SetPotentialityActionBodyColor_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetPotentialityActionEyesColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::SetPotentialityActionEyesColor(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetPotentialityActionEyesColor");

	Params::AKSBattleCharacterPlayer_C_SetPotentialityActionEyesColor_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.SetEnableWonderAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterPlayer_C::SetEnableWonderAction(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "SetEnableWonderAction");

	Params::AKSBattleCharacterPlayer_C_SetEnableWonderAction_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterPlayer.KSBattleCharacterPlayer_C.ExecuteUbergraph_KSBattleCharacterPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterPlayer_C::ExecuteUbergraph_KSBattleCharacterPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterPlayer_C", "ExecuteUbergraph_KSBattleCharacterPlayer");

	Params::AKSBattleCharacterPlayer_C_ExecuteUbergraph_KSBattleCharacterPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


