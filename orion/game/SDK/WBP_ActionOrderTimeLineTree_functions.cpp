#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C
// (None)

class UClass* UWBP_ActionOrderTimeLineTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ActionOrderTimeLineTree_C");

	return Clss;
}


// WBP_ActionOrderTimeLineTree_C WBP_ActionOrderTimeLineTree.Default__WBP_ActionOrderTimeLineTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ActionOrderTimeLineTree_C* UWBP_ActionOrderTimeLineTree_C::GetDefaultObj()
{
	static class UWBP_ActionOrderTimeLineTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ActionOrderTimeLineTree_C*>(UWBP_ActionOrderTimeLineTree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.PlayPartyChangeAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeToA                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ActionOrderTimeLineTree_C::PlayPartyChangeAnim(bool ChangeToA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_ActionOrderTimeLineTree_C", "PlayPartyChangeAnim");

	Params::UWBP_ActionOrderTimeLineTree_C_PlayPartyChangeAnim_Params Parms{};

	Parms.ChangeToA = ChangeToA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.GetTimeLineWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsA                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActionOrderTimeLine_C*      TargetWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionOrderTimeLineTree_C::GetTimeLineWidget(bool IsA, class UActionOrderTimeLine_C** TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_ActionOrderTimeLineTree_C", "GetTimeLineWidget");

	Params::UWBP_ActionOrderTimeLineTree_C_GetTimeLineWidget_Params Parms{};

	Parms.IsA = IsA;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;

}


// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.DetachTimeLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ActionOrderTimeLineTree_C::DetachTimeLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_ActionOrderTimeLineTree_C", "DetachTimeLine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionOrderTimeLineTree.WBP_ActionOrderTimeLineTree_C.AttachTimeLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsA                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActionOrderTimeLine_C*      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionOrderTimeLineTree_C::AttachTimeLine(bool IsA, class UActionOrderTimeLine_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_ActionOrderTimeLineTree_C", "AttachTimeLine");

	Params::UWBP_ActionOrderTimeLineTree_C_AttachTimeLine_Params Parms{};

	Parms.IsA = IsA;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


