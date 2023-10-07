#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EffectManagerBP.EffectManagerBP_C
// (Actor)

class UClass* AEffectManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectManagerBP_C");

	return Clss;
}


// EffectManagerBP_C EffectManagerBP.Default__EffectManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffectManagerBP_C* AEffectManagerBP_C::GetDefaultObj()
{
	static class AEffectManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffectManagerBP_C*>(AEffectManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EffectManagerBP.EffectManagerBP_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEffectManagerBP_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "IsReady");

	Params::AEffectManagerBP_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EffectManagerBP.EffectManagerBP_C.DebugSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EffectLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VPos                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffectManagerBP_C::DebugSpawn(class FName EffectLabel, const struct FVector& VPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "DebugSpawn");

	Params::AEffectManagerBP_C_DebugSpawn_Params Parms{};

	Parms.EffectLabel = EffectLabel;
	Parms.VPos = VPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EffectManagerBP.EffectManagerBP_C.LoadEffectMakeTick
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEffectManagerBP_C::LoadEffectMakeTick(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "LoadEffectMakeTick");

	Params::AEffectManagerBP_C_LoadEffectMakeTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EffectManagerBP.EffectManagerBP_C.LoadEffectMakeEffect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffectManagerBP_C::LoadEffectMakeEffect(int32 StartIndex, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "LoadEffectMakeEffect");

	Params::AEffectManagerBP_C_LoadEffectMakeEffect_Params Parms{};

	Parms.StartIndex = StartIndex;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EffectManagerBP.EffectManagerBP_C.LoadEffectCleanup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::LoadEffectCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "LoadEffectCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.LoadEffectCreate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             ParticleSystem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LoopFlag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffectManagerBP_C::LoadEffectCreate(class UParticleSystem* ParticleSystem, int32 MaxCount, bool LoopFlag, int32 Index, const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "LoadEffectCreate");

	Params::AEffectManagerBP_C_LoadEffectCreate_Params Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.MaxCount = MaxCount;
	Parms.LoopFlag = LoopFlag;
	Parms.Index = Index;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EffectManagerBP.EffectManagerBP_C.LoadEffectComplete
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AEffectManagerBP_C::LoadEffectComplete(TArray<class UObject*>& Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "LoadEffectComplete");

	Params::AEffectManagerBP_C_LoadEffectComplete_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EffectManagerBP.EffectManagerBP_C.LoadEffect
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::LoadEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "LoadEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.InitializeEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::InitializeEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "InitializeEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.ClearAllEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::ClearAllEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "ClearAllEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.ExecInitializeEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::ExecInitializeEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "ExecInitializeEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.ExecEffectDBLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::ExecEffectDBLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "ExecEffectDBLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.NextEffectDBLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::NextEffectDBLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "NextEffectDBLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.ExecEffectSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::ExecEffectSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "ExecEffectSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.NextEffectSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEffectManagerBP_C::NextEffectSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "NextEffectSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EffectManagerBP.EffectManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffectManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "ReceiveTick");

	Params::AEffectManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EffectManagerBP.EffectManagerBP_C.DebugSpawnEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EffectLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              SpawnCnt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffectManagerBP_C::DebugSpawnEffect(class FName EffectLabel, uint8 SpawnCnt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "DebugSpawnEffect");

	Params::AEffectManagerBP_C_DebugSpawnEffect_Params Parms{};

	Parms.EffectLabel = EffectLabel;
	Parms.SpawnCnt = SpawnCnt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EffectManagerBP.EffectManagerBP_C.ExecuteUbergraph_EffectManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffectManagerBP_C::ExecuteUbergraph_EffectManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerBP_C", "ExecuteUbergraph_EffectManagerBP");

	Params::AEffectManagerBP_C_ExecuteUbergraph_EffectManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


