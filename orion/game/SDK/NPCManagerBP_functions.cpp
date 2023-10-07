#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass NPCManagerBP.NPCManagerBP_C
// (Actor)

class UClass* ANPCManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCManagerBP_C");

	return Clss;
}


// NPCManagerBP_C NPCManagerBP.Default__NPCManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPCManagerBP_C* ANPCManagerBP_C::GetDefaultObj()
{
	static class ANPCManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPCManagerBP_C*>(ANPCManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCManagerBP.NPCManagerBP_C.RecoverSwoonNPC_TZChange
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ANPCManagerBP_C::RecoverSwoonNPC_TZChange(int32 NPCIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "RecoverSwoonNPC_TZChange");

	Params::ANPCManagerBP_C_RecoverSwoonNPC_TZChange_Params Parms{};

	Parms.NPCIndex = NPCIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCManagerBP.NPCManagerBP_C.SwoonNPCRecoverInternal
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NPCID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNPCBattleData              NPCBattleData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ANPCManagerBP_C::SwoonNPCRecoverInternal(int32 NPCID, struct FNPCBattleData& NPCBattleData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "SwoonNPCRecoverInternal");

	Params::ANPCManagerBP_C_SwoonNPCRecoverInternal_Params Parms{};

	Parms.NPCID = NPCID;
	Parms.NPCBattleData = NPCBattleData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCManagerBP.NPCManagerBP_C.RecoverAllSwoonNPC
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ANPCManagerBP_C::RecoverAllSwoonNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "RecoverAllSwoonNPC");

	Params::ANPCManagerBP_C_RecoverAllSwoonNPC_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCManagerBP.NPCManagerBP_C.RecoverSwoonNPC
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ANPCManagerBP_C::RecoverSwoonNPC(class FName& NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "RecoverSwoonNPC");

	Params::ANPCManagerBP_C_RecoverSwoonNPC_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCManagerBP.NPCManagerBP_C.AddSwoonNPC
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENpcSwoonType           SwoonType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ANPCManagerBP_C::AddSwoonNPC(class FName& NPCLabel, enum class ENpcSwoonType SwoonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "AddSwoonNPC");

	Params::ANPCManagerBP_C_AddSwoonNPC_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.SwoonType = SwoonType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCManagerBP.NPCManagerBP_C.CreateSwoonNPCList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ANPCManagerBP_C::CreateSwoonNPCList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "CreateSwoonNPCList");

	Params::ANPCManagerBP_C_CreateSwoonNPCList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPCManagerBP.NPCManagerBP_C.RecoverSwoonNPC_LevelChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NextLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPCManagerBP_C::RecoverSwoonNPC_LevelChange(class FName NextLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "RecoverSwoonNPC_LevelChange");

	Params::ANPCManagerBP_C_RecoverSwoonNPC_LevelChange_Params Parms{};

	Parms.NextLevel = NextLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCManagerBP.NPCManagerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANPCManagerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPCManagerBP.NPCManagerBP_C.ExecuteUbergraph_NPCManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPCManagerBP_C::ExecuteUbergraph_NPCManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NPCManagerBP_C", "ExecuteUbergraph_NPCManagerBP");

	Params::ANPCManagerBP_C_ExecuteUbergraph_NPCManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


