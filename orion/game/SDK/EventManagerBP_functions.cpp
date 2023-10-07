#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EventManagerBP.EventManagerBP_C
// (Actor)

class UClass* AEventManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventManagerBP_C");

	return Clss;
}


// EventManagerBP_C EventManagerBP.Default__EventManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEventManagerBP_C* AEventManagerBP_C::GetDefaultObj()
{
	static class AEventManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEventManagerBP_C*>(AEventManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventManagerBP.EventManagerBP_C.StartFullRecoveryAndPotentiality
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartFullRecoveryAndPotentiality(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartFullRecoveryAndPotentiality");

	Params::AEventManagerBP_C_StartFullRecoveryAndPotentiality_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.IsPlayReferenceSequencerDeepDirecting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::IsPlayReferenceSequencerDeepDirecting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "IsPlayReferenceSequencerDeepDirecting");

	Params::AEventManagerBP_C_IsPlayReferenceSequencerDeepDirecting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CheckOutputAtomData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::CheckOutputAtomData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CheckOutputAtomData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.MemberCountJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::MemberCountJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "MemberCountJump");

	Params::AEventManagerBP_C_MemberCountJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetThiefLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionLabel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::GetThiefLabel(class FName MissionLabel, class FName* ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetThiefLabel");

	Params::AEventManagerBP_C_GetThiefLabel_Params Parms{};

	Parms.MissionLabel = MissionLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionLabel != nullptr)
		*ActionLabel = Parms.ActionLabel;

}


// Function EventManagerBP.EventManagerBP_C.RestoreEventSkip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::RestoreEventSkip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RestoreEventSkip");

	Params::AEventManagerBP_C_RestoreEventSkip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartNotificationMessage
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartNotificationMessage(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartNotificationMessage");

	Params::AEventManagerBP_C_StartNotificationMessage_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartRadarMap
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartRadarMap(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartRadarMap");

	Params::AEventManagerBP_C_StartRadarMap_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CreateDialogEpilogue
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::CreateDialogEpilogue(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CreateDialogEpilogue");

	Params::AEventManagerBP_C_CreateDialogEpilogue_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateGetJobDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateGetJobDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateGetJobDialog");

	Params::AEventManagerBP_C_UpdateGetJobDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartGetJobDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartGetJobDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartGetJobDialog");

	Params::AEventManagerBP_C_StartGetJobDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CreateMessageText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AKSFieldNPCCharacter_C*      TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LineLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MessageLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void AEventManagerBP_C::CreateMessageText(class AKSFieldNPCCharacter_C* TargetCharacter, class FName LineLabel, class FName MessageLabel, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CreateMessageText");

	Params::AEventManagerBP_C_CreateMessageText_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.LineLabel = LineLabel;
	Parms.MessageLabel = MessageLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function EventManagerBP.EventManagerBP_C.UpdateCharaMoveStart
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateCharaMoveStart(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateCharaMoveStart");

	Params::AEventManagerBP_C_UpdateCharaMoveStart_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCharaMoveStart
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCharaMoveStart(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCharaMoveStart");

	Params::AEventManagerBP_C_StartCharaMoveStart_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateSpawnCharacterThief
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateSpawnCharacterThief(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateSpawnCharacterThief");

	Params::AEventManagerBP_C_UpdateSpawnCharacterThief_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SpawnCharacterThief
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnCharacterThief(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnCharacterThief");

	Params::AEventManagerBP_C_SpawnCharacterThief_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartOpenEndCardEpilogueUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartOpenEndCardEpilogueUI(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartOpenEndCardEpilogueUI");

	Params::AEventManagerBP_C_StartOpenEndCardEpilogueUI_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateCharaFadeOut
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateCharaFadeOut(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateCharaFadeOut");

	Params::AEventManagerBP_C_UpdateCharaFadeOut_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateCharaFadeIn
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateCharaFadeIn(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateCharaFadeIn");

	Params::AEventManagerBP_C_UpdateCharaFadeIn_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCharaFadeOut
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCharaFadeOut(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCharaFadeOut");

	Params::AEventManagerBP_C_StartCharaFadeOut_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCharaFadeIn
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCharaFadeIn(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCharaFadeIn");

	Params::AEventManagerBP_C_StartCharaFadeIn_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.ExecCameraMoving
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::ExecCameraMoving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ExecCameraMoving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.RandomNumberJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::RandomNumberJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RandomNumberJump");

	Params::AEventManagerBP_C_RandomNumberJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CreateRandomNumber
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::CreateRandomNumber(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CreateRandomNumber");

	Params::AEventManagerBP_C_CreateRandomNumber_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCancelSwoon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCancelSwoon(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCancelSwoon");

	Params::AEventManagerBP_C_StartCancelSwoon_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.Update_CameraMove
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::Update_CameraMove(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "Update_CameraMove");

	Params::AEventManagerBP_C_Update_CameraMove_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.ReferenceSequencerDeepDirectingAttachPlayer
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::ReferenceSequencerDeepDirectingAttachPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ReferenceSequencerDeepDirectingAttachPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.UpdateWPMEventReflection
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateWPMEventReflection(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateWPMEventReflection");

	Params::AEventManagerBP_C_UpdateWPMEventReflection_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateWPMEventEnd
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateWPMEventEnd(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateWPMEventEnd");

	Params::AEventManagerBP_C_UpdateWPMEventEnd_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateWPMEventCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateWPMEventCheck(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateWPMEventCheck");

	Params::AEventManagerBP_C_UpdateWPMEventCheck_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateWPMEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateWPMEvent(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateWPMEvent");

	Params::AEventManagerBP_C_UpdateWPMEvent_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartWPMEventReflection
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartWPMEventReflection(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartWPMEventReflection");

	Params::AEventManagerBP_C_StartWPMEventReflection_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartWPMEventEnd
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartWPMEventEnd(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartWPMEventEnd");

	Params::AEventManagerBP_C_StartWPMEventEnd_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartWPMEventCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartWPMEventCheck(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartWPMEventCheck");

	Params::AEventManagerBP_C_StartWPMEventCheck_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartWPMEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartWPMEvent(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartWPMEvent");

	Params::AEventManagerBP_C_StartWPMEvent_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateSelectMemberDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateSelectMemberDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateSelectMemberDialog");

	Params::AEventManagerBP_C_UpdateSelectMemberDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSelectMemberJump
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSelectMemberJump(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSelectMemberJump");

	Params::AEventManagerBP_C_StartSelectMemberJump_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSelectMemberDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSelectMemberDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSelectMemberDialog");

	Params::AEventManagerBP_C_StartSelectMemberDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateEventFadeOut
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateEventFadeOut(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateEventFadeOut");

	Params::AEventManagerBP_C_UpdateEventFadeOut_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateEventFadeIn
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateEventFadeIn(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateEventFadeIn");

	Params::AEventManagerBP_C_UpdateEventFadeIn_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEventFadeOut
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEventFadeOut(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEventFadeOut");

	Params::AEventManagerBP_C_StartEventFadeOut_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEventFadeIn
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEventFadeIn(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEventFadeIn");

	Params::AEventManagerBP_C_StartEventFadeIn_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetAnimationLabelPartyPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              PartyPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AnimationLabel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::GetAnimationLabelPartyPosition(int32 PartyPosition, class FName* AnimationLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetAnimationLabelPartyPosition");

	Params::AEventManagerBP_C_GetAnimationLabelPartyPosition_Params Parms{};

	Parms.PartyPosition = PartyPosition;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationLabel != nullptr)
		*AnimationLabel = Parms.AnimationLabel;

}


// Function EventManagerBP.EventManagerBP_C.SpawnCharacterPartyPosition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnCharacterPartyPosition(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnCharacterPartyPosition");

	Params::AEventManagerBP_C_SpawnCharacterPartyPosition_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetSpawnNPCAnimationLabel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESPAWN_CHARA_TYPE       SpawnType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SpawnLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AnimationLabel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::GetSpawnNPCAnimationLabel(enum class ESPAWN_CHARA_TYPE SpawnType, const class FString& SpawnLabel, bool* Found, class FName* AnimationLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetSpawnNPCAnimationLabel");

	Params::AEventManagerBP_C_GetSpawnNPCAnimationLabel_Params Parms{};

	Parms.SpawnType = SpawnType;
	Parms.SpawnLabel = SpawnLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (AnimationLabel != nullptr)
		*AnimationLabel = Parms.AnimationLabel;

}


// Function EventManagerBP.EventManagerBP_C.SpawnCharacterPlacement
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnCharacterPlacement(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnCharacterPlacement");

	Params::AEventManagerBP_C_SpawnCharacterPlacement_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SpawnCharacterNPC
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnCharacterNPC(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnCharacterNPC");

	Params::AEventManagerBP_C_SpawnCharacterNPC_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetLevelTrigger
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ELevelTriggerID         TriggerID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::GetLevelTrigger(enum class ELevelTriggerID* TriggerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetLevelTrigger");

	Params::AEventManagerBP_C_GetLevelTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TriggerID != nullptr)
		*TriggerID = Parms.TriggerID;

}


// Function EventManagerBP.EventManagerBP_C.CheckEventPlayBGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PlayBGMl                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASoundManagerBP_C*           SoundManagerBP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChangeBGM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::CheckEventPlayBGM(class FName PlayBGMl, class ASoundManagerBP_C* SoundManagerBP, bool* ChangeBGM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CheckEventPlayBGM");

	Params::AEventManagerBP_C_CheckEventPlayBGM_Params Parms{};

	Parms.PlayBGMl = PlayBGMl;
	Parms.SoundManagerBP = SoundManagerBP;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeBGM != nullptr)
		*ChangeBGM = Parms.ChangeBGM;

}


// Function EventManagerBP.EventManagerBP_C.OnClosedKSPartySplit
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPARTY_SPLIT_CLOSE_REASONReason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::OnClosedKSPartySplit(enum class EPARTY_SPLIT_CLOSE_REASON Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "OnClosedKSPartySplit");

	Params::AEventManagerBP_C_OnClosedKSPartySplit_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.StartSetSwoonEventObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSetSwoonEventObject(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSetSwoonEventObject");

	Params::AEventManagerBP_C_StartSetSwoonEventObject_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSetSwoon
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSetSwoon(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSetSwoon");

	Params::AEventManagerBP_C_StartSetSwoon_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartRecoverSwoonEventChara
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartRecoverSwoonEventChara(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartRecoverSwoonEventChara");

	Params::AEventManagerBP_C_StartRecoverSwoonEventChara_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSuccsessFCTypeLabelJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSuccsessFCTypeLabelJump(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSuccsessFCTypeLabelJump");

	Params::AEventManagerBP_C_StartSuccsessFCTypeLabelJump_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.HaveMeatItemJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::HaveMeatItemJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "HaveMeatItemJump");

	Params::AEventManagerBP_C_HaveMeatItemJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartOpenEndCardUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartOpenEndCardUI(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartOpenEndCardUI");

	Params::AEventManagerBP_C_StartOpenEndCardUI_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetEnableEventObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::SetEnableEventObject(int32 Flag, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetEnableEventObject");

	Params::AEventManagerBP_C_SetEnableEventObject_Params Parms{};

	Parms.Flag = Flag;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.SetEventObjectEnableTheater
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::SetEventObjectEnableTheater(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetEventObjectEnableTheater");

	Params::AEventManagerBP_C_SetEventObjectEnableTheater_Params Parms{};

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.OnFinishAutoSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccesss                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::OnFinishAutoSave(const class FString& SlotName, int32 UserIndex, bool IsSuccesss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "OnFinishAutoSave");

	Params::AEventManagerBP_C_OnFinishAutoSave_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.IsSuccesss = IsSuccesss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.StartFinalBattleStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartFinalBattleStart(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartFinalBattleStart");

	Params::AEventManagerBP_C_StartFinalBattleStart_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.ReferenceSequencerStartDeepDirecting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::ReferenceSequencerStartDeepDirecting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ReferenceSequencerStartDeepDirecting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.ReferenceSequencerEndDeepDirecting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::ReferenceSequencerEndDeepDirecting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ReferenceSequencerEndDeepDirecting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.StartPreparationBattleStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartPreparationBattleStart(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartPreparationBattleStart");

	Params::AEventManagerBP_C_StartPreparationBattleStart_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSubTitleNextBlock
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSubTitleNextBlock(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSubTitleNextBlock");

	Params::AEventManagerBP_C_StartSubTitleNextBlock_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSubTitle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSubTitle(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSubTitle");

	Params::AEventManagerBP_C_StartSubTitle_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.HaveItemJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::HaveItemJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "HaveItemJump");

	Params::AEventManagerBP_C_HaveItemJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetFinishEncountWipe
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::GetFinishEncountWipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetFinishEncountWipe");

	Params::AEventManagerBP_C_GetFinishEncountWipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetTalkDataGeneral
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TalkTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventData                  Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EEventBalloonDir        BalloonDir                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ret                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::SetTalkDataGeneral(class AKSCharacterBase* TalkTarget, class AKSCharacterBase* OwnerCharacter, const struct FEventData& Param, enum class EEventBalloonDir BalloonDir, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetTalkDataGeneral");

	Params::AEventManagerBP_C_SetTalkDataGeneral_Params Parms{};

	Parms.TalkTarget = TalkTarget;
	Parms.OwnerCharacter = OwnerCharacter;
	Parms.Param = Param;
	Parms.BalloonDir = BalloonDir;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;

}


// Function EventManagerBP.EventManagerBP_C.StartTalkGeneral
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTalkGeneral(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTalkGeneral");

	Params::AEventManagerBP_C_StartTalkGeneral_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetSwitchIndoorTriggerIndex
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TriggerName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AEventManagerBP_C::GetSwitchIndoorTriggerIndex(const class FString& TriggerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetSwitchIndoorTriggerIndex");

	Params::AEventManagerBP_C_GetSwitchIndoorTriggerIndex_Params Parms{};

	Parms.TriggerName = TriggerName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetMaterialEnvParams
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::SetMaterialEnvParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetMaterialEnvParams");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.GetMaterialEnvParams
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::GetMaterialEnvParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetMaterialEnvParams");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.StartGetTameMonster
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartGetTameMonster(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartGetTameMonster");

	Params::AEventManagerBP_C_StartGetTameMonster_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateGetItemDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateGetItemDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateGetItemDialog");

	Params::AEventManagerBP_C_UpdateGetItemDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartGetItemDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartGetItemDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartGetItemDialog");

	Params::AEventManagerBP_C_StartGetItemDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FindLegendSeaMonsterIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Awake                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      AwakeAfter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              FindIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::FindLegendSeaMonsterIndex(const class FString& Normal, const class FString& Awake, const class FString& AwakeAfter, int32* FindIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FindLegendSeaMonsterIndex");

	Params::AEventManagerBP_C_FindLegendSeaMonsterIndex_Params Parms{};

	Parms.Normal = Normal;
	Parms.Awake = Awake;
	Parms.AwakeAfter = AwakeAfter;

	UObject::ProcessEvent(Func, &Parms);

	if (FindIndex != nullptr)
		*FindIndex = Parms.FindIndex;

}


// Function EventManagerBP.EventManagerBP_C.SetLegendMonsterAwakening
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAWAKENING_MONSTER_PARAMEAwake                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetLegendMonsterAwakening(enum class EAWAKENING_MONSTER_PARAM EAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetLegendMonsterAwakening");

	Params::AEventManagerBP_C_SetLegendMonsterAwakening_Params Parms{};

	Parms.EAwake = EAwake;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCameraRotation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCameraRotation(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCameraRotation");

	Params::AEventManagerBP_C_StartCameraRotation_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.LearnInventorSupportAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLearned                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        AbilityLabel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::LearnInventorSupportAbility(bool* IsLearned, class FName* AbilityLabel, int32* AbilityIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "LearnInventorSupportAbility");

	Params::AEventManagerBP_C_LearnInventorSupportAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsLearned != nullptr)
		*IsLearned = Parms.IsLearned;

	if (AbilityLabel != nullptr)
		*AbilityLabel = Parms.AbilityLabel;

	if (AbilityIndex != nullptr)
		*AbilityIndex = Parms.AbilityIndex;

}


// Function EventManagerBP.EventManagerBP_C.UpdateInventorLearnAbilityFrow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::UpdateInventorLearnAbilityFrow(enum class ESequenceResult* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateInventorLearnAbilityFrow");

	Params::AEventManagerBP_C_UpdateInventorLearnAbilityFrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function EventManagerBP.EventManagerBP_C.CheckInventorItemList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnoughItem                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EquipItem                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::CheckInventorItemList(bool* EnoughItem, bool* EquipItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CheckInventorItemList");

	Params::AEventManagerBP_C_CheckInventorItemList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnoughItem != nullptr)
		*EnoughItem = Parms.EnoughItem;

	if (EquipItem != nullptr)
		*EquipItem = Parms.EquipItem;

}


// Function EventManagerBP.EventManagerBP_C.StartShipPutUpSail
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartShipPutUpSail(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartShipPutUpSail");

	Params::AEventManagerBP_C_StartShipPutUpSail_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.IsHaveInventItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventionMaterial          TargetMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               IsFind                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCheck                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::IsHaveInventItem(const struct FInventionMaterial& TargetMaterial, bool IsFind, int32 NewParam, bool* IsCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "IsHaveInventItem");

	Params::AEventManagerBP_C_IsHaveInventItem_Params Parms{};

	Parms.TargetMaterial = TargetMaterial;
	Parms.IsFind = IsFind;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCheck != nullptr)
		*IsCheck = Parms.IsCheck;

}


// Function EventManagerBP.EventManagerBP_C.UpdateInventorFrow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESequenceResult         ReturnParam                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::UpdateInventorFrow(enum class ESequenceResult* ReturnParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateInventorFrow");

	Params::AEventManagerBP_C_UpdateInventorFrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnParam != nullptr)
		*ReturnParam = Parms.ReturnParam;

}


// Function EventManagerBP.EventManagerBP_C.UpdateInventorLearnAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateInventorLearnAbility(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateInventorLearnAbility");

	Params::AEventManagerBP_C_UpdateInventorLearnAbility_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateInventorEventDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateInventorEventDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateInventorEventDialog");

	Params::AEventManagerBP_C_UpdateInventorEventDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartInventorLearnAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartInventorLearnAbility(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartInventorLearnAbility");

	Params::AEventManagerBP_C_StartInventorLearnAbility_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartInventorEventDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartInventorEventDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartInventorEventDialog");

	Params::AEventManagerBP_C_StartInventorEventDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateOpenPartySquadWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateOpenPartySquadWidget(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateOpenPartySquadWidget");

	Params::AEventManagerBP_C_UpdateOpenPartySquadWidget_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartOpenPartySquadWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartOpenPartySquadWidget(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartOpenPartySquadWidget");

	Params::AEventManagerBP_C_StartOpenPartySquadWidget_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartWeaponMasterFrow
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartWeaponMasterFrow(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartWeaponMasterFrow");

	Params::AEventManagerBP_C_StartWeaponMasterFrow_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CheckDifferentTimeSequencer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULevelSequence*              Sequencer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Equal                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::CheckDifferentTimeSequencer(class ULevelSequence* Sequencer, bool* Equal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CheckDifferentTimeSequencer");

	Params::AEventManagerBP_C_CheckDifferentTimeSequencer_Params Parms{};

	Parms.Sequencer = Sequencer;

	UObject::ProcessEvent(Func, &Parms);

	if (Equal != nullptr)
		*Equal = Parms.Equal;

}


// Function EventManagerBP.EventManagerBP_C.StartEventFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::StartEventFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEventFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.StartTalkPartner
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTalkPartner(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTalkPartner");

	Params::AEventManagerBP_C_StartTalkPartner_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.PartnerCharacterJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::PartnerCharacterJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "PartnerCharacterJump");

	Params::AEventManagerBP_C_PartnerCharacterJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetTimeZoneTheater
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OverrideTimeZone                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::SetTimeZoneTheater(class FName EventName, int32 OverrideTimeZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetTimeZoneTheater");

	Params::AEventManagerBP_C_SetTimeZoneTheater_Params Parms{};

	Parms.EventName = EventName;
	Parms.OverrideTimeZone = OverrideTimeZone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.StartTopCharaTypeLabelJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTopCharaTypeLabelJump(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTopCharaTypeLabelJump");

	Params::AEventManagerBP_C_StartTopCharaTypeLabelJump_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CallbackTheaterPrologueEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::CallbackTheaterPrologueEnd(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CallbackTheaterPrologueEnd");

	Params::AEventManagerBP_C_CallbackTheaterPrologueEnd_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.StartChangePartySet
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangePartySet(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangePartySet");

	Params::AEventManagerBP_C_StartChangePartySet_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FinishPartySplitUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnClosedPartySplitParam    Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEventManagerBP_C::FinishPartySplitUI(const struct FOnClosedPartySplitParam& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishPartySplitUI");

	Params::AEventManagerBP_C_FinishPartySplitUI_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.UpdateOpenPartySplitWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateOpenPartySplitWidget(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateOpenPartySplitWidget");

	Params::AEventManagerBP_C_UpdateOpenPartySplitWidget_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartOpenPartySplitWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartOpenPartySplitWidget(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartOpenPartySplitWidget");

	Params::AEventManagerBP_C_StartOpenPartySplitWidget_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateFieldCommandDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateFieldCommandDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateFieldCommandDialog");

	Params::AEventManagerBP_C_UpdateFieldCommandDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateSubStoryLabelJump
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateSubStoryLabelJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateSubStoryLabelJump");

	Params::AEventManagerBP_C_UpdateSubStoryLabelJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSubStoryLabelJump
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSubStoryLabelJump(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSubStoryLabelJump");

	Params::AEventManagerBP_C_StartSubStoryLabelJump_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartFinishTempPartySetting
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartFinishTempPartySetting(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartFinishTempPartySetting");

	Params::AEventManagerBP_C_StartFinishTempPartySetting_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartTempPartySetting
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTempPartySetting(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTempPartySetting");

	Params::AEventManagerBP_C_StartTempPartySetting_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdatePartnerSelectDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdatePartnerSelectDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdatePartnerSelectDialog");

	Params::AEventManagerBP_C_UpdatePartnerSelectDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartPartnerSelectDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartPartnerSelectDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartPartnerSelectDialog");

	Params::AEventManagerBP_C_StartPartnerSelectDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FollowCharacterJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::FollowCharacterJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FollowCharacterJump");

	Params::AEventManagerBP_C_FollowCharacterJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEndPlayReminiscene
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEndPlayReminiscene(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEndPlayReminiscene");

	Params::AEventManagerBP_C_StartEndPlayReminiscene_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartBeginPlayReminiscene
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartBeginPlayReminiscene(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartBeginPlayReminiscene");

	Params::AEventManagerBP_C_StartBeginPlayReminiscene_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.AddReminiscenceDialogFinishCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::AddReminiscenceDialogFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "AddReminiscenceDialogFinishCallback");

	Params::AEventManagerBP_C_AddReminiscenceDialogFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.UpdateReminiscenceDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateReminiscenceDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateReminiscenceDialog");

	Params::AEventManagerBP_C_UpdateReminiscenceDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartReminisceneDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartReminisceneDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartReminisceneDialog");

	Params::AEventManagerBP_C_StartReminisceneDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetResumeGamePlaySystem
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::SetResumeGamePlaySystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetResumeGamePlaySystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.SetPartnerNumber
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetPartnerNumber(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetPartnerNumber");

	Params::AEventManagerBP_C_SetPartnerNumber_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSequencerStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSequencerStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSequencerStop");

	Params::AEventManagerBP_C_StartSequencerStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartHouseInSettingPlaySeq
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartHouseInSettingPlaySeq(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartHouseInSettingPlaySeq");

	Params::AEventManagerBP_C_StartHouseInSettingPlaySeq_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetOpenCloseDoorFunction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetOpenCloseDoorFunction(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetOpenCloseDoorFunction");

	Params::AEventManagerBP_C_SetOpenCloseDoorFunction_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.LoadSubSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  InEventData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::LoadSubSequencer(struct FEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "LoadSubSequencer");

	Params::AEventManagerBP_C_LoadSubSequencer_Params Parms{};

	Parms.InEventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartLeaveMember
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartLeaveMember(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartLeaveMember");

	Params::AEventManagerBP_C_StartLeaveMember_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.AddMemberFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::AddMemberFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "AddMemberFinishCallback");

	Params::AEventManagerBP_C_AddMemberFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.SubDeliMessageFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::SubDeliMessageFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SubDeliMessageFinishCallback");

	Params::AEventManagerBP_C_SubDeliMessageFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.AddMemberDialogFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::AddMemberDialogFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "AddMemberDialogFinishCallback");

	Params::AEventManagerBP_C_AddMemberDialogFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.DialogFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::DialogFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "DialogFinishCallback");

	Params::AEventManagerBP_C_DialogFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.SubDeliveryFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::SubDeliveryFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SubDeliveryFinishCallback");

	Params::AEventManagerBP_C_SubDeliveryFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.GetSwitchIndoorTrigger
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ASwitchIndoorTriggerBP_C*    SwitchIndoorTrigger                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::GetSwitchIndoorTrigger(const class FString& Name, class ASwitchIndoorTriggerBP_C** SwitchIndoorTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetSwitchIndoorTrigger");

	Params::AEventManagerBP_C_GetSwitchIndoorTrigger_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

	if (SwitchIndoorTrigger != nullptr)
		*SwitchIndoorTrigger = Parms.SwitchIndoorTrigger;

}


// Function EventManagerBP.EventManagerBP_C.StartPlaySE
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartPlaySE(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartPlaySE");

	Params::AEventManagerBP_C_StartPlaySE_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCameraLock
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCameraLock(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCameraLock");

	Params::AEventManagerBP_C_StartCameraLock_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetPostProcessDeepThink
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AKSCharacterBase*            RefTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetPostProcessDeepThink(bool Enable, class AKSCharacterBase* RefTarget, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetPostProcessDeepThink");

	Params::AEventManagerBP_C_SetPostProcessDeepThink_Params Parms{};

	Parms.Enable = Enable;
	Parms.RefTarget = RefTarget;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartUIPartyEdit
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartUIPartyEdit(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartUIPartyEdit");

	Params::AEventManagerBP_C_StartUIPartyEdit_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateEndroll
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateEndroll(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateEndroll");

	Params::AEventManagerBP_C_UpdateEndroll_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEndroll
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEndroll(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEndroll");

	Params::AEventManagerBP_C_StartEndroll_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateEndrollInit
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateEndrollInit(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateEndrollInit");

	Params::AEventManagerBP_C_UpdateEndrollInit_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEndrollInit
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEndrollInit(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEndrollInit");

	Params::AEventManagerBP_C_StartEndrollInit_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateMainMissionProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMainMission                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::UpdateMainMissionProgress(bool* IsMainMission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateMainMissionProgress");

	Params::AEventManagerBP_C_UpdateMainMissionProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMainMission != nullptr)
		*IsMainMission = Parms.IsMainMission;

}


// Function EventManagerBP.EventManagerBP_C.StartNotificationCountShow
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartNotificationCountShow(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartNotificationCountShow");

	Params::AEventManagerBP_C_StartNotificationCountShow_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.PlayEventTheater
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::PlayEventTheater(class FName& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "PlayEventTheater");

	Params::AEventManagerBP_C_PlayEventTheater_Params Parms{};

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.NextPurposeMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::NextPurposeMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "NextPurposeMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.UpdateUIStorySelect
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateUIStorySelect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateUIStorySelect");

	Params::AEventManagerBP_C_UpdateUIStorySelect_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartUIStorySelect
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartUIStorySelect(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartUIStorySelect");

	Params::AEventManagerBP_C_StartUIStorySelect_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartAutoSave
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartAutoSave(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartAutoSave");

	Params::AEventManagerBP_C_StartAutoSave_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetEventCheckFlag
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetEventCheckFlag(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetEventCheckFlag");

	Params::AEventManagerBP_C_SetEventCheckFlag_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartUnlockFasttravel
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartUnlockFasttravel(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartUnlockFasttravel");

	Params::AEventManagerBP_C_StartUnlockFasttravel_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.EventLoadLevel
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InLevelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EventSoundLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventPlayBGM           InEventPlayBGM                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayBGMLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::EventLoadLevel(class FName InLevelID, class FName EventSoundLabel, enum class EEventPlayBGM InEventPlayBGM, const class FString& PlayBGMLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "EventLoadLevel");

	Params::AEventManagerBP_C_EventLoadLevel_Params Parms{};

	Parms.InLevelID = InLevelID;
	Parms.EventSoundLabel = EventSoundLabel;
	Parms.InEventPlayBGM = InEventPlayBGM;
	Parms.PlayBGMLabel = PlayBGMLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartUINote
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartUINote(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartUINote");

	Params::AEventManagerBP_C_StartUINote_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateExPartyChange
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateExPartyChange(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateExPartyChange");

	Params::AEventManagerBP_C_UpdateExPartyChange_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEnableEventObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEnableEventObject(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEnableEventObject");

	Params::AEventManagerBP_C_StartEnableEventObject_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartOKDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartOKDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartOKDialog");

	Params::AEventManagerBP_C_StartOKDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartFullRecovery
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartFullRecovery(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartFullRecovery");

	Params::AEventManagerBP_C_StartFullRecovery_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChangeArea
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangeArea(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangeArea");

	Params::AEventManagerBP_C_StartChangeArea_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateSubDelivMessageDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateSubDelivMessageDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateSubDelivMessageDialog");

	Params::AEventManagerBP_C_UpdateSubDelivMessageDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSubDelivMessageDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSubDelivMessageDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSubDelivMessageDialog");

	Params::AEventManagerBP_C_StartSubDelivMessageDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateAddMemberEnd
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateAddMemberEnd(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateAddMemberEnd");

	Params::AEventManagerBP_C_UpdateAddMemberEnd_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartAddMemberEnd
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AddMember                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartAddMemberEnd(struct FEventData& RefEventData, bool* AddMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartAddMemberEnd");

	Params::AEventManagerBP_C_StartAddMemberEnd_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	if (AddMember != nullptr)
		*AddMember = Parms.AddMember;

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.ClosePartyWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::ClosePartyWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ClosePartyWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.CheckPartyMember
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    ChkID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::CheckPartyMember(enum class EPlayableCharacterID ChkID, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CheckPartyMember");

	Params::AEventManagerBP_C_CheckPartyMember_Params Parms{};

	Parms.ChkID = ChkID;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function EventManagerBP.EventManagerBP_C.StartUIShop
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartUIShop(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartUIShop");

	Params::AEventManagerBP_C_StartUIShop_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartEndReminiscene
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartEndReminiscene(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartEndReminiscene");

	Params::AEventManagerBP_C_StartEndReminiscene_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartBeginReminiscene
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartBeginReminiscene(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartBeginReminiscene");

	Params::AEventManagerBP_C_StartBeginReminiscene_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateAddMemberDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateAddMemberDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateAddMemberDialog");

	Params::AEventManagerBP_C_UpdateAddMemberDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartAddMemberDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartAddMemberDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartAddMemberDialog");

	Params::AEventManagerBP_C_StartAddMemberDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartRefreshEventObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartRefreshEventObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartRefreshEventObject");

	Params::AEventManagerBP_C_StartRefreshEventObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.RecoverCameraLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::RecoverCameraLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RecoverCameraLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.RestoreTheater
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::RestoreTheater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RestoreTheater");

	Params::AEventManagerBP_C_RestoreTheater_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartOpenDoor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartOpenDoor(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartOpenDoor");

	Params::AEventManagerBP_C_StartOpenDoor_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FinishTheater
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::FinishTheater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishTheater");

	Params::AEventManagerBP_C_FinishTheater_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateChallengeDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateChallengeDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateChallengeDialog");

	Params::AEventManagerBP_C_UpdateChallengeDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChallengeDialog
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChallengeDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChallengeDialog");

	Params::AEventManagerBP_C_StartChallengeDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartTalkParty
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTalkParty(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTalkParty");

	Params::AEventManagerBP_C_StartTalkParty_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetPChatCharacterDir
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetPChatCharacterDir(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetPChatCharacterDir");

	Params::AEventManagerBP_C_SetPChatCharacterDir_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartTalkPChat
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTalkPChat(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTalkPChat");

	Params::AEventManagerBP_C_StartTalkPChat_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SpawnPChatCharacter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnPChatCharacter(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnPChatCharacter");

	Params::AEventManagerBP_C_SpawnPChatCharacter_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartPChatMode
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartPChatMode(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartPChatMode");

	Params::AEventManagerBP_C_StartPChatMode_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FinishPre
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::FinishPre()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishPre");

	Params::AEventManagerBP_C_FinishPre_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChangePlayerResource
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangePlayerResource(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangePlayerResource");

	Params::AEventManagerBP_C_StartChangePlayerResource_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartUIBar
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartUIBar(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartUIBar");

	Params::AEventManagerBP_C_StartUIBar_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartFlashbackStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartFlashbackStart(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartFlashbackStart");

	Params::AEventManagerBP_C_StartFlashbackStart_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartTalkPos
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTalkPos(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTalkPos");

	Params::AEventManagerBP_C_StartTalkPos_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.PlayAfterFadeOut
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::PlayAfterFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "PlayAfterFadeOut");

	Params::AEventManagerBP_C_PlayAfterFadeOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetCharacterPosition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SetCharacterPosition(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetCharacterPosition");

	Params::AEventManagerBP_C_SetCharacterPosition_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChangeMap
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangeMap(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangeMap");

	Params::AEventManagerBP_C_StartChangeMap_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartMovePos
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartMovePos(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartMovePos");

	Params::AEventManagerBP_C_StartMovePos_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.DialogFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OutNextEventName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::DialogFinish(class FString* OutNextEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "DialogFinish");

	Params::AEventManagerBP_C_DialogFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutNextEventName != nullptr)
		*OutNextEventName = std::move(Parms.OutNextEventName);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CreateDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::CreateDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CreateDialog");

	Params::AEventManagerBP_C_CreateDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.GetEventCharacterBP
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSFieldCharacter_C*         EventCharacter                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::GetEventCharacterBP(int32 Index, class AKSFieldCharacter_C** EventCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "GetEventCharacterBP");

	Params::AEventManagerBP_C_GetEventCharacterBP_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (EventCharacter != nullptr)
		*EventCharacter = Parms.EventCharacter;

}


// Function EventManagerBP.EventManagerBP_C.CommonBalloonOpenAnimEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::CommonBalloonOpenAnimEvent(class AKSCharacterBase* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CommonBalloonOpenAnimEvent");

	Params::AEventManagerBP_C_CommonBalloonOpenAnimEvent_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.BalloonNotFadeInEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBalloonEventType       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBalloonType            BalloonType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::BalloonNotFadeInEvent(enum class EBalloonEventType EventType, enum class EBalloonType BalloonType, class AKSCharacterBase* TargetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "BalloonNotFadeInEvent");

	Params::AEventManagerBP_C_BalloonNotFadeInEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.BalloonType = BalloonType;
	Parms.TargetType = TargetType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.CreateEventCharacter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESPAWN_CHARA_TYPE       EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventData                  InEventData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::CreateEventCharacter(enum class ESPAWN_CHARA_TYPE EType, struct FEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CreateEventCharacter");

	Params::AEventManagerBP_C_CreateEventCharacter_Params Parms{};

	Parms.EType = EType;
	Parms.InEventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartRecoverSwoon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartRecoverSwoon(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartRecoverSwoon");

	Params::AEventManagerBP_C_StartRecoverSwoon_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateTalkPostFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::UpdateTalkPostFade(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateTalkPostFade");

	Params::AEventManagerBP_C_UpdateTalkPostFade_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.RequestTalkPostFade
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartAlpha                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FinishAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUpdateDepth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::RequestTalkPostFade(float StartAlpha, float FinishAlpha, float FadeTime, bool IsUpdateDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RequestTalkPostFade");

	Params::AEventManagerBP_C_RequestTalkPostFade_Params Parms{};

	Parms.StartAlpha = StartAlpha;
	Parms.FinishAlpha = FinishAlpha;
	Parms.FadeTime = FadeTime;
	Parms.IsUpdateDepth = IsUpdateDepth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.BalloonEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBalloonEventType       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBalloonType            BalloonType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::BalloonEvent(enum class EBalloonEventType EventType, enum class EBalloonType BalloonType, class AKSCharacterBase* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "BalloonEvent");

	Params::AEventManagerBP_C_BalloonEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.BalloonType = BalloonType;
	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.UpdateAddMember
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateAddMember(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateAddMember");

	Params::AEventManagerBP_C_UpdateAddMember_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.RemoveBalloonAll
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::RemoveBalloonAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RemoveBalloonAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.StartAddMember
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartAddMember(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartAddMember");

	Params::AEventManagerBP_C_StartAddMember_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartDelFollow
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartDelFollow(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartDelFollow");

	Params::AEventManagerBP_C_StartDelFollow_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartStopEmotionIconAll
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartStopEmotionIconAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartStopEmotionIconAll");

	Params::AEventManagerBP_C_StartStopEmotionIconAll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.RemoveEventEffect
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::RemoveEventEffect(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RemoveEventEffect");

	Params::AEventManagerBP_C_RemoveEventEffect_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartPlayEmotionIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartPlayEmotionIcon(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartPlayEmotionIcon");

	Params::AEventManagerBP_C_StartPlayEmotionIcon_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SpawnEventEffect
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Label                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LifeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Pos                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnEventEffect(int32 ID, class FName& Label, float LifeTime, struct FVector& Pos, int32 TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnEventEffect");

	Params::AEventManagerBP_C_SpawnEventEffect_Params Parms{};

	Parms.ID = ID;
	Parms.Label = Label;
	Parms.LifeTime = LifeTime;
	Parms.Pos = Pos;
	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartCharacterPhysics
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCharacterPhysics(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCharacterPhysics");

	Params::AEventManagerBP_C_StartCharacterPhysics_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartHouseInSetting
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartHouseInSetting(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartHouseInSetting");

	Params::AEventManagerBP_C_StartHouseInSetting_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FinishEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::FinishEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishEvent");

	Params::AEventManagerBP_C_FinishEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.FinishEventSkip
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::FinishEventSkip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishEventSkip");

	Params::AEventManagerBP_C_FinishEventSkip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.BitFlagJump
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::BitFlagJump(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "BitFlagJump");

	Params::AEventManagerBP_C_BitFlagJump_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.CreateDeliveryText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AKSFieldNPCCharacter_C*      TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LineLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MessageLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void AEventManagerBP_C::CreateDeliveryText(class AKSFieldNPCCharacter_C* TargetCharacter, class FName LineLabel, class FName MessageLabel, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CreateDeliveryText");

	Params::AEventManagerBP_C_CreateDeliveryText_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.LineLabel = LineLabel;
	Parms.MessageLabel = MessageLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function EventManagerBP.EventManagerBP_C.UpdateSubDeliveryDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateSubDeliveryDialog(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateSubDeliveryDialog");

	Params::AEventManagerBP_C_UpdateSubDeliveryDialog_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartSubDeliveryDialog
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartSubDeliveryDialog(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartSubDeliveryDialog");

	Params::AEventManagerBP_C_StartSubDeliveryDialog_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.ConvertEvent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::ConvertEvent(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ConvertEvent");

	Params::AEventManagerBP_C_ConvertEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EventManagerBP.EventManagerBP_C.IsExecEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Exec                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::IsExecEvent(bool* Exec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "IsExecEvent");

	Params::AEventManagerBP_C_IsExecEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exec != nullptr)
		*Exec = Parms.Exec;

}


// Function EventManagerBP.EventManagerBP_C.StartJudgeMoney
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartJudgeMoney(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartJudgeMoney");

	Params::AEventManagerBP_C_StartJudgeMoney_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartModifyMP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartModifyMP(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartModifyMP");

	Params::AEventManagerBP_C_StartModifyMP_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartModifyHP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartModifyHP(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartModifyHP");

	Params::AEventManagerBP_C_StartModifyHP_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SpawnPlayerCharacter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnPlayerCharacter(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnPlayerCharacter");

	Params::AEventManagerBP_C_SpawnPlayerCharacter_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartObjectSpawn
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartObjectSpawn(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartObjectSpawn");

	Params::AEventManagerBP_C_StartObjectSpawn_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChangeItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangeItem(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangeItem");

	Params::AEventManagerBP_C_StartChangeItem_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChangeMoeny
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangeMoeny(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangeMoeny");

	Params::AEventManagerBP_C_StartChangeMoeny_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartChangeTitle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartChangeTitle(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartChangeTitle");

	Params::AEventManagerBP_C_StartChangeTitle_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartNarration
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartNarration(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartNarration");

	Params::AEventManagerBP_C_StartNarration_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateBattleStart
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateBattleStart(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateBattleStart");

	Params::AEventManagerBP_C_UpdateBattleStart_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartBattleStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartBattleStart(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartBattleStart");

	Params::AEventManagerBP_C_StartBattleStart_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.EventSetup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::EventSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "EventSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.StartCameraSpawn
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCameraSpawn(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCameraSpawn");

	Params::AEventManagerBP_C_StartCameraSpawn_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SetTalkData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TalkTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventData                  Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EEventBalloonDir        BalloonDir                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ret                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::SetTalkData(class AKSCharacterBase* TalkTarget, const struct FEventData& Param, enum class EEventBalloonDir BalloonDir, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetTalkData");

	Params::AEventManagerBP_C_SetTalkData_Params Parms{};

	Parms.TalkTarget = TalkTarget;
	Parms.Param = Param;
	Parms.BalloonDir = BalloonDir;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;

}


// Function EventManagerBP.EventManagerBP_C.StartCameraTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartCameraTarget(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartCameraTarget");

	Params::AEventManagerBP_C_StartCameraTarget_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateMove
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateMove(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateMove");

	Params::AEventManagerBP_C_UpdateMove_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartMove
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartMove(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartMove");

	Params::AEventManagerBP_C_StartMove_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.SpawnCharacter
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::SpawnCharacter(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SpawnCharacter");

	Params::AEventManagerBP_C_SpawnCharacter_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.StartTalk
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::StartTalk(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "StartTalk");

	Params::AEventManagerBP_C_StartTalk_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.PlayEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::PlayEvent(const class FString& EventName, class AKSCharacterBase* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "PlayEvent");

	Params::AEventManagerBP_C_PlayEvent_Params Parms{};

	Parms.EventName = EventName;
	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.UpdateTalk
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventManagerBP_C::UpdateTalk(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "UpdateTalk");

	Params::AEventManagerBP_C_UpdateTalk_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventManagerBP.EventManagerBP_C.Update_EventSkipFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::Update_EventSkipFadeOut(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "Update_EventSkipFadeOut");

	Params::AEventManagerBP_C_Update_EventSkipFadeOut_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.Update_EventSkipFadeIn
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::Update_EventSkipFadeIn(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "Update_EventSkipFadeIn");

	Params::AEventManagerBP_C_Update_EventSkipFadeIn_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.Update_StartFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DetalTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::Update_StartFadeOut(float DetalTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "Update_StartFadeOut");

	Params::AEventManagerBP_C_Update_StartFadeOut_Params Parms{};

	Parms.DetalTime = DetalTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ReceiveTick");

	Params::AEventManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.RemoveEventEffectAll
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::RemoveEventEffectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RemoveEventEffectAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.SetEventSkipInput
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSkipInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventManagerBP_C::SetEventSkipInput(bool IsSkipInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetEventSkipInput");

	Params::AEventManagerBP_C_SetEventSkipInput_Params Parms{};

	Parms.IsSkipInput = IsSkipInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.RemoveEmotionIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::RemoveEmotionIcon(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "RemoveEmotionIcon");

	Params::AEventManagerBP_C_RemoveEmotionIcon_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.EventSkipUIReset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::EventSkipUIReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "EventSkipUIReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.ActivateTheater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::ActivateTheater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ActivateTheater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.SetTheaterTimeZonePos
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::SetTheaterTimeZonePos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "SetTheaterTimeZonePos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.FinishEventSkipCallback_CharaReActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::FinishEventSkipCallback_CharaReActive(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishEventSkipCallback_CharaReActive");

	Params::AEventManagerBP_C_FinishEventSkipCallback_CharaReActive_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.FinishEventCallback_CharaReActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::FinishEventCallback_CharaReActive(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "FinishEventCallback_CharaReActive");

	Params::AEventManagerBP_C_FinishEventCallback_CharaReActive_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventManagerBP.EventManagerBP_C.CharaReActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventManagerBP_C::CharaReActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "CharaReActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventManagerBP.EventManagerBP_C.ExecuteUbergraph_EventManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventManagerBP_C::ExecuteUbergraph_EventManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventManagerBP_C", "ExecuteUbergraph_EventManagerBP");

	Params::AEventManagerBP_C_ExecuteUbergraph_EventManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


