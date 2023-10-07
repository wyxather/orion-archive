#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibGameOption.LibGameOption_C
// (None)

class UClass* ULibGameOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibGameOption_C");

	return Clss;
}


// LibGameOption_C LibGameOption.Default__LibGameOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibGameOption_C* ULibGameOption_C::GetDefaultObj()
{
	static class ULibGameOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibGameOption_C*>(ULibGameOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibGameOption.LibGameOption_C.ApplyLetterSize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ApplyLetterSize(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ApplyLetterSize");

	Params::ULibGameOption_C_ApplyLetterSize_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.Refresh Voice ResourceInner
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsJA                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::Refresh_Voice_ResourceInner(bool IsJA, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "Refresh Voice ResourceInner");

	Params::ULibGameOption_C_Refresh_Voice_ResourceInner_Params Parms{};

	Parms.IsJA = IsJA;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.Refresh Voice Resource
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsJA                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::Refresh_Voice_Resource(bool IsJA, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "Refresh Voice Resource");

	Params::ULibGameOption_C_Refresh_Voice_Resource_Params Parms{};

	Parms.IsJA = IsJA;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.OnApplyReactionFlag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionKind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::OnApplyReactionFlag(enum class EOPTION_ITEM_KIND OptionKind, bool Flag, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "OnApplyReactionFlag");

	Params::ULibGameOption_C_OnApplyReactionFlag_Params Parms{};

	Parms.OptionKind = OptionKind;
	Parms.Flag = Flag;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.OnApplyReactionParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionKind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::OnApplyReactionParam(enum class EOPTION_ITEM_KIND OptionKind, int32 Value, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "OnApplyReactionParam");

	Params::ULibGameOption_C_OnApplyReactionParam_Params Parms{};

	Parms.OptionKind = OptionKind;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.OnApplyTemporaryFlag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionKind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::OnApplyTemporaryFlag(enum class EOPTION_ITEM_KIND OptionKind, bool Flag, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "OnApplyTemporaryFlag");

	Params::ULibGameOption_C_OnApplyTemporaryFlag_Params Parms{};

	Parms.OptionKind = OptionKind;
	Parms.Flag = Flag;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.Debug_RefreshTextLanguage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             InLang                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::Debug_RefreshTextLanguage(enum class EKSLanguage InLang, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "Debug_RefreshTextLanguage");

	Params::ULibGameOption_C_Debug_RefreshTextLanguage_Params Parms{};

	Parms.InLang = InLang;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.ResetGraphicSettings
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ResetGraphicSettings(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ResetGraphicSettings");

	Params::ULibGameOption_C_ResetGraphicSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.ResetSoundOptionSettings
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ResetSoundOptionSettings(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ResetSoundOptionSettings");

	Params::ULibGameOption_C_ResetSoundOptionSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.ResetGameOptionSettings
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ResetGameOptionSettings(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ResetGameOptionSettings");

	Params::ULibGameOption_C_ResetGameOptionSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.GetCharacterSystemVoice
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        VoiceLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::GetCharacterSystemVoice(enum class EPlayableCharacterID CharacterID, class UObject* __WorldContext, class FName* VoiceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "GetCharacterSystemVoice");

	Params::ULibGameOption_C_GetCharacterSystemVoice_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (VoiceLabel != nullptr)
		*VoiceLabel = Parms.VoiceLabel;

}


// Function LibGameOption.LibGameOption_C.RefreshTextLanguage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             InLang                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::RefreshTextLanguage(enum class EKSLanguage InLang, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "RefreshTextLanguage");

	Params::ULibGameOption_C_RefreshTextLanguage_Params Parms{};

	Parms.InLang = InLang;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.UnloadLanguageResource
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::UnloadLanguageResource(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "UnloadLanguageResource");

	Params::ULibGameOption_C_UnloadLanguageResource_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.LoadLanguageResource
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::LoadLanguageResource(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "LoadLanguageResource");

	Params::ULibGameOption_C_LoadLanguageResource_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.OnApplyTemporaryParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       OptionKind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::OnApplyTemporaryParam(enum class EOPTION_ITEM_KIND OptionKind, int32 Value, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "OnApplyTemporaryParam");

	Params::ULibGameOption_C_OnApplyTemporaryParam_Params Parms{};

	Parms.OptionKind = OptionKind;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.OnChangeVoiceVolume
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::OnChangeVoiceVolume(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "OnChangeVoiceVolume");

	Params::ULibGameOption_C_OnChangeVoiceVolume_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.GetSystemFlagType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EOPTION_ITEM_KIND       Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSSaveDataFlagType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EKSSaveDataFlagType ULibGameOption_C::GetSystemFlagType(enum class EOPTION_ITEM_KIND Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "GetSystemFlagType");

	Params::ULibGameOption_C_GetSystemFlagType_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibGameOption.LibGameOption_C.GetSystemParamType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EOPTION_ITEM_KIND       Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSSaveDataParamType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EKSSaveDataParamType ULibGameOption_C::GetSystemParamType(enum class EOPTION_ITEM_KIND Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "GetSystemParamType");

	Params::ULibGameOption_C_GetSystemParamType_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibGameOption.LibGameOption_C.Reset Option Settings
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::Reset_Option_Settings(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "Reset Option Settings");

	Params::ULibGameOption_C_Reset_Option_Settings_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.ApplyAllOptionToGame
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ApplyAllOptionToGame(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ApplyAllOptionToGame");

	Params::ULibGameOption_C_ApplyAllOptionToGame_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameOption.LibGameOption_C.ConvertOptionVolume
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              VolumeLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ConvertOptionVolume(int32 VolumeLevel, class UObject* __WorldContext, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ConvertOptionVolume");

	Params::ULibGameOption_C_ConvertOptionVolume_Params Parms{};

	Parms.VolumeLevel = VolumeLevel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function LibGameOption.LibGameOption_C.ApplyOptionToGame
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOPTION_ITEM_KIND       Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameOption_C::ApplyOptionToGame(enum class EOPTION_ITEM_KIND Selection, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameOption_C", "ApplyOptionToGame");

	Params::ULibGameOption_C_ApplyOptionToGame_Params Parms{};

	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


