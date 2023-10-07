#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EventFunctionBP.EventFunctionBP_C
// (None)

class UClass* UEventFunctionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventFunctionBP_C");

	return Clss;
}


// EventFunctionBP_C EventFunctionBP.Default__EventFunctionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventFunctionBP_C* UEventFunctionBP_C::GetDefaultObj()
{
	static class UEventFunctionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventFunctionBP_C*>(UEventFunctionBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventFunctionBP.EventFunctionBP_C.GetStartEventFadeColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEventListData              EventListData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventFunctionBP_C::GetStartEventFadeColor(struct FEventListData& EventListData, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "GetStartEventFadeColor");

	Params::UEventFunctionBP_C_GetStartEventFadeColor_Params Parms{};

	Parms.EventListData = EventListData;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function EventFunctionBP.EventFunctionBP_C.IsCheckPartyMemberNum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyNum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsCheckPartyMemberNum(int32 PartyNum, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsCheckPartyMemberNum");

	Params::UEventFunctionBP_C_IsCheckPartyMemberNum_Params Parms{};

	Parms.PartyNum = PartyNum;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function EventFunctionBP.EventFunctionBP_C.CheckPartyJoinCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SearchCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Join                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::CheckPartyJoinCharacter(const class FString& SearchCharacter, class UObject* __WorldContext, bool* Join)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "CheckPartyJoinCharacter");

	Params::UEventFunctionBP_C_CheckPartyJoinCharacter_Params Parms{};

	Parms.SearchCharacter = SearchCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Join != nullptr)
		*Join = Parms.Join;

}


// Function EventFunctionBP.EventFunctionBP_C.IsCheckPartyFullMember
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsCheckPartyFullMember(class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsCheckPartyFullMember");

	Params::UEventFunctionBP_C_IsCheckPartyFullMember_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function EventFunctionBP.EventFunctionBP_C.IsCheckLeadCharacters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Param1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param3                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param4                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsCheckLeadCharacters(class FName Param1, class FName Param2, class FName Param3, class FName Param4, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsCheckLeadCharacters");

	Params::UEventFunctionBP_C_IsCheckLeadCharacters_Params Parms{};

	Parms.Param1 = Param1;
	Parms.Param2 = Param2;
	Parms.Param3 = Param3;
	Parms.Param4 = Param4;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function EventFunctionBP.EventFunctionBP_C.CheckPlayEvent
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENPCEVENT_TYPE          EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        EventName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UEventFunctionBP_C::CheckPlayEvent(class AKSCharacterBase* TargetCharacter, enum class ENPCEVENT_TYPE EventType, FDelegateProperty_ Delegate, class UObject* __WorldContext, class FName* EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "CheckPlayEvent");

	Params::UEventFunctionBP_C_CheckPlayEvent_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.EventType = EventType;
	Parms.Delegate = Delegate;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EventName != nullptr)
		*EventName = Parms.EventName;

	return Parms.ReturnValue;

}


// Function EventFunctionBP.EventFunctionBP_C.GetPlayEventFromEventTypeAndParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENPCEVENT_TYPE          EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EventParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        EventName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EventNo                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UEventFunctionBP_C::GetPlayEventFromEventTypeAndParam(class FName NPCLabel, enum class ENPCEVENT_TYPE EventType, class FName EventParam, class UObject* __WorldContext, class FName* EventName, int32* EventNo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "GetPlayEventFromEventTypeAndParam");

	Params::UEventFunctionBP_C_GetPlayEventFromEventTypeAndParam_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.EventType = EventType;
	Parms.EventParam = EventParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EventName != nullptr)
		*EventName = Parms.EventName;

	if (EventNo != nullptr)
		*EventNo = Parms.EventNo;

	return Parms.ReturnValue;

}


// Function EventFunctionBP.EventFunctionBP_C.CheckHaveEventData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENPCEVENT_TYPE          EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEventFunctionBP_C::CheckHaveEventData(class FName NPCLabel, enum class ENPCEVENT_TYPE EventType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "CheckHaveEventData");

	Params::UEventFunctionBP_C_CheckHaveEventData_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.EventType = EventType;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventFunctionBP.EventFunctionBP_C.Check Play Event Type
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ENPCEVENT_TYPE          EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENPCEVENT_TYPE          CheckEventType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartFlag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndFlag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EventParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CheckEventParam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanPlayEvent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::Check_Play_Event_Type(enum class ENPCEVENT_TYPE EventType, enum class ENPCEVENT_TYPE CheckEventType, int32 StartFlag, int32 EndFlag, class FName EventParam, class FName CheckEventParam, class UObject* __WorldContext, bool* CanPlayEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "Check Play Event Type");

	Params::UEventFunctionBP_C_Check_Play_Event_Type_Params Parms{};

	Parms.EventType = EventType;
	Parms.CheckEventType = CheckEventType;
	Parms.StartFlag = StartFlag;
	Parms.EndFlag = EndFlag;
	Parms.EventParam = EventParam;
	Parms.CheckEventParam = CheckEventParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CanPlayEvent != nullptr)
		*CanPlayEvent = Parms.CanPlayEvent;

}


// Function EventFunctionBP.EventFunctionBP_C.PlayEventType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENPCEVENT_TYPE          EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENPCEVENT_TYPE          CheckEventType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartFlag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndFlag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EventParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CheckEventParam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayEvent                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::PlayEventType(enum class ENPCEVENT_TYPE EventType, enum class ENPCEVENT_TYPE CheckEventType, int32 StartFlag, int32 EndFlag, class FName EventParam, class FName CheckEventParam, class FName EventName, class AKSCharacterBase* TargetCharacter, class UObject* __WorldContext, bool* PlayEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "PlayEventType");

	Params::UEventFunctionBP_C_PlayEventType_Params Parms{};

	Parms.EventType = EventType;
	Parms.CheckEventType = CheckEventType;
	Parms.StartFlag = StartFlag;
	Parms.EndFlag = EndFlag;
	Parms.EventParam = EventParam;
	Parms.CheckEventParam = CheckEventParam;
	Parms.EventName = EventName;
	Parms.TargetCharacter = TargetCharacter;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayEvent != nullptr)
		*PlayEvent = Parms.PlayEvent;

}


// Function EventFunctionBP.EventFunctionBP_C.IsNPCAndItemDeliveryCheck
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel3                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel4                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsNPCAndItemDeliveryCheck(int32 NPCIndex, class FName ItemLabel1, int32 ItemNum1, class FName ItemLabel2, int32 ItemNum2, class FName ItemLabel3, int32 ItemNum3, class FName ItemLabel4, int32 ItemNum4, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsNPCAndItemDeliveryCheck");

	Params::UEventFunctionBP_C_IsNPCAndItemDeliveryCheck_Params Parms{};

	Parms.NPCIndex = NPCIndex;
	Parms.ItemLabel1 = ItemLabel1;
	Parms.ItemNum1 = ItemNum1;
	Parms.ItemLabel2 = ItemLabel2;
	Parms.ItemNum2 = ItemNum2;
	Parms.ItemLabel3 = ItemLabel3;
	Parms.ItemNum3 = ItemNum3;
	Parms.ItemLabel4 = ItemLabel4;
	Parms.ItemNum4 = ItemNum4;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EventFunctionBP.EventFunctionBP_C.IsInfoAndItemDeliveryCheck
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InfoItemLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel3                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel4                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemNum4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsInfoAndItemDeliveryCheck(class FName InfoItemLabel, class FName ItemLabel1, int32 ItemNum1, class FName ItemLabel2, int32 ItemNum2, class FName ItemLabel3, int32 ItemNum3, class FName ItemLabel4, int32 ItemNum4, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsInfoAndItemDeliveryCheck");

	Params::UEventFunctionBP_C_IsInfoAndItemDeliveryCheck_Params Parms{};

	Parms.InfoItemLabel = InfoItemLabel;
	Parms.ItemLabel1 = ItemLabel1;
	Parms.ItemNum1 = ItemNum1;
	Parms.ItemLabel2 = ItemLabel2;
	Parms.ItemNum2 = ItemNum2;
	Parms.ItemLabel3 = ItemLabel3;
	Parms.ItemNum3 = ItemNum3;
	Parms.ItemLabel4 = ItemLabel4;
	Parms.ItemNum4 = ItemNum4;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EventFunctionBP.EventFunctionBP_C.ActiveEventCheck
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlacementData              PlacementInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                EventLabels                                                      (Parm, OutParm)

void UEventFunctionBP_C::ActiveEventCheck(const struct FPlacementData& PlacementInfo, class UObject* __WorldContext, TArray<class FName>* EventLabels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "ActiveEventCheck");

	Params::UEventFunctionBP_C_ActiveEventCheck_Params Parms{};

	Parms.PlacementInfo = PlacementInfo;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EventLabels != nullptr)
		*EventLabels = std::move(Parms.EventLabels);

}


// Function EventFunctionBP.EventFunctionBP_C.IsLeadOtherTargetNPC
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCUnqIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsLeadOtherTargetNPC(int32 NPCUnqIndex, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsLeadOtherTargetNPC");

	Params::UEventFunctionBP_C_IsLeadOtherTargetNPC_Params Parms{};

	Parms.NPCUnqIndex = NPCUnqIndex;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function EventFunctionBP.EventFunctionBP_C.IsEventClear
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartFlag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndFlag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param3                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param4                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param5                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param6                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param7                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param8                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param9                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Param10                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSubEventClear                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsEventClear(uint8 EventType, int32 StartFlag, int32 EndFlag, class FName Param1, class FName Param2, class FName Param3, class FName Param4, class FName Param5, class FName Param6, class FName Param7, class FName Param8, class FName Param9, class FName Param10, class UObject* __WorldContext, bool* IsSubEventClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsEventClear");

	Params::UEventFunctionBP_C_IsEventClear_Params Parms{};

	Parms.EventType = EventType;
	Parms.StartFlag = StartFlag;
	Parms.EndFlag = EndFlag;
	Parms.Param1 = Param1;
	Parms.Param2 = Param2;
	Parms.Param3 = Param3;
	Parms.Param4 = Param4;
	Parms.Param5 = Param5;
	Parms.Param6 = Param6;
	Parms.Param7 = Param7;
	Parms.Param8 = Param8;
	Parms.Param9 = Param9;
	Parms.Param10 = Param10;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSubEventClear != nullptr)
		*IsSubEventClear = Parms.IsSubEventClear;

}


// Function EventFunctionBP.EventFunctionBP_C.IsItemDeliveryCheck
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCnt1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCnt2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel3                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCnt3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel4                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCnt4                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemLabel5                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCnt5                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::IsItemDeliveryCheck(class FName ItemLabel1, int32 ItemCnt1, class FName ItemLabel2, int32 ItemCnt2, class FName ItemLabel3, int32 ItemCnt3, class FName ItemLabel4, int32 ItemCnt4, class FName ItemLabel5, int32 ItemCnt5, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "IsItemDeliveryCheck");

	Params::UEventFunctionBP_C_IsItemDeliveryCheck_Params Parms{};

	Parms.ItemLabel1 = ItemLabel1;
	Parms.ItemCnt1 = ItemCnt1;
	Parms.ItemLabel2 = ItemLabel2;
	Parms.ItemCnt2 = ItemCnt2;
	Parms.ItemLabel3 = ItemLabel3;
	Parms.ItemCnt3 = ItemCnt3;
	Parms.ItemLabel4 = ItemLabel4;
	Parms.ItemCnt4 = ItemCnt4;
	Parms.ItemLabel5 = ItemLabel5;
	Parms.ItemCnt5 = ItemCnt5;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EventFunctionBP.EventFunctionBP_C.Is Event Flag Check DEPRECATED
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartFlag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndFlag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEvent                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventFunctionBP_C::Is_Event_Flag_Check_DEPRECATED(int32 StartFlag, int32 EndFlag, class UObject* __WorldContext, bool* IsPlayEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventFunctionBP_C", "Is Event Flag Check DEPRECATED");

	Params::UEventFunctionBP_C_Is_Event_Flag_Check_DEPRECATED_Params Parms{};

	Parms.StartFlag = StartFlag;
	Parms.EndFlag = EndFlag;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayEvent != nullptr)
		*IsPlayEvent = Parms.IsPlayEvent;

}

}


