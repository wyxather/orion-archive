#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DiseaseListItem.WBP_DiseaseListItem_C
// (None)

class UClass* UWBP_DiseaseListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DiseaseListItem_C");

	return Clss;
}


// WBP_DiseaseListItem_C WBP_DiseaseListItem.Default__WBP_DiseaseListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DiseaseListItem_C* UWBP_DiseaseListItem_C::GetDefaultObj()
{
	static class UWBP_DiseaseListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DiseaseListItem_C*>(UWBP_DiseaseListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DiseaseListItem.WBP_DiseaseListItem_C.Setup
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiseaseListItemData        Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_DiseaseListItem_C::Setup(struct FDiseaseListItemData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_DiseaseListItem_C", "Setup");

	Params::UWBP_DiseaseListItem_C_Setup_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DiseaseListItem.WBP_DiseaseListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DiseaseListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_DiseaseListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DiseaseListItem.WBP_DiseaseListItem_C.ExecuteUbergraph_WBP_DiseaseListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DiseaseListItem_C::ExecuteUbergraph_WBP_DiseaseListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_DiseaseListItem_C", "ExecuteUbergraph_WBP_DiseaseListItem");

	Params::UWBP_DiseaseListItem_C_ExecuteUbergraph_WBP_DiseaseListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


