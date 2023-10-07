#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibArea.LibArea_C
// (None)

class UClass* ULibArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibArea_C");

	return Clss;
}


// LibArea_C LibArea.Default__LibArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibArea_C* ULibArea_C::GetDefaultObj()
{
	static class ULibArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibArea_C*>(ULibArea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibArea.LibArea_C.GetAreaNameForMissionRecord
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAreaID                 AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AreaNameID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibArea_C::GetAreaNameForMissionRecord(enum class EAreaID AreaID, class UObject* __WorldContext, class FName* AreaNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibArea_C", "GetAreaNameForMissionRecord");

	Params::ULibArea_C_GetAreaNameForMissionRecord_Params Parms{};

	Parms.AreaID = AreaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AreaNameID != nullptr)
		*AreaNameID = Parms.AreaNameID;

}


// Function LibArea.LibArea_C.ConvertAreaIDToAreaLowName
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAreaID                 NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibArea_C::ConvertAreaIDToAreaLowName(enum class EAreaID NewParam, class UObject* __WorldContext, class FName* RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibArea_C", "ConvertAreaIDToAreaLowName");

	Params::ULibArea_C_ConvertAreaIDToAreaLowName_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RowName != nullptr)
		*RowName = Parms.RowName;

}


// Function LibArea.LibArea_C.GetAreaEmblem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAreaID                 AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Symbol                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibArea_C::GetAreaEmblem(enum class EAreaID AreaID, class UObject* __WorldContext, class UTexture2D** Symbol)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibArea_C", "GetAreaEmblem");

	Params::ULibArea_C_GetAreaEmblem_Params Parms{};

	Parms.AreaID = AreaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Symbol != nullptr)
		*Symbol = Parms.Symbol;

}


// Function LibArea.LibArea_C.GetMTownByAreaID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAreaID                 AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MTownIconID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibArea_C::GetMTownByAreaID(enum class EAreaID AreaID, class UObject* __WorldContext, class FName* MTownIconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibArea_C", "GetMTownByAreaID");

	Params::ULibArea_C_GetMTownByAreaID_Params Parms{};

	Parms.AreaID = AreaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (MTownIconID != nullptr)
		*MTownIconID = Parms.MTownIconID;

}


// Function LibArea.LibArea_C.GetAreaName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAreaID                 AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AreaNameID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibArea_C::GetAreaName(enum class EAreaID AreaID, class UObject* __WorldContext, class FName* AreaNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibArea_C", "GetAreaName");

	Params::ULibArea_C_GetAreaName_Params Parms{};

	Parms.AreaID = AreaID;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AreaNameID != nullptr)
		*AreaNameID = Parms.AreaNameID;

}

}


