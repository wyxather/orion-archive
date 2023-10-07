#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSFlipbookManagerBP.KSFlipbookManagerBP_C
// (Actor)

class UClass* AKSFlipbookManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSFlipbookManagerBP_C");

	return Clss;
}


// KSFlipbookManagerBP_C KSFlipbookManagerBP.Default__KSFlipbookManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSFlipbookManagerBP_C* AKSFlipbookManagerBP_C::GetDefaultObj()
{
	static class AKSFlipbookManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSFlipbookManagerBP_C*>(AKSFlipbookManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetMissionFlipbookData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FlipbookName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKSUIFlipbookData           FlipbookData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::GetMissionFlipbookData(class FName FlipbookName, struct FKSUIFlipbookData& FlipbookData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetMissionFlipbookData");

	Params::AKSFlipbookManagerBP_C_GetMissionFlipbookData_Params Parms{};

	Parms.FlipbookName = FlipbookName;
	Parms.FlipbookData = FlipbookData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetMissionSpriteData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SpriteName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKSSpriteData               SpriteData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::GetMissionSpriteData(class FName SpriteName, struct FKSSpriteData& SpriteData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetMissionSpriteData");

	Params::AKSFlipbookManagerBP_C_GetMissionSpriteData_Params Parms{};

	Parms.SpriteName = SpriteName;
	Parms.SpriteData = SpriteData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetCharacterData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CharacterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKSCharaFlipbook            CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::GetCharacterData(class FName CharacterName, struct FKSCharaFlipbook& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetCharacterData");

	Params::AKSFlipbookManagerBP_C_GetCharacterData_Params Parms{};

	Parms.CharacterName = CharacterName;
	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetCharacterTexAssetPtrs
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CharacterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTexture2D>>OutTexAssetPtrs                                                  (Parm, OutParm, UObjectWrapper)

void AKSFlipbookManagerBP_C::GetCharacterTexAssetPtrs(class FName CharacterName, TArray<TSoftObjectPtr<class UTexture2D>>* OutTexAssetPtrs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetCharacterTexAssetPtrs");

	Params::AKSFlipbookManagerBP_C_GetCharacterTexAssetPtrs_Params Parms{};

	Parms.CharacterName = CharacterName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTexAssetPtrs != nullptr)
		*OutTexAssetPtrs = std::move(Parms.OutTexAssetPtrs);

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetCharacterFlipbookNames
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CharacterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                FlipbookNames                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::GetCharacterFlipbookNames(class FName CharacterName, TArray<class FName>& FlipbookNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetCharacterFlipbookNames");

	Params::AKSFlipbookManagerBP_C_GetCharacterFlipbookNames_Params Parms{};

	Parms.CharacterName = CharacterName;
	Parms.FlipbookNames = FlipbookNames;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.ContainsFlipbookData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FlipbookName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::ContainsFlipbookData(class FName FlipbookName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "ContainsFlipbookData");

	Params::AKSFlipbookManagerBP_C_ContainsFlipbookData_Params Parms{};

	Parms.FlipbookName = FlipbookName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetFlipbookData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FlipbookName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKSFlipbookData             FlipbookData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::GetFlipbookData(class FName FlipbookName, struct FKSFlipbookData& FlipbookData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetFlipbookData");

	Params::AKSFlipbookManagerBP_C_GetFlipbookData_Params Parms{};

	Parms.FlipbookName = FlipbookName;
	Parms.FlipbookData = FlipbookData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFlipbookManagerBP.KSFlipbookManagerBP_C.GetSpriteData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SpriteName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKSSpriteData               SpriteData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFlipbookManagerBP_C::GetSpriteData(class FName SpriteName, struct FKSSpriteData& SpriteData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFlipbookManagerBP_C", "GetSpriteData");

	Params::AKSFlipbookManagerBP_C_GetSpriteData_Params Parms{};

	Parms.SpriteName = SpriteName;
	Parms.SpriteData = SpriteData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


