// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Beastmaster_Enrage_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.FirePetSummonStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::FirePetSummonStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.FirePetSummonStarted");

	UA_Beastmaster_Enrage_Base_C_FirePetSummonStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetEnrageRiftActorClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UA_Beastmaster_Enrage_Base_C::GetEnrageRiftActorClass(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetEnrageRiftActorClass");

	UA_Beastmaster_Enrage_Base_C_GetEnrageRiftActorClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.InitRegisterProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::InitRegisterProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.InitRegisterProperties");

	UA_Beastmaster_Enrage_Base_C_InitRegisterProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetPetSpawnLoc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void UA_Beastmaster_Enrage_Base_C::GetPetSpawnLoc(struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetPetSpawnLoc");

	UA_Beastmaster_Enrage_Base_C_GetPetSpawnLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetOwnerPet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOakCharacter*           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UA_Beastmaster_Enrage_Base_C::GetOwnerPet(class AOakCharacter** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetOwnerPet");

	UA_Beastmaster_Enrage_Base_C_GetOwnerPet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.DoPreTeleportEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::DoPreTeleportEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.DoPreTeleportEffects");

	UA_Beastmaster_Enrage_Base_C_DoPreTeleportEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Skill
// (BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::Notify_Skill()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Skill");

	UA_Beastmaster_Enrage_Base_C_Notify_Skill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_SkillEnd
// (BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::Notify_SkillEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_SkillEnd");

	UA_Beastmaster_Enrage_Base_C_Notify_SkillEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Beastmaster_Enrage_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnBegin");

	UA_Beastmaster_Enrage_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Beastmaster_Enrage_Base_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnEnd");

	UA_Beastmaster_Enrage_Base_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Rumble
// (BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::Notify_Rumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Rumble");

	UA_Beastmaster_Enrage_Base_C_Notify_Rumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_Pitch
// (BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::Notify_CS_Pitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_Pitch");

	UA_Beastmaster_Enrage_Base_C_Notify_CS_Pitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_FoV
// (BlueprintCallable, BlueprintEvent)

void UA_Beastmaster_Enrage_Base_C::Notify_CS_FoV()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_FoV");

	UA_Beastmaster_Enrage_Base_C_Notify_CS_FoV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.ExecuteUbergraph_A_Beastmaster_Enrage_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Beastmaster_Enrage_Base_C::ExecuteUbergraph_A_Beastmaster_Enrage_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.ExecuteUbergraph_A_Beastmaster_Enrage_Base");

	UA_Beastmaster_Enrage_Base_C_ExecuteUbergraph_A_Beastmaster_Enrage_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
