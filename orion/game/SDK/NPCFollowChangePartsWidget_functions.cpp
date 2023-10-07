#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NPCFollowChangePartsWidget.NPCFollowChangePartsWidget_C
// (None)

class UClass* UNPCFollowChangePartsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCFollowChangePartsWidget_C");

	return Clss;
}


// NPCFollowChangePartsWidget_C NPCFollowChangePartsWidget.Default__NPCFollowChangePartsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPCFollowChangePartsWidget_C* UNPCFollowChangePartsWidget_C::GetDefaultObj()
{
	static class UNPCFollowChangePartsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPCFollowChangePartsWidget_C*>(UNPCFollowChangePartsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCFollowChangePartsWidget.NPCFollowChangePartsWidget_C.DetachWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCFollowChangePartsWidget_C::DetachWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFollowChangePartsWidget_C", "DetachWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCFollowChangePartsWidget.NPCFollowChangePartsWidget_C.AttachWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 LeftWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 RightWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCFollowChangePartsWidget_C::AttachWidget(class UUserWidget* LeftWidget, class UUserWidget* RightWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCFollowChangePartsWidget_C", "AttachWidget");

	Params::UNPCFollowChangePartsWidget_C_AttachWidget_Params Parms{};

	Parms.LeftWidget = LeftWidget;
	Parms.RightWidget = RightWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


