#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_SupporterAndEnemyToNpcTableMaker.BP_SupporterAndEnemyToNpcTableMaker_C
// (None)

class UClass* UBP_SupporterAndEnemyToNpcTableMaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SupporterAndEnemyToNpcTableMaker_C");

	return Clss;
}


// BP_SupporterAndEnemyToNpcTableMaker_C BP_SupporterAndEnemyToNpcTableMaker.Default__BP_SupporterAndEnemyToNpcTableMaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SupporterAndEnemyToNpcTableMaker_C* UBP_SupporterAndEnemyToNpcTableMaker_C::GetDefaultObj()
{
	static class UBP_SupporterAndEnemyToNpcTableMaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SupporterAndEnemyToNpcTableMaker_C*>(UBP_SupporterAndEnemyToNpcTableMaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SupporterAndEnemyToNpcTableMaker.BP_SupporterAndEnemyToNpcTableMaker_C.GetEnemyLabelsByEnemyGroup
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                OutEnemeyLabels                                                  (Parm, OutParm)
// class FName                        EnemyGroupLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SupporterAndEnemyToNpcTableMaker_C::GetEnemyLabelsByEnemyGroup(TArray<class FName>* OutEnemeyLabels, class FName EnemyGroupLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_SupporterAndEnemyToNpcTableMaker_C", "GetEnemyLabelsByEnemyGroup");

	Params::UBP_SupporterAndEnemyToNpcTableMaker_C_GetEnemyLabelsByEnemyGroup_Params Parms{};

	Parms.EnemyGroupLabel = EnemyGroupLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEnemeyLabels != nullptr)
		*OutEnemeyLabels = std::move(Parms.OutEnemeyLabels);

	return Parms.ReturnValue;

}

}


