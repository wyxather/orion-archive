#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ActionCommandSequenceTemplate.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C ActionCommandSequenceTemplate.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.WeaponChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::WeaponChange(enum class EWEAPON_CATEGORY WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WeaponChange");

	Params::USequenceDirector_C_WeaponChange_Params Parms{};

	Parms.WeaponType = WeaponType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecSpecialAilment
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ExecSpecialAilment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecSpecialAilment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    UniqueCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      UniqueActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExceptEnforcer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::PlayAction(class ABattleCharacterBase* Character, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool ExceptEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayAction");

	Params::USequenceDirector_C_PlayAction_Params Parms{};

	Parms.Character = Character;
	Parms.BattleActionID = BattleActionID;
	Parms.UniqueCharaID = UniqueCharaID;
	Parms.UniqueActionID = UniqueActionID;
	Parms.ExceptEnforcer = ExceptEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.JumpToFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::JumpToFrame(int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "JumpToFrame");

	Params::USequenceDirector_C_JumpToFrame_Params Parms{};

	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.RandomJumpToFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::RandomJumpToFrame(float Rate, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "RandomJumpToFrame");

	Params::USequenceDirector_C_RandomJumpToFrame_Params Parms{};

	Parms.Rate = Rate;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckCounter(int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckCounter");

	Params::USequenceDirector_C_CheckCounter_Params Parms{};

	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PatternB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckPattern2(int32 PatternB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckPattern2");

	Params::USequenceDirector_C_CheckPattern2_Params Parms{};

	Parms.PatternB = PatternB;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PatternB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PatternC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckPattern3(int32 PatternB, int32 PatternC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckPattern3");

	Params::USequenceDirector_C_CheckPattern3_Params Parms{};

	Parms.PatternB = PatternB;
	Parms.PatternC = PatternC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayWeaponAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayWeaponAttack(class ABattleCharacterBase* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayWeaponAttack");

	Params::USequenceDirector_C_PlayWeaponAttack_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.SetMaterialParameter_Float
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEmitter*                    Particle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SetMaterialParameter_Float(class AEmitter* Particle, class FName ParameterName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "SetMaterialParameter_Float");

	Params::USequenceDirector_C_SetMaterialParameter_Float_Params Parms{};

	Parms.Particle = Particle;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.SetMaterialParameter_Vector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEmitter*                    Particle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SetMaterialParameter_Vector(class AEmitter* Particle, class FName ParameterName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "SetMaterialParameter_Vector");

	Params::USequenceDirector_C_SetMaterialParameter_Vector_Params Parms{};

	Parms.Particle = Particle;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.RegisterOnHitSE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::RegisterOnHitSE(class FName SEID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "RegisterOnHitSE");

	Params::USequenceDirector_C_RegisterOnHitSE_Params Parms{};

	Parms.SEID = SEID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayAbilitySEByIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayAbilitySEByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayAbilitySEByIndex");

	Params::USequenceDirector_C_PlayAbilitySEByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.JumpToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::JumpToMarker(const class FString& Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "JumpToMarker");

	Params::USequenceDirector_C_JumpToMarker_Params Parms{};

	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.RandomJumpToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::RandomJumpToMarker(float Rate, const class FString& Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "RandomJumpToMarker");

	Params::USequenceDirector_C_RandomJumpToMarker_Params Parms{};

	Parms.Rate = Rate;
	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckCounterToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckCounterToMarker(const class FString& Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckCounterToMarker");

	Params::USequenceDirector_C_CheckCounterToMarker_Params Parms{};

	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern2 ToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PatternB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckPattern2_ToMarker(const class FString& PatternB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckPattern2 ToMarker");

	Params::USequenceDirector_C_CheckPattern2_ToMarker_Params Parms{};

	Parms.PatternB = PatternB;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckPattern3 ToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PatternB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PatternC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckPattern3_ToMarker(const class FString& PatternB, const class FString& PatternC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckPattern3 ToMarker");

	Params::USequenceDirector_C_CheckPattern3_ToMarker_Params Parms{};

	Parms.PatternB = PatternB;
	Parms.PatternC = PatternC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecSummonCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SummonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Random                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ExecSummonCharacter(int32 SummonIndex, bool Random)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecSummonCharacter");

	Params::USequenceDirector_C_ExecSummonCharacter_Params Parms{};

	Parms.SummonIndex = SummonIndex;
	Parms.Random = Random;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecSummonAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SummonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecSummonAbility(int32 SummonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecSummonAbility");

	Params::USequenceDirector_C_ExecSummonAbility_Params Parms{};

	Parms.SummonIndex = SummonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ReturnSummonCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ReturnSummonCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ReturnSummonCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.WaitSummonAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitSummonAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitSummonAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelGreater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContainEqual                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckBoostLevelGreater(int32 BoostLevel, bool ContainEqual, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckBoostLevelGreater");

	Params::USequenceDirector_C_CheckBoostLevelGreater_Params Parms{};

	Parms.BoostLevel = BoostLevel;
	Parms.ContainEqual = ContainEqual;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelGreaterToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContainEqual                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckBoostLevelGreaterToMarker(int32 BoostLevel, bool ContainEqual, const class FString& Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckBoostLevelGreaterToMarker");

	Params::USequenceDirector_C_CheckBoostLevelGreaterToMarker_Params Parms{};

	Parms.BoostLevel = BoostLevel;
	Parms.ContainEqual = ContainEqual;
	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelLess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BorderLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContainEqual                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckBoostLevelLess(int32 BorderLevel, bool ContainEqual, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckBoostLevelLess");

	Params::USequenceDirector_C_CheckBoostLevelLess_Params Parms{};

	Parms.BorderLevel = BorderLevel;
	Parms.ContainEqual = ContainEqual;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckBoostLevelLessToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BorderLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContainEqual                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckBoostLevelLessToMarker(int32 BorderLevel, bool ContainEqual, const class FString& Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckBoostLevelLessToMarker");

	Params::USequenceDirector_C_CheckBoostLevelLessToMarker_Params Parms{};

	Parms.BorderLevel = BorderLevel;
	Parms.ContainEqual = ContainEqual;
	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibrationID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVibrationPower         Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayVibration(class FName VibrationID, enum class EVibrationPower Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayVibration");

	Params::USequenceDirector_C_PlayVibration_Params Parms{};

	Parms.VibrationID = VibrationID;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecAilmentWithAbilityHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllAilment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ExecAilmentWithAbilityHit(int32 Index, bool AllAilment, bool LastHit, bool OnHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecAilmentWithAbilityHit");

	Params::USequenceDirector_C_ExecAilmentWithAbilityHit_Params Parms{};

	Parms.Index = Index;
	Parms.AllAilment = AllAilment;
	Parms.LastHit = LastHit;
	Parms.OnHit = OnHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckAbilityHitToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckAbilityHitToMarker(bool OnHit, const class FString& Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckAbilityHitToMarker");

	Params::USequenceDirector_C_CheckAbilityHitToMarker_Params Parms{};

	Parms.OnHit = OnHit;
	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckAbilityHitToFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckAbilityHitToFrame(bool OnHit, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckAbilityHitToFrame");

	Params::USequenceDirector_C_CheckAbilityHitToFrame_Params Parms{};

	Parms.OnHit = OnHit;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlaySE WithAbilityHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::PlaySE_WithAbilityHit(class FName SEID, bool OnHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlaySE WithAbilityHit");

	Params::USequenceDirector_C_PlaySE_WithAbilityHit_Params Parms{};

	Parms.SEID = SEID;
	Parms.OnHit = OnHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayVoice WithAbilityHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      VoiceType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    UniqueCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_VOICE_TYPE      UniqueVoiceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::PlayVoice_WithAbilityHit(enum class EBATTLE_VOICE_TYPE VoiceType, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceType, bool OnHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayVoice WithAbilityHit");

	Params::USequenceDirector_C_PlayVoice_WithAbilityHit_Params Parms{};

	Parms.VoiceType = VoiceType;
	Parms.UniqueCharaID = UniqueCharaID;
	Parms.UniqueVoiceType = UniqueVoiceType;
	Parms.OnHit = OnHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayAbilitySE WithAbilityHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::PlayAbilitySE_WithAbilityHit(int32 Index, bool OnHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayAbilitySE WithAbilityHit");

	Params::USequenceDirector_C_PlayAbilitySE_WithAbilityHit_Params Parms{};

	Parms.Index = Index;
	Parms.OnHit = OnHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayActionWithAbilityHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    UniqueCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      UniqueActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::PlayActionWithAbilityHit(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool OnHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayActionWithAbilityHit");

	Params::USequenceDirector_C_PlayActionWithAbilityHit_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.BattleActionID = BattleActionID;
	Parms.UniqueCharaID = UniqueCharaID;
	Parms.UniqueActionID = UniqueActionID;
	Parms.OnHit = OnHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayVoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      VoiceType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    UniqueCharaID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_VOICE_TYPE      UniqueVoiceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayVoice(enum class EBATTLE_VOICE_TYPE VoiceType, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayVoice");

	Params::USequenceDirector_C_PlayVoice_Params Parms{};

	Parms.VoiceType = VoiceType;
	Parms.UniqueCharaID = UniqueCharaID;
	Parms.UniqueVoiceType = UniqueVoiceType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecStepCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ExecStepCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecStepCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlaySE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlaySE(class FName SEID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlaySE");

	Params::USequenceDirector_C_PlaySE_Params Parms{};

	Parms.SEID = SEID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.HideInfomation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::HideInfomation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "HideInfomation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckDismantlingPattern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HPRecovery                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SPRecovery                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BPRecovery                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Buff                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckDismantlingPattern(int32 HPRecovery, int32 SPRecovery, int32 BPRecovery, int32 Buff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckDismantlingPattern");

	Params::USequenceDirector_C_CheckDismantlingPattern_Params Parms{};

	Parms.HPRecovery = HPRecovery;
	Parms.SPRecovery = SPRecovery;
	Parms.BPRecovery = BPRecovery;
	Parms.Buff = Buff;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CheckDismantlingPatternToMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      HPRecovery                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SPRecovery                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BPRecovery                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Buff                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USequenceDirector_C::CheckDismantlingPatternToMarker(const class FString& HPRecovery, const class FString& SPRecovery, const class FString& BPRecovery, const class FString& Buff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CheckDismantlingPatternToMarker");

	Params::USequenceDirector_C_CheckDismantlingPatternToMarker_Params Parms{};

	Parms.HPRecovery = HPRecovery;
	Parms.SPRecovery = SPRecovery;
	Parms.BPRecovery = BPRecovery;
	Parms.Buff = Buff;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlaySessionAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlaySessionAction(enum class EKSCharacterAction BattleActionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlaySessionAction");

	Params::USequenceDirector_C_PlaySessionAction_Params Parms{};

	Parms.BattleActionID = BattleActionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecSessionAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ExecSessionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecSessionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.WaitSessionAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitSessionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitSessionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.StartCharacterWarp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PositionOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::StartCharacterWarp(const struct FVector& PositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "StartCharacterWarp");

	Params::USequenceDirector_C_StartCharacterWarp_Params Parms{};

	Parms.PositionOffset = PositionOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.EndCharacterWarp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::EndCharacterWarp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "EndCharacterWarp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayBusinessSupportAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayBusinessSupportAction(enum class EKSCharacterAction BattleActionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayBusinessSupportAction");

	Params::USequenceDirector_C_PlayBusinessSupportAction_Params Parms{};

	Parms.BattleActionID = BattleActionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CallBusinessSupporter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::CallBusinessSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CallBusinessSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ReturnBusinessSupporter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ReturnBusinessSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ReturnBusinessSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.WaitBusinessSupporter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitBusinessSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitBusinessSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ShowInfomation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ShowInfomation(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ShowInfomation");

	Params::USequenceDirector_C_ShowInfomation_Params Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ShowBusinessSupportInfomation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ShowBusinessSupportInfomation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ShowBusinessSupportInfomation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.WaitEnemyAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitEnemyAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitEnemyAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.PlayActionForSelfOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleSelfActionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleOtherActionID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bExceptEnforcer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::PlayActionForSelfOnly(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleSelfActionID, enum class EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayActionForSelfOnly");

	Params::USequenceDirector_C_PlayActionForSelfOnly_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.BattleSelfActionID = BattleSelfActionID;
	Parms.BattleOtherActionID = BattleOtherActionID;
	Parms.bExceptEnforcer = bExceptEnforcer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.CallSessionSupporter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::CallSessionSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CallSessionSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.WaitSessionSupporter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitSessionSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitSessionSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ReturnSessionSupporter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ReturnSessionSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ReturnSessionSupporter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecAilment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllAilment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ExecAilment(int32 Index, bool AllAilment, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecAilment");

	Params::USequenceDirector_C_ExecAilment_Params Parms{};

	Parms.Index = Index;
	Parms.AllAilment = AllAilment;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecPlayDiseaseMissUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ExecPlayDiseaseMissUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecPlayDiseaseMissUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionCommandSequenceTemplate.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


