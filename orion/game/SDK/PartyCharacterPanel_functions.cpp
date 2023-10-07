#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PartyCharacterPanel.PartyCharacterPanel_C
// (None)

class UClass* UPartyCharacterPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyCharacterPanel_C");

	return Clss;
}


// PartyCharacterPanel_C PartyCharacterPanel.Default__PartyCharacterPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartyCharacterPanel_C* UPartyCharacterPanel_C::GetDefaultObj()
{
	static class UPartyCharacterPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyCharacterPanel_C*>(UPartyCharacterPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::SetCursorVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetCursorVisibility");

	Params::UPartyCharacterPanel_C_SetCursorVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.GroupingAnimations
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::GroupingAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "GroupingAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.StopParamAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::StopParamAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "StopParamAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibleEquipmentInfo_Innner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShowCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetVisibleEquipmentInfo_Innner(int32 ShowCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetVisibleEquipmentInfo_Innner");

	Params::UPartyCharacterPanel_C_SetVisibleEquipmentInfo_Innner_Params Parms{};

	Parms.ShowCount = ShowCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.StartShowParamAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::StartShowParamAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "StartShowParamAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayParamFadeInFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::PlayParamFadeInFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayParamFadeInFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayParamFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::PlayParamFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayParamFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.ParamFadeOutFinishCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::ParamFadeOutFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "ParamFadeOutFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayParamFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::PlayParamFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayParamFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.ResetBeforeAfterData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::ResetBeforeAfterData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "ResetBeforeAfterData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetEquipmentInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_ITEM_PARAM   ParamType                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParamBefore                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParamAfter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyCharacterPanel_C::SetEquipmentInfo(int32 Index, enum class EEQUIPMENT_ITEM_PARAM ParamType, int32 ParamBefore, int32 ParamAfter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetEquipmentInfo");

	Params::UPartyCharacterPanel_C_SetEquipmentInfo_Params Parms{};

	Parms.Index = Index;
	Parms.ParamType = ParamType;
	Parms.ParamBefore = ParamBefore;
	Parms.ParamAfter = ParamAfter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.IsPlayingItemAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::IsPlayingItemAnimation(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "IsPlayingItemAnimation");

	Params::UPartyCharacterPanel_C_IsPlayingItemAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetPotentialityEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetPotentialityEffect(enum class EPlayableCharacterID PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetPotentialityEffect");

	Params::UPartyCharacterPanel_C_SetPotentialityEffect_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayPotentialHealAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::PlayPotentialHealAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayPotentialHealAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCharacterData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyCharacterPanel_C::SetCharacterData(struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetCharacterData");

	Params::UPartyCharacterPanel_C_SetCharacterData_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Decide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.OutFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::OutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "OutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Focus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.IsVisibileLockIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::IsVisibileLockIcon(bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "IsVisibileLockIcon");

	Params::UPartyCharacterPanel_C_IsVisibileLockIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.StopHealAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::StopHealAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "StopHealAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetHpSpRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetHpSpRange(int32 Min, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetHpSpRange");

	Params::UPartyCharacterPanel_C_SetHpSpRange_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibilityLockIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::SetVisibilityLockIcon(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetVisibilityLockIcon");

	Params::UPartyCharacterPanel_C_SetVisibilityLockIcon_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayMPHealAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::PlayMPHealAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayMPHealAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.IsAnimationPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::IsAnimationPlay(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "IsAnimationPlay");

	Params::UPartyCharacterPanel_C_IsAnimationPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.FormationChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::FormationChange(bool IsInAnim, bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "FormationChange");

	Params::UPartyCharacterPanel_C_FormationChange_Params Parms{};

	Parms.IsInAnim = IsInAnim;
	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Decide_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::Decide_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Decide_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCharacterColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPARTY_PANEL_CHARA_COLOR_TYPENewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetCharacterColor(enum class EPARTY_PANEL_CHARA_COLOR_TYPE NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetCharacterColor");

	Params::UPartyCharacterPanel_C_SetCharacterColor_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SwitchDisplayInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStatus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::SwitchDisplayInfo(bool IsStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SwitchDisplayInfo");

	Params::UPartyCharacterPanel_C_SwitchDisplayInfo_Params Parms{};

	Parms.IsStatus = IsStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetFlipbookAppealByHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::SetFlipbookAppealByHP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetFlipbookAppealByHP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetFlipbookWaitByHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::SetFlipbookWaitByHP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetFlipbookWaitByHP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayFlipbookAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EKSCharacterAction      ActionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   DrawSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::PlayFlipbookAnim(struct FSavePlayerCharacterData& CharacterData, enum class EKSCharacterAction ActionID, enum class EKSCharacterDir ActionDir, bool IsLoop, const struct FVector2D& DrawSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayFlipbookAnim");

	Params::UPartyCharacterPanel_C_PlayFlipbookAnim_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.ActionID = ActionID;
	Parms.ActionDir = ActionDir;
	Parms.IsLoop = IsLoop;
	Parms.DrawSize = DrawSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.IsHealAnimStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyCharacterPanel_C::IsHealAnimStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "IsHealAnimStop");

	Params::UPartyCharacterPanel_C_IsHealAnimStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.PlayHealAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::PlayHealAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "PlayHealAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Play Anim Intetrnal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::Play_Anim_Intetrnal(class UWidgetAnimation* InAnimation, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Play Anim Intetrnal");

	Params::UPartyCharacterPanel_C_Play_Anim_Intetrnal_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetMPData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetMPData(int32 Value, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetMPData");

	Params::UPartyCharacterPanel_C_SetMPData_Params Parms{};

	Parms.Value = Value;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetHPData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetHPData(int32 Value, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetHPData");

	Params::UPartyCharacterPanel_C_SetHPData_Params Parms{};

	Parms.Value = Value;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetCharacterData_BP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UPartyCharacterPanel_C::SetCharacterData_BP(const struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetCharacterData_BP");

	Params::UPartyCharacterPanel_C_SetCharacterData_BP_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.OutFocus_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::OutFocus_BP(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "OutFocus_BP");

	Params::UPartyCharacterPanel_C_OutFocus_BP_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Focus_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::Focus_BP(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Focus_BP");

	Params::UPartyCharacterPanel_C_Focus_BP_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetParamRange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ParamMin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParamMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetParamRange(int32 ParamMin, int32 ParamMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetParamRange");

	Params::UPartyCharacterPanel_C_SetParamRange_Params Parms{};

	Parms.ParamMin = ParamMin;
	Parms.ParamMax = ParamMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetEquipmentAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanEquip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::SetEquipmentAnim(bool CanEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetEquipmentAnim");

	Params::UPartyCharacterPanel_C_SetEquipmentAnim_Params Parms{};

	Parms.CanEquip = CanEquip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibleEquipIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyCharacterPanel_C::SetVisibleEquipIcon(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetVisibleEquipIcon");

	Params::UPartyCharacterPanel_C_SetVisibleEquipIcon_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyCharacterPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.SetVisibleEquipmentInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShowCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::SetVisibleEquipmentInfo(int32 ShowCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "SetVisibleEquipmentInfo");

	Params::UPartyCharacterPanel_C_SetVisibleEquipmentInfo_Params Parms{};

	Parms.ShowCount = ShowCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "Tick");

	Params::UPartyCharacterPanel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyCharacterPanel.PartyCharacterPanel_C.ExecuteUbergraph_PartyCharacterPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyCharacterPanel_C::ExecuteUbergraph_PartyCharacterPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PartyCharacterPanel_C", "ExecuteUbergraph_PartyCharacterPanel");

	Params::UPartyCharacterPanel_C_ExecuteUbergraph_PartyCharacterPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


