#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibCharacter.LibCharacter_C
// (None)

class UClass* ULibCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibCharacter_C");

	return Clss;
}


// LibCharacter_C LibCharacter.Default__LibCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibCharacter_C* ULibCharacter_C::GetDefaultObj()
{
	static class ULibCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibCharacter_C*>(ULibCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibCharacter.LibCharacter_C.ChangeFBImageAnimForJobPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPLAYER_JOB_FB_TYPE     ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               Job_ID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFBImage*                    FBImage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::ChangeFBImageAnimForJobPC(int32 CharacterID, enum class EPLAYER_JOB_FB_TYPE ActionType, enum class EJOB_TYPE Job_ID, class UFBImage*& FBImage, bool IsLoop, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangeFBImageAnimForJobPC");

	Params::ULibCharacter_C_ChangeFBImageAnimForJobPC_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ActionType = ActionType;
	Parms.Job_ID = Job_ID;
	Parms.FBImage = FBImage;
	Parms.IsLoop = IsLoop;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibCharacter.LibCharacter_C.IsEquipFromPart
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetItemLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquip                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::IsEquipFromPart(int32 CharaID, class FName TargetItemLabel, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext, bool* IsEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsEquipFromPart");

	Params::ULibCharacter_C_IsEquipFromPart_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.TargetItemLabel = TargetItemLabel;
	Parms.EquipmentPart = EquipmentPart;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquip != nullptr)
		*IsEquip = Parms.IsEquip;

}


// Function LibCharacter.LibCharacter_C.ClampMaxParameter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterParam             Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::ClampMaxParameter(struct FCharacterParam& Param, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ClampMaxParameter");

	Params::ULibCharacter_C_ClampMaxParameter_Params Parms{};

	Parms.Param = Param;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.CanEquipmentCharacterArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       CanEquip                                                         (Parm, OutParm)

void ULibCharacter_C::CanEquipmentCharacterArray(enum class EEQUIPMENT_PART EquipPart, class UObject* __WorldContext, TArray<bool>* CanEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CanEquipmentCharacterArray");

	Params::ULibCharacter_C_CanEquipmentCharacterArray_Params Parms{};

	Parms.EquipPart = EquipPart;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CanEquip != nullptr)
		*CanEquip = std::move(Parms.CanEquip);

}


// Function LibCharacter.LibCharacter_C.CanAcquisitionAbility
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSavePlayerCharacterData>SaveCharacterData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::CanAcquisitionAbility(TArray<struct FSavePlayerCharacterData>& SaveCharacterData, class UObject* __WorldContext, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CanAcquisitionAbility");

	Params::ULibCharacter_C_CanAcquisitionAbility_Params Parms{};

	Parms.SaveCharacterData = SaveCharacterData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function LibCharacter.LibCharacter_C.Calc Equip Param Before After
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ChangeEquipLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEquipParamBeforeAfter>EquipParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Calc_Equip_Param_Before_After(enum class EEQUIPMENT_PART EquipPart, class FName ChangeEquipLabel, TArray<struct FEquipParamBeforeAfter>& EquipParam, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Calc Equip Param Before After");

	Params::ULibCharacter_C_Calc_Equip_Param_Before_After_Params Parms{};

	Parms.EquipPart = EquipPart;
	Parms.ChangeEquipLabel = ChangeEquipLabel;
	Parms.EquipParam = EquipParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.Is Weapon Equipment Part
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEQUIPMENT_PART         Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibCharacter_C::Is_Weapon_Equipment_Part(enum class EEQUIPMENT_PART Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Is Weapon Equipment Part");

	Params::ULibCharacter_C_Is_Weapon_Equipment_Part_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibCharacter.LibCharacter_C.UpdateEquipParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPartyCharacterListBase*     PartyListWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEquipParamBeforeAfter>EquipParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EquipItemLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::UpdateEquipParam(class UPartyCharacterListBase* PartyListWidget, TArray<struct FEquipParamBeforeAfter>& EquipParam, enum class EEQUIPMENT_PART EquipmentPart, class FName EquipItemLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "UpdateEquipParam");

	Params::ULibCharacter_C_UpdateEquipParam_Params Parms{};

	Parms.PartyListWidget = PartyListWidget;
	Parms.EquipParam = EquipParam;
	Parms.EquipmentPart = EquipmentPart;
	Parms.EquipItemLabel = EquipItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.IsEquipableMainCharacter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::IsEquipableMainCharacter(class FName ItemLabel, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsEquipableMainCharacter");

	Params::ULibCharacter_C_IsEquipableMainCharacter_Params Parms{};

	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibCharacter.LibCharacter_C.GetUnOpendSupportDetailText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityDetail                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)

void ULibCharacter_C::GetUnOpendSupportDetailText(class FName AbilityName, class FName AbilityDetail, class UObject* __WorldContext, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetUnOpendSupportDetailText");

	Params::ULibCharacter_C_GetUnOpendSupportDetailText_Params Parms{};

	Parms.AbilityName = AbilityName;
	Parms.AbilityDetail = AbilityDetail;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.GetSupportDetailText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        SupportLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void ULibCharacter_C::GetSupportDetailText(class FName SupportLabel, int32 CharaID, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetSupportDetailText");

	Params::ULibCharacter_C_GetSupportDetailText_Params Parms{};

	Parms.SupportLabel = SupportLabel;
	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function LibCharacter.LibCharacter_C.GetAllJobAcquisitionCommandNum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AcquisitionNum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetAllJobAcquisitionCommandNum(int32 CharacterID, class UObject* __WorldContext, int32* AcquisitionNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetAllJobAcquisitionCommandNum");

	Params::ULibCharacter_C_GetAllJobAcquisitionCommandNum_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AcquisitionNum != nullptr)
		*AcquisitionNum = Parms.AcquisitionNum;

}


// Function LibCharacter.LibCharacter_C.Calc Player Parameter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CalcSecondJob                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CharacterParam                                                   (Parm, OutParm, NoDestructor)

void ULibCharacter_C::Calc_Player_Parameter(int32 CharaID, bool CalcSecondJob, class UObject* __WorldContext, struct FCharacterParam* CharacterParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Calc Player Parameter");

	Params::ULibCharacter_C_Calc_Player_Parameter_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.CalcSecondJob = CalcSecondJob;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterParam != nullptr)
		*CharacterParam = std::move(Parms.CharacterParam);

}


// Function LibCharacter.LibCharacter_C.GetEnemyFBSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECHARACTER_SIZE         EnemySize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OutData                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetEnemyFBSize(enum class ECHARACTER_SIZE EnemySize, class UObject* __WorldContext, struct FVector2D* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetEnemyFBSize");

	Params::ULibCharacter_C_GetEnemyFBSize_Params Parms{};

	Parms.EnemySize = EnemySize;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function LibCharacter.LibCharacter_C.GetAcquisitionAbilityCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AcquisitionIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetAcquisitionAbilityCount(int32 JobID, int32 AcquisitionIndex, class UObject* __WorldContext, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetAcquisitionAbilityCount");

	Params::ULibCharacter_C_GetAcquisitionAbilityCount_Params Parms{};

	Parms.JobID = JobID;
	Parms.AcquisitionIndex = AcquisitionIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function LibCharacter.LibCharacter_C.Get Job IDFrom Ability
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PlayerSaveDataIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Job_IDFrom_Ability(class FName AbilityName, class UObject* __WorldContext, int32* JobID, bool* Success, int32* PlayerSaveDataIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Job IDFrom Ability");

	Params::ULibCharacter_C_Get_Job_IDFrom_Ability_Params Parms{};

	Parms.AbilityName = AbilityName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JobID != nullptr)
		*JobID = Parms.JobID;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (PlayerSaveDataIndex != nullptr)
		*PlayerSaveDataIndex = Parms.PlayerSaveDataIndex;

}


// Function LibCharacter.LibCharacter_C.Debug_GetPlayerParameterByCharaData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPartyCharacterData         CharaData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             Result                                                           (Parm, OutParm, NoDestructor)

void ULibCharacter_C::Debug_GetPlayerParameterByCharaData(const struct FPartyCharacterData& CharaData, class UObject* __WorldContext, struct FCharacterParam* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Debug_GetPlayerParameterByCharaData");

	Params::ULibCharacter_C_Debug_GetPlayerParameterByCharaData_Params Parms{};

	Parms.CharaData = CharaData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibCharacter.LibCharacter_C.Is Equip Restric Weapon from Ability
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquip                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::Is_Equip_Restric_Weapon_from_Ability(int32 CharaID, class FName AbilityLabel, class UObject* __WorldContext, bool* IsEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Is Equip Restric Weapon from Ability");

	Params::ULibCharacter_C_Is_Equip_Restric_Weapon_from_Ability_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.AbilityLabel = AbilityLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquip != nullptr)
		*IsEquip = Parms.IsEquip;

}


// Function LibCharacter.LibCharacter_C.IsEquip
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetItemLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquip                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::IsEquip(int32 CharaID, class FName TargetItemLabel, class UObject* __WorldContext, bool* IsEquip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsEquip");

	Params::ULibCharacter_C_IsEquip_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.TargetItemLabel = TargetItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquip != nullptr)
		*IsEquip = Parms.IsEquip;

}


// Function LibCharacter.LibCharacter_C.GetCouplingPlayerIdFromExtraStoryCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEXTRA_STORY_CATEGORY   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    OnestCharaId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    TwondCharaId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetCouplingPlayerIdFromExtraStoryCategory(enum class EEXTRA_STORY_CATEGORY Type, class UObject* __WorldContext, enum class EPlayableCharacterID* OnestCharaId, enum class EPlayableCharacterID* TwondCharaId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCouplingPlayerIdFromExtraStoryCategory");

	Params::ULibCharacter_C_GetCouplingPlayerIdFromExtraStoryCategory_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (OnestCharaId != nullptr)
		*OnestCharaId = Parms.OnestCharaId;

	if (TwondCharaId != nullptr)
		*TwondCharaId = Parms.TwondCharaId;

}


// Function LibCharacter.LibCharacter_C.Get Character Icon by Enum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsReflectAge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconImage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Character_Icon_by_Enum(enum class EPlayableCharacterID CharacterID, bool IsReflectAge, class UObject* __WorldContext, class UTexture2D** IconImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Character Icon by Enum");

	Params::ULibCharacter_C_Get_Character_Icon_by_Enum_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.IsReflectAge = IsReflectAge;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IconImage != nullptr)
		*IconImage = Parms.IconImage;

}


// Function LibCharacter.LibCharacter_C.Get Character Icon by ID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  IconImage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Character_Icon_by_ID(int32 CharacterID, class UObject* __WorldContext, class UTexture2D** IconImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Character Icon by ID");

	Params::ULibCharacter_C_Get_Character_Icon_by_ID_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IconImage != nullptr)
		*IconImage = Parms.IconImage;

}


// Function LibCharacter.LibCharacter_C.IsFixedEquipment
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fixed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::IsFixedEquipment(int32 CharaID, class UObject* __WorldContext, bool* Fixed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsFixedEquipment");

	Params::ULibCharacter_C_IsFixedEquipment_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Fixed != nullptr)
		*Fixed = Parms.Fixed;

}


// Function LibCharacter.LibCharacter_C.RemoveNoFixedMainEquipment
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RemoveNoFixedMainEquipment(int32 CharaID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RemoveNoFixedMainEquipment");

	Params::ULibCharacter_C_RemoveNoFixedMainEquipment_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RemoveNoFixedEquipment
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RemoveNoFixedEquipment(int32 CharaID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RemoveNoFixedEquipment");

	Params::ULibCharacter_C_RemoveNoFixedEquipment_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.SetFixedEquipment
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFixed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::SetFixedEquipment(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, bool IsFixed, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SetFixedEquipment");

	Params::ULibCharacter_C_SetFixedEquipment_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipmentPart = EquipmentPart;
	Parms.IsFixed = IsFixed;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RemoveEquipmentMainItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RemoveEquipmentMainItem(int32 CharaID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RemoveEquipmentMainItem");

	Params::ULibCharacter_C_RemoveEquipmentMainItem_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.GetCharacterMDEF_Calc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MDEF                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetCharacterMDEF_Calc(int32 CharacterID, class UObject* __WorldContext, int32* MDEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCharacterMDEF_Calc");

	Params::ULibCharacter_C_GetCharacterMDEF_Calc_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MDEF != nullptr)
		*MDEF = Parms.MDEF;

}


// Function LibCharacter.LibCharacter_C.GetCharacterDEF_Calc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DEF                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetCharacterDEF_Calc(int32 CharacterID, class UObject* __WorldContext, int32* DEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCharacterDEF_Calc");

	Params::ULibCharacter_C_GetCharacterDEF_Calc_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DEF != nullptr)
		*DEF = Parms.DEF;

}


// Function LibCharacter.LibCharacter_C.Get Character POT Calc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              POT                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Character_POT_Calc(int32 CharacterID, class UObject* __WorldContext, int32* POT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Character POT Calc");

	Params::ULibCharacter_C_Get_Character_POT_Calc_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (POT != nullptr)
		*POT = Parms.POT;

}


// Function LibCharacter.LibCharacter_C.GetCharacterMP_Calc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetCharacterMP_Calc(int32 CharacterID, class UObject* __WorldContext, int32* MP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCharacterMP_Calc");

	Params::ULibCharacter_C_GetCharacterMP_Calc_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MP != nullptr)
		*MP = Parms.MP;

}


// Function LibCharacter.LibCharacter_C.GetCharacterHP_Calc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetCharacterHP_Calc(int32 CharacterID, class UObject* __WorldContext, int32* HP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCharacterHP_Calc");

	Params::ULibCharacter_C_GetCharacterHP_Calc_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (HP != nullptr)
		*HP = Parms.HP;

}


// Function LibCharacter.LibCharacter_C.GetCharacterPOTMax
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              POTMax                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetCharacterPOTMax(int32 CharacterID, class UObject* __WorldContext, int32* POTMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCharacterPOTMax");

	Params::ULibCharacter_C_GetCharacterPOTMax_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (POTMax != nullptr)
		*POTMax = Parms.POTMax;

}


// Function LibCharacter.LibCharacter_C.GetPlayerCharacterArea
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELEVEL_AREA_TYPE        Area                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetPlayerCharacterArea(class UObject* __WorldContext, enum class ELEVEL_AREA_TYPE* Area)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerCharacterArea");

	Params::ULibCharacter_C_GetPlayerCharacterArea_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Area != nullptr)
		*Area = Parms.Area;

}


// Function LibCharacter.LibCharacter_C.LeaveGuestCharacterInParty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::LeaveGuestCharacterInParty(enum class EPlayableCharacterID CharaID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "LeaveGuestCharacterInParty");

	Params::ULibCharacter_C_LeaveGuestCharacterInParty_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.Get Equipment All Effect Before After
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SelectWeaponLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         ChanageEquipmentPart                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ChangeEquipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquipParamBeforeAfter      OutParamsBeforeAfter                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Equipment_All_Effect_Before_After(int32 CharacterID, class FName SelectWeaponLabel, enum class EEQUIPMENT_PART ChanageEquipmentPart, class FName ChangeEquipment, struct FEquipParamBeforeAfter& OutParamsBeforeAfter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Equipment All Effect Before After");

	Params::ULibCharacter_C_Get_Equipment_All_Effect_Before_After_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelectWeaponLabel = SelectWeaponLabel;
	Parms.ChanageEquipmentPart = ChanageEquipmentPart;
	Parms.ChangeEquipment = ChangeEquipment;
	Parms.OutParamsBeforeAfter = OutParamsBeforeAfter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.GetEquipParamBeforeAfter
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SelectWeaponLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         ChangeEquipmentPart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ChangeEquipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquipParamBeforeAfter      OutParamsBeforAfter                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetEquipParamBeforeAfter(int32 CharacterID, class FName SelectWeaponLabel, enum class EEQUIPMENT_PART ChangeEquipmentPart, class FName ChangeEquipment, const struct FEquipParamBeforeAfter& OutParamsBeforAfter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetEquipParamBeforeAfter");

	Params::ULibCharacter_C_GetEquipParamBeforeAfter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelectWeaponLabel = SelectWeaponLabel;
	Parms.ChangeEquipmentPart = ChangeEquipmentPart;
	Parms.ChangeEquipment = ChangeEquipment;
	Parms.OutParamsBeforAfter = OutParamsBeforAfter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RefreshPartyAll
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RefreshPartyAll(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RefreshPartyAll");

	Params::ULibCharacter_C_RefreshPartyAll_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.SetupParty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MainCharacterID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      SubCharacterID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::SetupParty(TArray<int32>& MainCharacterID, TArray<int32>& SubCharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SetupParty");

	Params::ULibCharacter_C_SetupParty_Params Parms{};

	Parms.MainCharacterID = MainCharacterID;
	Parms.SubCharacterID = SubCharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RefreshPartyAfterChangeMember
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RefreshPartyAfterChangeMember(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RefreshPartyAfterChangeMember");

	Params::ULibCharacter_C_RefreshPartyAfterChangeMember_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RemoveEquipmentItemAndSetDefault
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RemoveEquipmentItemAndSetDefault(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RemoveEquipmentItemAndSetDefault");

	Params::ULibCharacter_C_RemoveEquipmentItemAndSetDefault_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipmentPart = EquipmentPart;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RefreshWeaponEquipmentState
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RefreshWeaponEquipmentState(int32 CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RefreshWeaponEquipmentState");

	Params::ULibCharacter_C_RefreshWeaponEquipmentState_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.RemoveAllEquipmentItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RemoveAllEquipmentItem(int32 CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RemoveAllEquipmentItem");

	Params::ULibCharacter_C_RemoveAllEquipmentItem_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.AddFirstEquipment_DEPRECATED
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::AddFirstEquipment_DEPRECATED(enum class EPlayableCharacterID CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "AddFirstEquipment_DEPRECATED");

	Params::ULibCharacter_C_AddFirstEquipment_DEPRECATED_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.SetPlayerRoundingHPAndMP
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::SetPlayerRoundingHPAndMP(int32 CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SetPlayerRoundingHPAndMP");

	Params::ULibCharacter_C_SetPlayerRoundingHPAndMP_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.SetReleaseStyleChange
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRelease                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::SetReleaseStyleChange(enum class EPlayableCharacterID PlayerID, bool IsRelease, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SetReleaseStyleChange");

	Params::ULibCharacter_C_SetReleaseStyleChange_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.IsRelease = IsRelease;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.IsReleaseStyleChange
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRelease                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::IsReleaseStyleChange(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, bool* IsRelease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsReleaseStyleChange");

	Params::ULibCharacter_C_IsReleaseStyleChange_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRelease != nullptr)
		*IsRelease = Parms.IsRelease;

}


// Function LibCharacter.LibCharacter_C.Get Player Character Role
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterRole          Role                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Player_Character_Role(enum class EPlayableCharacterID CharaID, class UObject* __WorldContext, enum class ECharacterRole* Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Player Character Role");

	Params::ULibCharacter_C_Get_Player_Character_Role_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Role != nullptr)
		*Role = Parms.Role;

}


// Function LibCharacter.LibCharacter_C.GetJobCommandAbility
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FJobLearnAbility>    JobCommandAbility                                                (Parm, OutParm)

void ULibCharacter_C::GetJobCommandAbility(int32 JobID, class UObject* __WorldContext, TArray<struct FJobLearnAbility>* JobCommandAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobCommandAbility");

	Params::ULibCharacter_C_GetJobCommandAbility_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JobCommandAbility != nullptr)
		*JobCommandAbility = std::move(Parms.JobCommandAbility);

}


// Function LibCharacter.LibCharacter_C.GetJobJobID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Data_JobID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetJobJobID(int32 JobID, class UObject* __WorldContext, int32* Data_JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobJobID");

	Params::ULibCharacter_C_GetJobJobID_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Data_JobID != nullptr)
		*Data_JobID = Parms.Data_JobID;

}


// Function LibCharacter.LibCharacter_C.GetJobProperEquipment
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       ProperEquipment                                                  (Parm, OutParm)

void ULibCharacter_C::GetJobProperEquipment(int32 JobID, class UObject* __WorldContext, TArray<bool>* ProperEquipment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobProperEquipment");

	Params::ULibCharacter_C_GetJobProperEquipment_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ProperEquipment != nullptr)
		*ProperEquipment = std::move(Parms.ProperEquipment);

}


// Function LibCharacter.LibCharacter_C.GetJobMenuIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MenuJobIcon                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetJobMenuIcon(int32 JobID, class UObject* __WorldContext, class FName* MenuJobIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobMenuIcon");

	Params::ULibCharacter_C_GetJobMenuIcon_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuJobIcon != nullptr)
		*MenuJobIcon = Parms.MenuJobIcon;

}


// Function LibCharacter.LibCharacter_C.GetJobJPCost
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      JPCost                                                           (Parm, OutParm)

void ULibCharacter_C::GetJobJPCost(int32 JobID, class UObject* __WorldContext, TArray<int32>* JPCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobJPCost");

	Params::ULibCharacter_C_GetJobJPCost_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JPCost != nullptr)
		*JPCost = std::move(Parms.JPCost);

}


// Function LibCharacter.LibCharacter_C.GetJobPermissionFlagByRowName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PermissionFlag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetJobPermissionFlagByRowName(class FName RowName, class UObject* __WorldContext, int32* PermissionFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobPermissionFlagByRowName");

	Params::ULibCharacter_C_GetJobPermissionFlagByRowName_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PermissionFlag != nullptr)
		*PermissionFlag = Parms.PermissionFlag;

}


// Function LibCharacter.LibCharacter_C.GetJobDisplayName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DisplayName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetJobDisplayName(int32 JobID, class UObject* __WorldContext, class FName* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobDisplayName");

	Params::ULibCharacter_C_GetJobDisplayName_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function LibCharacter.LibCharacter_C.ChangePlayerTransportation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::ChangePlayerTransportation(enum class ETRANSPORTATION_TYPE Type, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangePlayerTransportation");

	Params::ULibCharacter_C_ChangePlayerTransportation_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.EquipItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipPart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::EquipItem(int32 CharacterID, enum class EEQUIPMENT_PART EquipPart, class FName ItemLabel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "EquipItem");

	Params::ULibCharacter_C_EquipItem_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipPart = EquipPart;
	Parms.ItemLabel = ItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.SetMissonFlipbook
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFBImage*                    TargetFBImange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlipbookName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimationLoop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::SetMissonFlipbook(class UFBImage*& TargetFBImange, class FName FlipbookName, bool AnimationLoop, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SetMissonFlipbook");

	Params::ULibCharacter_C_SetMissonFlipbook_Params Parms{};

	Parms.TargetFBImange = TargetFBImange;
	Parms.FlipbookName = FlipbookName;
	Parms.AnimationLoop = AnimationLoop;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.GetSupportAbilityIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  AbilityIcon                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetSupportAbilityIcon(class FName AbilityName, class UObject* __WorldContext, class UTexture2D** AbilityIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetSupportAbilityIcon");

	Params::ULibCharacter_C_GetSupportAbilityIcon_Params Parms{};

	Parms.AbilityName = AbilityName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityIcon != nullptr)
		*AbilityIcon = Parms.AbilityIcon;

}


// Function LibCharacter.LibCharacter_C.ChangeFBImageAnimForSaveLoad
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               Job_ID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CharaForm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFBImage*                    FBImage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::ChangeFBImageAnimForSaveLoad(int32 CharacterID, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir, enum class EJOB_TYPE Job_ID, uint8 CharaForm, class UFBImage*& FBImage, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangeFBImageAnimForSaveLoad");

	Params::ULibCharacter_C_ChangeFBImageAnimForSaveLoad_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ActionType = ActionType;
	Parms.ActionDir = ActionDir;
	Parms.Job_ID = Job_ID;
	Parms.CharaForm = CharaForm;
	Parms.FBImage = FBImage;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.ChangeFBImageAnimForNPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFBImage*                    FBImage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::ChangeFBImageAnimForNPC(class FName CharacterLabel, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir, class UFBImage*& FBImage, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangeFBImageAnimForNPC");

	Params::ULibCharacter_C_ChangeFBImageAnimForNPC_Params Parms{};

	Parms.CharacterLabel = CharacterLabel;
	Parms.ActionType = ActionType;
	Parms.ActionDir = ActionDir;
	Parms.FBImage = FBImage;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.ChangeFBImageAnimForPC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         ActionDir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJOB_TYPE               Job_ID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CharaForm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFBImage*                    FBImage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::ChangeFBImageAnimForPC(int32 CharacterID, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir ActionDir, enum class EJOB_TYPE Job_ID, uint8 CharaForm, class UFBImage*& FBImage, bool IsLoop, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangeFBImageAnimForPC");

	Params::ULibCharacter_C_ChangeFBImageAnimForPC_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ActionType = ActionType;
	Parms.ActionDir = ActionDir;
	Parms.Job_ID = Job_ID;
	Parms.CharaForm = CharaForm;
	Parms.FBImage = FBImage;
	Parms.IsLoop = IsLoop;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibCharacter.LibCharacter_C.SetFBImageAnimation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFBImage*                    FBImage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::SetFBImageAnimation(class FName CharacterLabel, enum class EKSCharacterAction ActionType, enum class EKSCharacterDir Dir, class UFBImage*& FBImage, bool IsLoop, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SetFBImageAnimation");

	Params::ULibCharacter_C_SetFBImageAnimation_Params Parms{};

	Parms.CharacterLabel = CharacterLabel;
	Parms.ActionType = ActionType;
	Parms.Dir = Dir;
	Parms.FBImage = FBImage;
	Parms.IsLoop = IsLoop;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibCharacter.LibCharacter_C.GetNoBoostAbility
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityDataBase            ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

struct FAbilityDataBase ULibCharacter_C::GetNoBoostAbility(class FName RowName, class UObject* __WorldContext, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetNoBoostAbility");

	Params::ULibCharacter_C_GetNoBoostAbility_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

	return Parms.ReturnValue;

}


// Function LibCharacter.LibCharacter_C.ChangePlayerSecondJobNone
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::ChangePlayerSecondJobNone(int32 CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangePlayerSecondJobNone");

	Params::ULibCharacter_C_ChangePlayerSecondJobNone_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.SubCharacterParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharacterParam             BaseParam                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FCharacterParam             AddParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             ResultParam                                                      (Parm, OutParm, NoDestructor)

void ULibCharacter_C::SubCharacterParam(struct FCharacterParam& BaseParam, struct FCharacterParam& AddParam, class UObject* __WorldContext, struct FCharacterParam* ResultParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SubCharacterParam");

	Params::ULibCharacter_C_SubCharacterParam_Params Parms{};

	Parms.BaseParam = BaseParam;
	Parms.AddParam = AddParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultParam != nullptr)
		*ResultParam = std::move(Parms.ResultParam);

}


// Function LibCharacter.LibCharacter_C.GetEquipmentRevisionParamSpecific
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EquipmentItemLabel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             EquipRevision                                                    (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetEquipmentRevisionParamSpecific(class FName EquipmentItemLabel, class UObject* __WorldContext, struct FCharacterParam* EquipRevision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetEquipmentRevisionParamSpecific");

	Params::ULibCharacter_C_GetEquipmentRevisionParamSpecific_Params Parms{};

	Parms.EquipmentItemLabel = EquipmentItemLabel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipRevision != nullptr)
		*EquipRevision = std::move(Parms.EquipRevision);

}


// Function LibCharacter.LibCharacter_C.GetEquipmentRevisionParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             EquipRevision                                                    (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetEquipmentRevisionParam(int32 CharacterID, class UObject* __WorldContext, struct FCharacterParam* EquipRevision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetEquipmentRevisionParam");

	Params::ULibCharacter_C_GetEquipmentRevisionParam_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipRevision != nullptr)
		*EquipRevision = std::move(Parms.EquipRevision);

}


// Function LibCharacter.LibCharacter_C.RefreshEquipRevision
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RefreshEquipRevision(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RefreshEquipRevision");

	Params::ULibCharacter_C_RefreshEquipRevision_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.CalcAddJobPoint
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddJobPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddFirstJobPoint                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstJobComplete                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RestFirstJP                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::CalcAddJobPoint(int32 CharacterID, int32 AddJobPoint, class UObject* __WorldContext, int32* AddFirstJobPoint, bool* FirstJobComplete, int32* RestFirstJP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CalcAddJobPoint");

	Params::ULibCharacter_C_CalcAddJobPoint_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.AddJobPoint = AddJobPoint;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AddFirstJobPoint != nullptr)
		*AddFirstJobPoint = Parms.AddFirstJobPoint;

	if (FirstJobComplete != nullptr)
		*FirstJobComplete = Parms.FirstJobComplete;

	if (RestFirstJP != nullptr)
		*RestFirstJP = Parms.RestFirstJP;

}


// Function LibCharacter.LibCharacter_C.CheckJobAbilityComplete
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RestComplete                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::CheckJobAbilityComplete(int32 CharacterID, class UObject* __WorldContext, bool* Complete, int32* RestComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CheckJobAbilityComplete");

	Params::ULibCharacter_C_CheckJobAbilityComplete_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

	if (RestComplete != nullptr)
		*RestComplete = Parms.RestComplete;

}


// Function LibCharacter.LibCharacter_C.GetAbilityAcquisitionList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       AcquisitionList                                                  (Parm, OutParm)

void ULibCharacter_C::GetAbilityAcquisitionList(int32 CharacterID, int32 JobID, class UObject* __WorldContext, TArray<bool>* AcquisitionList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetAbilityAcquisitionList");

	Params::ULibCharacter_C_GetAbilityAcquisitionList_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AcquisitionList != nullptr)
		*AcquisitionList = std::move(Parms.AcquisitionList);

}


// Function LibCharacter.LibCharacter_C.AcquisitionSupportAbility
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FJobLearnAbility>    AcquisitionAbility                                               (Parm, OutParm)

void ULibCharacter_C::AcquisitionSupportAbility(int32 CharacterID, int32 JobID, class UObject* __WorldContext, TArray<struct FJobLearnAbility>* AcquisitionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "AcquisitionSupportAbility");

	Params::ULibCharacter_C_AcquisitionSupportAbility_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AcquisitionAbility != nullptr)
		*AcquisitionAbility = std::move(Parms.AcquisitionAbility);

}


// Function LibCharacter.LibCharacter_C.GetJobAcquisitionCommandAbilityNum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AcquisitionNum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetJobAcquisitionCommandAbilityNum(int32 CharacterID, int32 JobID, class UObject* __WorldContext, int32* AcquisitionNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobAcquisitionCommandAbilityNum");

	Params::ULibCharacter_C_GetJobAcquisitionCommandAbilityNum_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AcquisitionNum != nullptr)
		*AcquisitionNum = Parms.AcquisitionNum;

}


// Function LibCharacter.LibCharacter_C.GetPartnerParameter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             Result                                                           (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetPartnerParameter(class UObject* __WorldContext, struct FCharacterParam* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPartnerParameter");

	Params::ULibCharacter_C_GetPartnerParameter_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibCharacter.LibCharacter_C.AddParameter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::AddParameter(int32 Base, int32 Add, class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "AddParameter");

	Params::ULibCharacter_C_AddParameter_Params Parms{};

	Parms.Base = Base;
	Parms.Add = Add;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.GetCueSheetName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsJapanese                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                VoiceCueSheet                                                    (Parm, OutParm)

void ULibCharacter_C::GetCueSheetName(int32 CharacterID, bool IsJapanese, class UObject* __WorldContext, TArray<class FName>* VoiceCueSheet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCueSheetName");

	Params::ULibCharacter_C_GetCueSheetName_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.IsJapanese = IsJapanese;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (VoiceCueSheet != nullptr)
		*VoiceCueSheet = std::move(Parms.VoiceCueSheet);

}


// Function LibCharacter.LibCharacter_C.CheckEquipedSupportAbility
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EquipIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::CheckEquipedSupportAbility(int32 CharacterID, int32 AbilityID, class UObject* __WorldContext, int32* EquipIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CheckEquipedSupportAbility");

	Params::ULibCharacter_C_CheckEquipedSupportAbility_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.AbilityID = AbilityID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipIndex != nullptr)
		*EquipIndex = Parms.EquipIndex;

}


// Function LibCharacter.LibCharacter_C.GetSelectSupportAbilityCorrectionParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      SupportAbilityIDs                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CorrectionParam                                                  (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetSelectSupportAbilityCorrectionParam(TArray<int32>& SupportAbilityIDs, int32 CharaID, class UObject* __WorldContext, struct FCharacterParam* CorrectionParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetSelectSupportAbilityCorrectionParam");

	Params::ULibCharacter_C_GetSelectSupportAbilityCorrectionParam_Params Parms{};

	Parms.SupportAbilityIDs = SupportAbilityIDs;
	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CorrectionParam != nullptr)
		*CorrectionParam = std::move(Parms.CorrectionParam);

}


// Function LibCharacter.LibCharacter_C.GetSupportAbilityCorrectionParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CorrectionParam                                                  (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetSupportAbilityCorrectionParam(int32 CharaID, class UObject* __WorldContext, struct FCharacterParam* CorrectionParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetSupportAbilityCorrectionParam");

	Params::ULibCharacter_C_GetSupportAbilityCorrectionParam_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CorrectionParam != nullptr)
		*CorrectionParam = std::move(Parms.CorrectionParam);

}


// Function LibCharacter.LibCharacter_C.SettingPartySupportAbility
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::SettingPartySupportAbility(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "SettingPartySupportAbility");

	Params::ULibCharacter_C_SettingPartySupportAbility_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.GetPartyTopCharacterID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharacterID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetPartyTopCharacterID(class UObject* __WorldContext, enum class EPlayableCharacterID* CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPartyTopCharacterID");

	Params::ULibCharacter_C_GetPartyTopCharacterID_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterID != nullptr)
		*CharacterID = Parms.CharacterID;

}


// Function LibCharacter.LibCharacter_C.EquipmentSupportAbility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::EquipmentSupportAbility(int32 CharacterID, int32 AbilityID, int32 Slot, class UObject* __WorldContext, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "EquipmentSupportAbility");

	Params::ULibCharacter_C_EquipmentSupportAbility_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.AbilityID = AbilityID;
	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function LibCharacter.LibCharacter_C.GetPlayerAcquisitionSupportAbilityList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                SupportAbilitySetList                                            (Parm, OutParm)

void ULibCharacter_C::GetPlayerAcquisitionSupportAbilityList(int32 CharacterID, class UObject* __WorldContext, TArray<class FName>* SupportAbilitySetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerAcquisitionSupportAbilityList");

	Params::ULibCharacter_C_GetPlayerAcquisitionSupportAbilityList_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SupportAbilitySetList != nullptr)
		*SupportAbilitySetList = std::move(Parms.SupportAbilitySetList);

}


// Function LibCharacter.LibCharacter_C.AcquisitionAbility
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UseJP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::AcquisitionAbility(int32 CharacterID, int32 JobID, class FName AbilityName, int32 UseJP, class UObject* __WorldContext, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "AcquisitionAbility");

	Params::ULibCharacter_C_AcquisitionAbility_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.JobID = JobID;
	Parms.AbilityName = AbilityName;
	Parms.UseJP = UseJP;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function LibCharacter.LibCharacter_C.EquipPartToProperEqpIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEQUIPMENT_PART         Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULibCharacter_C::EquipPartToProperEqpIndex(enum class EEQUIPMENT_PART Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "EquipPartToProperEqpIndex");

	Params::ULibCharacter_C_EquipPartToProperEqpIndex_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibCharacter.LibCharacter_C.ChangePlayerSecondJob
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChangeJobID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::ChangePlayerSecondJob(int32 CharacterID, int32 ChangeJobID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "ChangePlayerSecondJob");

	Params::ULibCharacter_C_ChangePlayerSecondJob_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.ChangeJobID = ChangeJobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.Get Now Select Job ID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSavePlayerCharacterData    SaveCharacterData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Now_Select_Job_ID(struct FSavePlayerCharacterData& SaveCharacterData, class UObject* __WorldContext, int32* JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Now Select Job ID");

	Params::ULibCharacter_C_Get_Now_Select_Job_ID_Params Parms{};

	Parms.SaveCharacterData = SaveCharacterData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JobID != nullptr)
		*JobID = Parms.JobID;

}


// Function LibCharacter.LibCharacter_C.CalcParameterCorrectionOnly
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Revision                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::CalcParameterCorrectionOnly(int32 Base, int32 Revision, class UObject* __WorldContext, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CalcParameterCorrectionOnly");

	Params::ULibCharacter_C_CalcParameterCorrectionOnly_Params Parms{};

	Parms.Base = Base;
	Parms.Revision = Revision;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibCharacter.LibCharacter_C.GetPlayerBaseParameter
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             ResultParam                                                      (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetPlayerBaseParameter(int32 Level, class UObject* __WorldContext, struct FCharacterParam* ResultParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerBaseParameter");

	Params::ULibCharacter_C_GetPlayerBaseParameter_Params Parms{};

	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultParam != nullptr)
		*ResultParam = std::move(Parms.ResultParam);

}


// Function LibCharacter.LibCharacter_C.Get Player Symbol by ID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECHARACTER_SYMBOL_TYPE  SymbolType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  SymbolTexture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::Get_Player_Symbol_by_ID(enum class EPlayableCharacterID PlayerID, enum class ECHARACTER_SYMBOL_TYPE SymbolType, class UObject* __WorldContext, class UTexture2D** SymbolTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Get Player Symbol by ID");

	Params::ULibCharacter_C_Get_Player_Symbol_by_ID_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.SymbolType = SymbolType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SymbolTexture != nullptr)
		*SymbolTexture = Parms.SymbolTexture;

}


// Function LibCharacter.LibCharacter_C.CanCharacterEquipToPart
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::CanCharacterEquipToPart(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CanCharacterEquipToPart");

	Params::ULibCharacter_C_CanCharacterEquipToPart_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipmentPart = EquipmentPart;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.GetParameterText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEQUIPMENT_ITEM_PARAM   EquipItemParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void ULibCharacter_C::GetParameterText(enum class EEQUIPMENT_ITEM_PARAM EquipItemParam, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetParameterText");

	Params::ULibCharacter_C_GetParameterText_Params Parms{};

	Parms.EquipItemParam = EquipItemParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function LibCharacter.LibCharacter_C.GetCharacterEquipmentSingle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ULibCharacter_C::GetCharacterEquipmentSingle(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetCharacterEquipmentSingle");

	Params::ULibCharacter_C_GetCharacterEquipmentSingle_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipmentPart = EquipmentPart;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibCharacter.LibCharacter_C.GetPlayerJobData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FJobData                    FirstJobData                                                     (Parm, OutParm)
// struct FJobData                    SecondJobData                                                    (Parm, OutParm)

void ULibCharacter_C::GetPlayerJobData(int32 CharacterID, class UObject* __WorldContext, struct FJobData* FirstJobData, struct FJobData* SecondJobData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerJobData");

	Params::ULibCharacter_C_GetPlayerJobData_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FirstJobData != nullptr)
		*FirstJobData = std::move(Parms.FirstJobData);

	if (SecondJobData != nullptr)
		*SecondJobData = std::move(Parms.SecondJobData);

}


// Function LibCharacter.LibCharacter_C.GetPlayerProperEquipment
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       Result                                                           (Parm, OutParm)

void ULibCharacter_C::GetPlayerProperEquipment(int32 CharacterID, class UObject* __WorldContext, TArray<bool>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerProperEquipment");

	Params::ULibCharacter_C_GetPlayerProperEquipment_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibCharacter.LibCharacter_C.GetJobDataByRowName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FJobData                    JobData                                                          (Parm, OutParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::GetJobDataByRowName(class FName RowName, class UObject* __WorldContext, struct FJobData* JobData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobDataByRowName");

	Params::ULibCharacter_C_GetJobDataByRowName_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JobData != nullptr)
		*JobData = std::move(Parms.JobData);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibCharacter.LibCharacter_C.GetJobData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FJobData                    JobData                                                          (Parm, OutParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::GetJobData(int32 JobID, class UObject* __WorldContext, struct FJobData* JobData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetJobData");

	Params::ULibCharacter_C_GetJobData_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (JobData != nullptr)
		*JobData = std::move(Parms.JobData);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LibCharacter.LibCharacter_C.IsJobDataExistsByRowName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibCharacter_C::IsJobDataExistsByRowName(class FName RowName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsJobDataExistsByRowName");

	Params::ULibCharacter_C_IsJobDataExistsByRowName_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibCharacter.LibCharacter_C.IsJobDataExists
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibCharacter_C::IsJobDataExists(int32 JobID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsJobDataExists");

	Params::ULibCharacter_C_IsJobDataExists_Params Parms{};

	Parms.JobID = JobID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LibCharacter.LibCharacter_C.RemoveEquipmentItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEQUIPMENT_PART         EquipmentPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::RemoveEquipmentItem(int32 CharacterID, enum class EEQUIPMENT_PART EquipmentPart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "RemoveEquipmentItem");

	Params::ULibCharacter_C_RemoveEquipmentItem_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.EquipmentPart = EquipmentPart;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.IsPartyFullRecovery
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::IsPartyFullRecovery(class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "IsPartyFullRecovery");

	Params::ULibCharacter_C_IsPartyFullRecovery_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.Calc Player Parameter Internal
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             DopingData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FCharacterParam             ParamRevision                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             CharacterParam                                                   (Parm, OutParm, NoDestructor)

void ULibCharacter_C::Calc_Player_Parameter_Internal(int32 Level, const struct FCharacterParam& DopingData, const struct FCharacterParam& ParamRevision, class UObject* __WorldContext, struct FCharacterParam* CharacterParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Calc Player Parameter Internal");

	Params::ULibCharacter_C_Calc_Player_Parameter_Internal_Params Parms{};

	Parms.Level = Level;
	Parms.DopingData = DopingData;
	Parms.ParamRevision = ParamRevision;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterParam != nullptr)
		*CharacterParam = std::move(Parms.CharacterParam);

}


// Function LibCharacter.LibCharacter_C.AddJobPoint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddPoint                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::AddJobPoint(int32 CharacterID, int32 AddPoint, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "AddJobPoint");

	Params::ULibCharacter_C_AddJobPoint_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.AddPoint = AddPoint;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.FullRecoveryCharacter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFullRecoveryPotentialiActionpoint                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::FullRecoveryCharacter(int32 CharacterID, bool IsFullRecoveryPotentialiActionpoint, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "FullRecoveryCharacter");

	Params::ULibCharacter_C_FullRecoveryCharacter_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.IsFullRecoveryPotentialiActionpoint = IsFullRecoveryPotentialiActionpoint;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.AddCharacterExp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LevelUp                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::AddCharacterExp(int32 CharacterID, int32 AddExp, class UObject* __WorldContext, bool* LevelUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "AddCharacterExp");

	Params::ULibCharacter_C_AddCharacterExp_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.AddExp = AddExp;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelUp != nullptr)
		*LevelUp = Parms.LevelUp;

}


// Function LibCharacter.LibCharacter_C.CheckAlive
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Alive                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::CheckAlive(int32 CharacterID, class UObject* __WorldContext, bool* Alive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CheckAlive");

	Params::ULibCharacter_C_CheckAlive_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Alive != nullptr)
		*Alive = Parms.Alive;

}


// Function LibCharacter.LibCharacter_C.CanRecoveryMP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::CanRecoveryMP(int32 CharacterID, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CanRecoveryMP");

	Params::ULibCharacter_C_CanRecoveryMP_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.Can Recovery POT
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::Can_Recovery_POT(int32 CharacterID, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "Can Recovery POT");

	Params::ULibCharacter_C_Can_Recovery_POT_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.CanRevival
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::CanRevival(int32 CharacterID, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CanRevival");

	Params::ULibCharacter_C_CanRevival_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.CanRecoveryHP
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibCharacter_C::CanRecoveryHP(int32 CharacterID, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CanRecoveryHP");

	Params::ULibCharacter_C_CanRecoveryHP_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function LibCharacter.LibCharacter_C.FullRecoveryParty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::FullRecoveryParty(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "FullRecoveryParty");

	Params::ULibCharacter_C_FullRecoveryParty_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibCharacter.LibCharacter_C.GetPlayerJobIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  FirstJobIcon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  SecondJobIcon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetPlayerJobIcon(int32 CharacterID, class UObject* __WorldContext, class UTexture2D** FirstJobIcon, class UTexture2D** SecondJobIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerJobIcon");

	Params::ULibCharacter_C_GetPlayerJobIcon_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FirstJobIcon != nullptr)
		*FirstJobIcon = Parms.FirstJobIcon;

	if (SecondJobIcon != nullptr)
		*SecondJobIcon = Parms.SecondJobIcon;

}


// Function LibCharacter.LibCharacter_C.GetPlayerJobName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        FirstJob                                                         (Parm, OutParm)
// class FText                        SecondJob                                                        (Parm, OutParm)

void ULibCharacter_C::GetPlayerJobName(int32 CharacterID, class UObject* __WorldContext, class FText* FirstJob, class FText* SecondJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerJobName");

	Params::ULibCharacter_C_GetPlayerJobName_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (FirstJob != nullptr)
		*FirstJob = Parms.FirstJob;

	if (SecondJob != nullptr)
		*SecondJob = Parms.SecondJob;

}


// Function LibCharacter.LibCharacter_C.CalcParameter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Revision                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::CalcParameter(int32 Base, int32 Revision, class UObject* __WorldContext, int32* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "CalcParameter");

	Params::ULibCharacter_C_CalcParameter_Params Parms{};

	Parms.Base = Base;
	Parms.Revision = Revision;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function LibCharacter.LibCharacter_C.GetPlayerParameterByID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterParam             Result                                                           (Parm, OutParm, NoDestructor)

void ULibCharacter_C::GetPlayerParameterByID(int32 CharaID, class UObject* __WorldContext, struct FCharacterParam* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetPlayerParameterByID");

	Params::ULibCharacter_C_GetPlayerParameterByID_Params Parms{};

	Parms.CharaID = CharaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function LibCharacter.LibCharacter_C.GetNeedExpForLevel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextExp                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalExp                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibCharacter_C::GetNeedExpForLevel(int32 Level, class UObject* __WorldContext, int32* NextExp, int32* TotalExp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibCharacter_C", "GetNeedExpForLevel");

	Params::ULibCharacter_C_GetNeedExpForLevel_Params Parms{};

	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (NextExp != nullptr)
		*NextExp = Parms.NextExp;

	if (TotalExp != nullptr)
		*TotalExp = Parms.TotalExp;

}

}


