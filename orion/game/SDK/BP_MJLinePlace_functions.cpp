#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_MJLinePlace.BP_MJLinePlace_C
// (Actor)

class UClass* ABP_MJLinePlace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MJLinePlace_C");

	return Clss;
}


// BP_MJLinePlace_C BP_MJLinePlace.Default__BP_MJLinePlace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MJLinePlace_C* ABP_MJLinePlace_C::GetDefaultObj()
{
	static class ABP_MJLinePlace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MJLinePlace_C*>(ABP_MJLinePlace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MJLinePlace.BP_MJLinePlace_C.Release
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::Release()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "Release");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.GetPartsMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              IndexX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexY                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexZ                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NotUseRandom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MJLinePlace_C::GetPartsMesh(int32 IndexX, int32 IndexY, int32 IndexZ, bool NotUseRandom, class UStaticMesh** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "GetPartsMesh");

	Params::ABP_MJLinePlace_C_GetPartsMesh_Params Parms{};

	Parms.IndexX = IndexX;
	Parms.IndexY = IndexY;
	Parms.IndexZ = IndexZ;
	Parms.NotUseRandom = NotUseRandom;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.CreateLinePlaceY
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartsCountX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartsCountY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartsCountZ                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MJLinePlace_C::CreateLinePlaceY(int32& PartsCountX, int32& PartsCountY, int32& PartsCountZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "CreateLinePlaceY");

	Params::ABP_MJLinePlace_C_CreateLinePlaceY_Params Parms{};

	Parms.PartsCountX = PartsCountX;
	Parms.PartsCountY = PartsCountY;
	Parms.PartsCountZ = PartsCountZ;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.GeneratePartsMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              IndexX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexY                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexZ                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MJLinePlace_C::GeneratePartsMesh(const struct FRotator& Rot, int32 IndexX, int32 IndexY, int32 IndexZ, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "GeneratePartsMesh");

	Params::ABP_MJLinePlace_C_GeneratePartsMesh_Params Parms{};

	Parms.Rot = Rot;
	Parms.IndexX = IndexX;
	Parms.IndexY = IndexY;
	Parms.IndexZ = IndexZ;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.CreateLinePlace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::CreateLinePlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "CreateLinePlace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.PrepareMeshLoopSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::PrepareMeshLoopSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "PrepareMeshLoopSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.CreateMeshTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::CreateMeshTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "CreateMeshTable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.CheckInputControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::CheckInputControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "CheckInputControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MJLinePlace_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "ReceiveEndPlay");

	Params::ABP_MJLinePlace_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_MJLinePlace_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJLinePlace.BP_MJLinePlace_C.ExecuteUbergraph_BP_MJLinePlace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MJLinePlace_C::ExecuteUbergraph_BP_MJLinePlace(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJLinePlace_C", "ExecuteUbergraph_BP_MJLinePlace");

	Params::ABP_MJLinePlace_C_ExecuteUbergraph_BP_MJLinePlace_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


