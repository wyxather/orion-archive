// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_DefenseSkill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_DefenseSkill_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.OnBegin");

	UA_Pet_DefenseSkill_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.Notify_SkillUse
// (BlueprintCallable, BlueprintEvent)

void UA_Pet_DefenseSkill_C::Notify_SkillUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.Notify_SkillUse");

	UA_Pet_DefenseSkill_C_Notify_SkillUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.ExecuteUbergraph_A_Pet_DefenseSkill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_DefenseSkill_C::ExecuteUbergraph_A_Pet_DefenseSkill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.ExecuteUbergraph_A_Pet_DefenseSkill");

	UA_Pet_DefenseSkill_C_ExecuteUbergraph_A_Pet_DefenseSkill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
