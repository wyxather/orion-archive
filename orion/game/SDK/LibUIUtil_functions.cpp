#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibUIUtil.LibUIUtil_C
// (None)

class UClass* ULibUIUtil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibUIUtil_C");

	return Clss;
}


// LibUIUtil_C LibUIUtil.Default__LibUIUtil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibUIUtil_C* ULibUIUtil_C::GetDefaultObj()
{
	static class ULibUIUtil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibUIUtil_C*>(ULibUIUtil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibUIUtil.LibUIUtil_C.SpActMerchantResutToText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSpActMerchantResult        SpActMerchantResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)

void ULibUIUtil_C::SpActMerchantResutToText(struct FSpActMerchantResult& SpActMerchantResult, class UObject* __WorldContext, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SpActMerchantResutToText");

	Params::ULibUIUtil_C_SpActMerchantResutToText_Params Parms{};

	Parms.SpActMerchantResult = SpActMerchantResult;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function LibUIUtil.LibUIUtil_C.Is Check Use Field Command
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlacementData              PlacementData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::Is_Check_Use_Field_Command(const struct FPlacementData& PlacementData, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "Is Check Use Field Command");

	Params::ULibUIUtil_C_Is_Check_Use_Field_Command_Params Parms{};

	Parms.PlacementData = PlacementData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function LibUIUtil.LibUIUtil_C.MakeEquipmentDetailText
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewParam                                                         (Parm, OutParm)

void ULibUIUtil_C::MakeEquipmentDetailText(const struct FItemData& ItemData, int32 CharacterID, bool InvMinus, class UObject* __WorldContext, class FText* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "MakeEquipmentDetailText");

	Params::ULibUIUtil_C_MakeEquipmentDetailText_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CharacterID = CharacterID;
	Parms.InvMinus = InvMinus;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function LibUIUtil.LibUIUtil_C.MakeItemDetailText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvMinus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void ULibUIUtil_C::MakeItemDetailText(const struct FItemData& ItemData, int32 CharacterID, bool InvMinus, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "MakeItemDetailText");

	Params::ULibUIUtil_C_MakeItemDetailText_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CharacterID = CharacterID;
	Parms.InvMinus = InvMinus;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function LibUIUtil.LibUIUtil_C.PlayPartyChatFromStoryRecord
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PartyChatLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::PlayPartyChatFromStoryRecord(class FName PartyChatLabel, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "PlayPartyChatFromStoryRecord");

	Params::ULibUIUtil_C_PlayPartyChatFromStoryRecord_Params Parms{};

	Parms.PartyChatLabel = PartyChatLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibUIUtil.LibUIUtil_C.GetEquipIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconTex                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetEquipIcon(int32 ID, class UObject* __WorldContext, class UTexture2D** IconTex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetEquipIcon");

	Params::ULibUIUtil_C_GetEquipIcon_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IconTex != nullptr)
		*IconTex = Parms.IconTex;

}


// Function LibUIUtil.LibUIUtil_C.GetCanEquipmentPart
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::GetCanEquipmentPart(int32 PlayerID, enum class EEQUIPMENT_PART Part, class UObject* __WorldContext, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetCanEquipmentPart");

	Params::ULibUIUtil_C_GetCanEquipmentPart_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.Part = Part;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function LibUIUtil.LibUIUtil_C.GetPartLabel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetPartLabel(int32 ID, class UObject* __WorldContext, class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetPartLabel");

	Params::ULibUIUtil_C_GetPartLabel_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function LibUIUtil.LibUIUtil_C.OpenConfirmAbilityUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      AbilitySetID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenConfirmAbilityUI(TArray<int32>& AbilitySetID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenConfirmAbilityUI");

	Params::ULibUIUtil_C_OpenConfirmAbilityUI_Params Parms{};

	Parms.AbilitySetID = AbilitySetID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.ScrollAxisHelpWindow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::ScrollAxisHelpWindow(float AxisValue, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "ScrollAxisHelpWindow");

	Params::ULibUIUtil_C_ScrollAxisHelpWindow_Params Parms{};

	Parms.AxisValue = AxisValue;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.GetBalloonBundle
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBalloonBundleWidgetBase*    BalloonBundle                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetBalloonBundle(class UObject* __WorldContext, class UBalloonBundleWidgetBase** BalloonBundle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetBalloonBundle");

	Params::ULibUIUtil_C_GetBalloonBundle_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BalloonBundle != nullptr)
		*BalloonBundle = Parms.BalloonBundle;

}


// Function LibUIUtil.LibUIUtil_C.GetMapEmblemTexture
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        EmblemLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  EmblemTexture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetMapEmblemTexture(class FName EmblemLabel, class UObject* __WorldContext, class UTexture2D** EmblemTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetMapEmblemTexture");

	Params::ULibUIUtil_C_GetMapEmblemTexture_Params Parms{};

	Parms.EmblemLabel = EmblemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EmblemTexture != nullptr)
		*EmblemTexture = Parms.EmblemTexture;

}


// Function LibUIUtil.LibUIUtil_C.MapNameNotificationEvent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::MapNameNotificationEvent(class FName LevelName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "MapNameNotificationEvent");

	Params::ULibUIUtil_C_MapNameNotificationEvent_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.GetPartyChatTextList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                PartyChatList                                                    (Parm, OutParm)

void ULibUIUtil_C::GetPartyChatTextList(class UObject* __WorldContext, TArray<class FText>* PartyChatList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetPartyChatTextList");

	Params::ULibUIUtil_C_GetPartyChatTextList_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyChatList != nullptr)
		*PartyChatList = std::move(Parms.PartyChatList);

}


// Function LibUIUtil.LibUIUtil_C.GetPartyChatList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                PartyChatList                                                    (Parm, OutParm)

void ULibUIUtil_C::GetPartyChatList(class UObject* __WorldContext, TArray<class FName>* PartyChatList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetPartyChatList");

	Params::ULibUIUtil_C_GetPartyChatList_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyChatList != nullptr)
		*PartyChatList = std::move(Parms.PartyChatList);

}


// Function LibUIUtil.LibUIUtil_C.OnPlayerInput
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OnPlayerInput(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OnPlayerInput");

	Params::ULibUIUtil_C_OnPlayerInput_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.GetTimeZoneChangeUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeZoneChangeWidget_C*     TimeZoneChangeUI                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetTimeZoneChangeUI(class UObject* __WorldContext, class UTimeZoneChangeWidget_C** TimeZoneChangeUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetTimeZoneChangeUI");

	Params::ULibUIUtil_C_GetTimeZoneChangeUI_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeZoneChangeUI != nullptr)
		*TimeZoneChangeUI = Parms.TimeZoneChangeUI;

}


// Function LibUIUtil.LibUIUtil_C.GetForgetAbilityUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityForgetWidgetBase*    Ref                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetForgetAbilityUI(class UObject* __WorldContext, class UAbilityForgetWidgetBase** Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetForgetAbilityUI");

	Params::ULibUIUtil_C_GetForgetAbilityUI_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

}


// Function LibUIUtil.LibUIUtil_C.CloseForgetAbilityUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseForgetAbilityUI(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseForgetAbilityUI");

	Params::ULibUIUtil_C_CloseForgetAbilityUI_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenForgetAbilityUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      AbilitySetID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenForgetAbilityUI(TArray<int32>& AbilitySetID, FDelegateProperty_& Event, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenForgetAbilityUI");

	Params::ULibUIUtil_C_OpenForgetAbilityUI_Params Parms{};

	Parms.AbilitySetID = AbilitySetID;
	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenMainHelpForce
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenMainHelpForce(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenMainHelpForce");

	Params::ULibUIUtil_C_OpenMainHelpForce_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenExBar
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenExBar(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenExBar");

	Params::ULibUIUtil_C_OpenExBar_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.ClearCommonNotification
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::ClearCommonNotification(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "ClearCommonNotification");

	Params::ULibUIUtil_C_ClearCommonNotification_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.PauseCommonNotification
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pause                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::PauseCommonNotification(bool Pause, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "PauseCommonNotification");

	Params::ULibUIUtil_C_PauseCommonNotification_Params Parms{};

	Parms.Pause = Pause;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.SetupListItemWidgetText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::SetupListItemWidgetText(struct FMJListWidgetItemData& InputPin, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SetupListItemWidgetText");

	Params::ULibUIUtil_C_SetupListItemWidgetText_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CloseNote
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsForceClose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseNote(bool IsForceClose, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseNote");

	Params::ULibUIUtil_C_CloseNote_Params Parms{};

	Parms.IsForceClose = IsForceClose;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenNote
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NoteTextLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseBackground                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenNote(class FName& NoteTextLabel, bool UseBackground, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenNote");

	Params::ULibUIUtil_C_OpenNote_Params Parms{};

	Parms.NoteTextLabel = NoteTextLabel;
	Parms.UseBackground = UseBackground;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.SetMainHelpPositionByWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceFlip                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::SetMainHelpPositionByWidget(class UUserWidget* TargetWidget, bool ForceFlip, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SetMainHelpPositionByWidget");

	Params::ULibUIUtil_C_SetMainHelpPositionByWidget_Params Parms{};

	Parms.TargetWidget = TargetWidget;
	Parms.ForceFlip = ForceFlip;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.SetMainHelpGameText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::SetMainHelpGameText(class FName TextLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SetMainHelpGameText");

	Params::ULibUIUtil_C_SetMainHelpGameText_Params Parms{};

	Parms.TextLabel = TextLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.SetMainHelpText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::SetMainHelpText(class FText Text, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SetMainHelpText");

	Params::ULibUIUtil_C_SetMainHelpText_Params Parms{};

	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CloseMainHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideImmediately                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseMainHelp(bool HideImmediately, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseMainHelp");

	Params::ULibUIUtil_C_CloseMainHelp_Params Parms{};

	Parms.HideImmediately = HideImmediately;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenMainHelp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenMainHelp(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenMainHelp");

	Params::ULibUIUtil_C_OpenMainHelp_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CloseSingleMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseSingleMenu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseSingleMenu");

	Params::ULibUIUtil_C_CloseSingleMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.IsOpenSingleMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::IsOpenSingleMenu(class UObject* __WorldContext, bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "IsOpenSingleMenu");

	Params::ULibUIUtil_C_IsOpenSingleMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function LibUIUtil.LibUIUtil_C.OpenEventFieldCommandBattle
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEventFieldCommandBattleBase*CreateWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenEventFieldCommandBattle(class FName NPCLabel, class UObject* __WorldContext, class UEventFieldCommandBattleBase** CreateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenEventFieldCommandBattle");

	Params::ULibUIUtil_C_OpenEventFieldCommandBattle_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CreateWidget != nullptr)
		*CreateWidget = Parms.CreateWidget;

}


// Function LibUIUtil.LibUIUtil_C.LevelChangeNotificationEnd
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDelay                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::LevelChangeNotificationEnd(bool IsDelay, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "LevelChangeNotificationEnd");

	Params::ULibUIUtil_C_LevelChangeNotificationEnd_Params Parms{};

	Parms.IsDelay = IsDelay;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.LevelChangeNotificationStart
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextLevelNameLabel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::LevelChangeNotificationStart(class FName LevelName, class FName NextLevelNameLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "LevelChangeNotificationStart");

	Params::ULibUIUtil_C_LevelChangeNotificationStart_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.NextLevelNameLabel = NextLevelNameLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenPartyCharacterChangeMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAddFriendMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    NewCharacterID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsIgnoreFade                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsBar                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenPartyCharacterChangeMenu(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID, bool IsIgnoreFade, bool IsBar, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenPartyCharacterChangeMenu");

	Params::ULibUIUtil_C_OpenPartyCharacterChangeMenu_Params Parms{};

	Parms.IsAddFriendMode = IsAddFriendMode;
	Parms.NewCharacterID = NewCharacterID;
	Parms.IsIgnoreFade = IsIgnoreFade;
	Parms.IsBar = IsBar;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CloseShopMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseShopMenu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseShopMenu");

	Params::ULibUIUtil_C_CloseShopMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.IsStorySelectMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BarMenuMode                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::IsStorySelectMode(class UObject* __WorldContext, bool* BarMenuMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "IsStorySelectMode");

	Params::ULibUIUtil_C_IsStorySelectMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (BarMenuMode != nullptr)
		*BarMenuMode = Parms.BarMenuMode;

}


// Function LibUIUtil.LibUIUtil_C.CloseStorySelect
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseStorySelect(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseStorySelect");

	Params::ULibUIUtil_C_CloseStorySelect_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenEquipmentMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBar                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenEquipmentMenu(bool IsBar, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenEquipmentMenu");

	Params::ULibUIUtil_C_OpenEquipmentMenu_Params Parms{};

	Parms.IsBar = IsBar;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenSingleMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USingleMenuWidgetBase*       CreateWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenSingleMenu(class UObject* __WorldContext, class USingleMenuWidgetBase** CreateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenSingleMenu");

	Params::ULibUIUtil_C_OpenSingleMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CreateWidget != nullptr)
		*CreateWidget = Parms.CreateWidget;

}


// Function LibUIUtil.LibUIUtil_C.OpenStorySelect
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBarMenu                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBarMenuStorySelectBase*     CreateWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenStorySelect(class FName WorldMapLabel, bool IsBarMenu, class UObject* __WorldContext, class UBarMenuStorySelectBase** CreateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenStorySelect");

	Params::ULibUIUtil_C_OpenStorySelect_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;
	Parms.IsBarMenu = IsBarMenu;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CreateWidget != nullptr)
		*CreateWidget = Parms.CreateWidget;

}


// Function LibUIUtil.LibUIUtil_C.EventPlayEnable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::EventPlayEnable(bool IsEnable, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "EventPlayEnable");

	Params::ULibUIUtil_C_EventPlayEnable_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CommonNotificationWithParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommonNotificationParam    Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CommonNotificationWithParam(const struct FCommonNotificationParam& Param, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CommonNotificationWithParam");

	Params::ULibUIUtil_C_CommonNotificationWithParam_Params Parms{};

	Parms.Param = Param;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CommonNotification
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CommonNotification(class FText InText, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CommonNotification");

	Params::ULibUIUtil_C_CommonNotification_Params Parms{};

	Parms.InText = InText;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.MapNameNotification
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RegionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EncounterLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DangerLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOpenKeep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    EmblemTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NotificationFormat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMAP_NAME_NOTIFICATION_OPEN_OWNEROpenOwner                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::MapNameNotification(class FName RegionName, class FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, class UTexture* EmblemTexture, class FName NotificationFormat, enum class EMAP_NAME_NOTIFICATION_OPEN_OWNER OpenOwner, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "MapNameNotification");

	Params::ULibUIUtil_C_MapNameNotification_Params Parms{};

	Parms.RegionName = RegionName;
	Parms.MapName = MapName;
	Parms.EncounterLevel = EncounterLevel;
	Parms.DangerLevel = DangerLevel;
	Parms.IsOpenKeep = IsOpenKeep;
	Parms.EmblemTexture = EmblemTexture;
	Parms.NotificationFormat = NotificationFormat;
	Parms.OpenOwner = OpenOwner;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.SetPartyChatVisible
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::SetPartyChatVisible(bool IsVisibility, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SetPartyChatVisible");

	Params::ULibUIUtil_C_SetPartyChatVisible_Params Parms{};

	Parms.IsVisibility = IsVisibility;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CheckRadarMapEventIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CheckRadarMapEventIcon(const class FString& EventName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CheckRadarMapEventIcon");

	Params::ULibUIUtil_C_CheckRadarMapEventIcon_Params Parms{};

	Parms.EventName = EventName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CheckRadarMapHiddenPointIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HiddenPointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CheckRadarMapHiddenPointIcon(int32 HiddenPointIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CheckRadarMapHiddenPointIcon");

	Params::ULibUIUtil_C_CheckRadarMapHiddenPointIcon_Params Parms{};

	Parms.HiddenPointIndex = HiddenPointIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CheckTreasureBoxOpen
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TreasureIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CheckTreasureBoxOpen(int32 TreasureIndex, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CheckTreasureBoxOpen");

	Params::ULibUIUtil_C_CheckTreasureBoxOpen_Params Parms{};

	Parms.TreasureIndex = TreasureIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.ClearRadarMapIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::ClearRadarMapIcon(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "ClearRadarMapIcon");

	Params::ULibUIUtil_C_ClearRadarMapIcon_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.SetupRadarMap
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::SetupRadarMap(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "SetupRadarMap");

	Params::ULibUIUtil_C_SetupRadarMap_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.RadarMapNextSwitch
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::RadarMapNextSwitch(class UObject* __WorldContext, bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "RadarMapNextSwitch");

	Params::ULibUIUtil_C_RadarMapNextSwitch_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function LibUIUtil.LibUIUtil_C.GetSaveLoadResult
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESAVELOAD_RESULT        SaveLoadResult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::GetSaveLoadResult(class UObject* __WorldContext, enum class ESAVELOAD_RESULT* SaveLoadResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "GetSaveLoadResult");

	Params::ULibUIUtil_C_GetSaveLoadResult_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveLoadResult != nullptr)
		*SaveLoadResult = Parms.SaveLoadResult;

}


// Function LibUIUtil.LibUIUtil_C.CloseSaveLoadMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseSaveLoadMenu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseSaveLoadMenu");

	Params::ULibUIUtil_C_CloseSaveLoadMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.Open Save Load Menu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SaveMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromDebugMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::Open_Save_Load_Menu(bool SaveMode, bool FromDebugMenu, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "Open Save Load Menu");

	Params::ULibUIUtil_C_Open_Save_Load_Menu_Params Parms{};

	Parms.SaveMode = SaveMode;
	Parms.FromDebugMenu = FromDebugMenu;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.CloseNarration
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsForceClose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNarrationWidgetBase*        NarrationWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseNarration(bool IsForceClose, class UObject* __WorldContext, class UNarrationWidgetBase** NarrationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseNarration");

	Params::ULibUIUtil_C_CloseNarration_Params Parms{};

	Parms.IsForceClose = IsForceClose;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NarrationWidget != nullptr)
		*NarrationWidget = Parms.NarrationWidget;

}


// Function LibUIUtil.LibUIUtil_C.OpenNarration
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNarrationWidgetBase*        NarrationWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenNarration(class UObject* __WorldContext, class UNarrationWidgetBase** NarrationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenNarration");

	Params::ULibUIUtil_C_OpenNarration_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NarrationWidget != nullptr)
		*NarrationWidget = Parms.NarrationWidget;

}


// Function LibUIUtil.LibUIUtil_C.OpenEnterShopPopup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TriggerActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenEnterShopPopup(class AActor* TriggerActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenEnterShopPopup");

	Params::ULibUIUtil_C_OpenEnterShopPopup_Params Parms{};

	Parms.TriggerActor = TriggerActor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.OpenShopMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ShopLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceDefaultBar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromNPC                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenShopMenu(class FName ShopLabel, bool ForceDefaultBar, bool FromNPC, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenShopMenu");

	Params::ULibUIUtil_C_OpenShopMenu_Params Parms{};

	Parms.ShopLabel = ShopLabel;
	Parms.ForceDefaultBar = ForceDefaultBar;
	Parms.FromNPC = FromNPC;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.Close Field Command Menu
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OpenJudgeWindow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               StateCheck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::Close_Field_Command_Menu(bool OpenJudgeWindow, bool StateCheck, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "Close Field Command Menu");

	Params::ULibUIUtil_C_Close_Field_Command_Menu_Params Parms{};

	Parms.OpenJudgeWindow = OpenJudgeWindow;
	Parms.StateCheck = StateCheck;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.Open Field Command Menu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DrawLeft                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EMJFieldCommandType>CommandList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::Open_Field_Command_Menu(class AKSCharacterBase* TargetNpc, bool DrawLeft, TArray<enum class EMJFieldCommandType>& CommandList, class UObject* __WorldContext, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "Open Field Command Menu");

	Params::ULibUIUtil_C_Open_Field_Command_Menu_Params Parms{};

	Parms.TargetNpc = TargetNpc;
	Parms.DrawLeft = DrawLeft;
	Parms.CommandList = CommandList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function LibUIUtil.LibUIUtil_C.CloseFieldCommandJudge
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseFieldCommandJudge(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseFieldCommandJudge");

	Params::ULibUIUtil_C_CloseFieldCommandJudge_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.Open Field Command Popup
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EMJFieldCommandType>CommandList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibUIUtil_C::Open_Field_Command_Popup(class AKSCharacterBase* TargetCharacter, TArray<enum class EMJFieldCommandType>& CommandList, class UObject* __WorldContext, bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "Open Field Command Popup");

	Params::ULibUIUtil_C_Open_Field_Command_Popup_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CommandList = CommandList;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function LibUIUtil.LibUIUtil_C.OpenGameOverUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGAMEOVER_TYPE          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameoverWidgetBase*         UIGameOver                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::OpenGameOverUI(enum class EGAMEOVER_TYPE Type, class UObject* __WorldContext, class UGameoverWidgetBase** UIGameOver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "OpenGameOverUI");

	Params::ULibUIUtil_C_OpenGameOverUI_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (UIGameOver != nullptr)
		*UIGameOver = Parms.UIGameOver;

}


// Function LibUIUtil.LibUIUtil_C.CloseStatusMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::CloseStatusMenu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "CloseStatusMenu");

	Params::ULibUIUtil_C_CloseStatusMenu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibUIUtil.LibUIUtil_C.Open Status Menu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibUIUtil_C::Open_Status_Menu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibUIUtil_C", "Open Status Menu");

	Params::ULibUIUtil_C_Open_Status_Menu_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


