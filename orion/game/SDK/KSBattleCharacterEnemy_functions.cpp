#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSBattleCharacterEnemy.KSBattleCharacterEnemy_C
// (Actor, Pawn)

class UClass* AKSBattleCharacterEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSBattleCharacterEnemy_C");

	return Clss;
}


// KSBattleCharacterEnemy_C KSBattleCharacterEnemy.Default__KSBattleCharacterEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSBattleCharacterEnemy_C* AKSBattleCharacterEnemy_C::GetDefaultObj()
{
	static class AKSBattleCharacterEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSBattleCharacterEnemy_C*>(AKSBattleCharacterEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetCharmCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCharmCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetCharmCharacter(bool IsCharmCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetCharmCharacter");

	Params::AKSBattleCharacterEnemy_C_SetCharmCharacter_Params Parms{};

	Parms.IsCharmCharacter = IsCharmCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetSyncAnimationCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSyncFrameForParent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSyncFrameForChilds                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetSyncAnimationCharacter(bool IsSyncFrameForParent, bool IsSyncFrameForChilds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetSyncAnimationCharacter");

	Params::AKSBattleCharacterEnemy_C_SetSyncAnimationCharacter_Params Parms{};

	Parms.IsSyncFrameForParent = IsSyncFrameForParent;
	Parms.IsSyncFrameForChilds = IsSyncFrameForChilds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SyncAnimationFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::SyncAnimationFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SyncAnimationFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetCharacterNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCharacterNPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetCharacterNPC(bool IsCharacterNPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetCharacterNPC");

	Params::AKSBattleCharacterEnemy_C_SetCharacterNPC_Params Parms{};

	Parms.IsCharacterNPC = IsCharacterNPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetIdleAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSCharacterAction      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EKSCharacterAction AKSBattleCharacterEnemy_C::GetIdleAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "GetIdleAction");

	Params::AKSBattleCharacterEnemy_C_GetIdleAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetupSpActionType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpAction                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetupSpActionType(bool IsSpAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetupSpActionType");

	Params::AKSBattleCharacterEnemy_C_SetupSpActionType_Params Parms{};

	Parms.IsSpAction = IsSpAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetAtkType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSCharacterAction      Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::GetAtkType(enum class EKSCharacterAction* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "GetAtkType");

	Params::AKSBattleCharacterEnemy_C_GetAtkType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetIdleType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSCharacterAction      Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::GetIdleType(enum class EKSCharacterAction* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "GetIdleType");

	Params::AKSBattleCharacterEnemy_C_GetIdleType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetAtkType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetAtkType(enum class EKSCharacterAction Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetAtkType");

	Params::AKSBattleCharacterEnemy_C_SetAtkType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetIdleType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetIdleType(enum class EKSCharacterAction Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetIdleType");

	Params::AKSBattleCharacterEnemy_C_SetIdleType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.UpdateMaterialInstance
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CustomFlipbookName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::UpdateMaterialInstance(class FName CustomFlipbookName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "UpdateMaterialInstance");

	Params::AKSBattleCharacterEnemy_C_UpdateMaterialInstance_Params Parms{};

	Parms.CustomFlipbookName = CustomFlipbookName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetUpMaterialInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPaperFlipbook*>      OriginalMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AKSBattleCharacterEnemy_C::SetUpMaterialInstance(TArray<class UPaperFlipbook*>& OriginalMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetUpMaterialInstance");

	Params::AKSBattleCharacterEnemy_C_SetUpMaterialInstance_Params Parms{};

	Parms.OriginalMaterial = OriginalMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.IsPlayBattleAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSBattleCharacterEnemy_C::IsPlayBattleAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "IsPlayBattleAction");

	Params::AKSBattleCharacterEnemy_C_IsPlayBattleAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.GetMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECHARACTER_MODE         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECHARACTER_MODE AKSBattleCharacterEnemy_C::GetMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "GetMode");

	Params::AKSBattleCharacterEnemy_C_GetMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetupActionTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         DefaultDirection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetupActionTable(class FName ActionLabel, enum class EKSCharacterDir DefaultDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetupActionTable");

	Params::AKSBattleCharacterEnemy_C_SetupActionTable_Params Parms{};

	Parms.ActionLabel = ActionLabel;
	Parms.DefaultDirection = DefaultDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayActionNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::PlayActionNPC(enum class EKSCharacterAction Action, enum class EKSCharacterDir Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayActionNPC");

	Params::AKSBattleCharacterEnemy_C_PlayActionNPC_Params Parms{};

	Parms.Action = Action;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPaperFlipbook*              PlayFlipbook                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Loop                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::PlayFlipbook(class UPaperFlipbook* PlayFlipbook, bool Loop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayFlipbook");

	Params::AKSBattleCharacterEnemy_C_PlayFlipbook_Params Parms{};

	Parms.PlayFlipbook = PlayFlipbook;
	Parms.Loop = Loop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetAttackFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPaperFlipbook*              NewFlipbook                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetAttackFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetAttackFlipbook");

	Params::AKSBattleCharacterEnemy_C_SetAttackFlipbook_Params Parms{};

	Parms.NewFlipbook = NewFlipbook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetEnemyVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetEnemyVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetEnemyVisible");

	Params::AKSBattleCharacterEnemy_C_SetEnemyVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetPlayDeadActionFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayDeadAction                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetPlayDeadActionFlag(bool PlayDeadAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetPlayDeadActionFlag");

	Params::AKSBattleCharacterEnemy_C_SetPlayDeadActionFlag_Params Parms{};

	Parms.PlayDeadAction = PlayDeadAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetFlipRChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::SetFlipRChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetFlipRChannel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetFlipbook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPaperFlipbook*              NewFlipbook                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetFlipbook");

	Params::AKSBattleCharacterEnemy_C_SetFlipbook_Params Parms{};

	Parms.NewFlipbook = NewFlipbook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.UpdateBillboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::UpdateBillboard(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "UpdateBillboard");

	Params::AKSBattleCharacterEnemy_C_UpdateBillboard_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetStateDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DeadFlag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayDeadAction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetStateDead(bool DeadFlag, bool* PlayDeadAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetStateDead");

	Params::AKSBattleCharacterEnemy_C_SetStateDead_Params Parms{};

	Parms.DeadFlag = DeadFlag;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayDeadAction != nullptr)
		*PlayDeadAction = Parms.PlayDeadAction;

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.InitializeBattleEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::InitializeBattleEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "InitializeBattleEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyActionAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyActionAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyActionAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyActionAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyActionAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyActionAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDeadAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDeadAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDeadAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDeadAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDeadAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDeadAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyFadeInAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyFadeInAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyFadeInAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyFadeInAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyFadeInAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyFadeInAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageRedBlink__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageRedBlink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageRedBlink__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageRedBlink__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageRedBlink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageRedBlink__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_M__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_M__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_M__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_M__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_M__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_M__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageWhiteBlink__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageWhiteBlink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageWhiteBlink__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageWhiteBlink__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageWhiteBlink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageWhiteBlink__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_S__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_S__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_S__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_S__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_S__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_S__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_L__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_L__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_L__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_L__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_L__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_L__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDeadKnockback__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDeadKnockback__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDeadKnockback__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDeadKnockback__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDeadKnockback__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDeadKnockback__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyBreakAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyBreakAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyBreakAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyBreakAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyBreakAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyBreakAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_B__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_B__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_B__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemyDamageVibration_B__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemyDamageVibration_B__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemyDamageVibration_B__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.InvadeMonsterKnockBack__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::InvadeMonsterKnockBack__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "InvadeMonsterKnockBack__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.InvadeMonsterKnockBack__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::InvadeMonsterKnockBack__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "InvadeMonsterKnockBack__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ChangeModeCrossFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::ChangeModeCrossFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ChangeModeCrossFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ChangeModeCrossFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::ChangeModeCrossFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ChangeModeCrossFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ChangeModeTransition__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::ChangeModeTransition__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ChangeModeTransition__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ChangeModeTransition__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::ChangeModeTransition__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ChangeModeTransition__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemySelectedBlinkLoop__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemySelectedBlinkLoop__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemySelectedBlinkLoop__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemySelectedBlinkLoop__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemySelectedBlinkLoop__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemySelectedBlinkLoop__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemySelectedBoostBlinkLoop__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemySelectedBoostBlinkLoop__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemySelectedBoostBlinkLoop__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.EnemySelectedBoostBlinkLoop__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::EnemySelectedBoostBlinkLoop__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "EnemySelectedBoostBlinkLoop__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ReceiveTick");

	Params::AKSBattleCharacterEnemy_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetBattleAlphaMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetBattleAlphaMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetBattleAlphaMode");

	Params::AKSBattleCharacterEnemy_C_SetBattleAlphaMode_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayBattleAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_ACTION_TYPE     BattleAction                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StackClear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::PlayBattleAction(enum class EBATTLE_ACTION_TYPE BattleAction, bool StackClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayBattleAction");

	Params::AKSBattleCharacterEnemy_C_PlayBattleAction_Params Parms{};

	Parms.BattleAction = BattleAction;
	Parms.StackClear = StackClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDamageRedBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayDamageRedBlink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDamageRedBlink");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDamageVibration_M
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayDamageVibration_M()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDamageVibration_M");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDamageWhiteBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayDamageWhiteBlink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDamageWhiteBlink");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDamageVibration_S
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayDamageVibration_S()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDamageVibration_S");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDamageVibration_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayDamageVibration_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDamageVibration_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDeadKnockBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DefaultPosition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::PlayDeadKnockBack(const struct FVector& DefaultPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDeadKnockBack");

	Params::AKSBattleCharacterEnemy_C_PlayDeadKnockBack_Params Parms{};

	Parms.DefaultPosition = DefaultPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayEnemyBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayEnemyBlink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayEnemyBlink");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayBreakAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Break                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::PlayBreakAnimation(bool Break)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayBreakAnimation");

	Params::AKSBattleCharacterEnemy_C_PlayBreakAnimation_Params Parms{};

	Parms.Break = Break;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SuspendBreakAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::SuspendBreakAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SuspendBreakAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ResumeBreakAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::ResumeBreakAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ResumeBreakAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayDamageVibration_B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::PlayDamageVibration_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayDamageVibration_B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.Debug_SetUIPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::Debug_SetUIPosition(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "Debug_SetUIPosition");

	Params::AKSBattleCharacterEnemy_C_Debug_SetUIPosition_Params Parms{};

	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetDamageAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetDamageAction(enum class EBATTLE_DAMAGE_TYPE DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetDamageAction");

	Params::AKSBattleCharacterEnemy_C_SetDamageAction_Params Parms{};

	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.CharacterRespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::CharacterRespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "CharacterRespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayCallEnemyEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DefaultPosition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::PlayCallEnemyEnter(const struct FVector& DefaultPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayCallEnemyEnter");

	Params::AKSBattleCharacterEnemy_C_PlayCallEnemyEnter_Params Parms{};

	Parms.DefaultPosition = DefaultPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayInvadeMonsterReturn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayerSide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::PlayInvadeMonsterReturn(bool IsPlayerSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayInvadeMonsterReturn");

	Params::AKSBattleCharacterEnemy_C_PlayInvadeMonsterReturn_Params Parms{};

	Parms.IsPlayerSide = IsPlayerSide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayInvadeMonsterEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayerSide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::PlayInvadeMonsterEnter(bool IsPlayerSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayInvadeMonsterEnter");

	Params::AKSBattleCharacterEnemy_C_PlayInvadeMonsterEnter_Params Parms{};

	Parms.IsPlayerSide = IsPlayerSide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayCharacterAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StackClear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::PlayCharacterAction(enum class EKSCharacterAction Label, enum class EKSCharacterDir Direction, bool StackClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayCharacterAction");

	Params::AKSBattleCharacterEnemy_C_PlayCharacterAction_Params Parms{};

	Parms.Label = Label;
	Parms.Direction = Direction;
	Parms.StackClear = StackClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.NPCActionTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::NPCActionTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "NPCActionTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetCharacterOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetCharacterOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetCharacterOpacity");

	Params::AKSBattleCharacterEnemy_C_SetCharacterOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayChangeModeFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::PlayChangeModeFade(class ABattleCharacterBase* OwnerCharacter, class FName NewActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayChangeModeFade");

	Params::AKSBattleCharacterEnemy_C_PlayChangeModeFade_Params Parms{};

	Parms.OwnerCharacter = OwnerCharacter;
	Parms.NewActionLabel = NewActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.PlayChangeModeTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewActionLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::PlayChangeModeTransition(class ABattleCharacterBase* OwnerCharacter, class FName NewActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "PlayChangeModeTransition");

	Params::AKSBattleCharacterEnemy_C_PlayChangeModeTransition_Params Parms{};

	Parms.OwnerCharacter = OwnerCharacter;
	Parms.NewActionLabel = NewActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetWeaponEmissiveChannel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::SetWeaponEmissiveChannel(enum class EWEAPON_CATEGORY WeaponCategory, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetWeaponEmissiveChannel");

	Params::AKSBattleCharacterEnemy_C_SetWeaponEmissiveChannel_Params Parms{};

	Parms.WeaponCategory = WeaponCategory;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.FinishCallbackLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSBattleCharacterEnemy_C::FinishCallbackLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "FinishCallbackLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.SetBattleSelectMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Boost                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSBattleCharacterEnemy_C::SetBattleSelectMaterial(bool Select, bool Boost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "SetBattleSelectMaterial");

	Params::AKSBattleCharacterEnemy_C_SetBattleSelectMaterial_Params Parms{};

	Parms.Select = Select;
	Parms.Boost = Boost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSBattleCharacterEnemy.KSBattleCharacterEnemy_C.ExecuteUbergraph_KSBattleCharacterEnemy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSBattleCharacterEnemy_C::ExecuteUbergraph_KSBattleCharacterEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSBattleCharacterEnemy_C", "ExecuteUbergraph_KSBattleCharacterEnemy");

	Params::AKSBattleCharacterEnemy_C_ExecuteUbergraph_KSBattleCharacterEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


