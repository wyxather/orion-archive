// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_AttackCommand_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.AttackCommandUsed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UA_Pet_AttackCommand_Parent_C::AttackCommandUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.AttackCommandUsed");

	UA_Pet_AttackCommand_Parent_C_AttackCommandUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_AttackCommand_Parent_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.OnServerBegin");

	UA_Pet_AttackCommand_Parent_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.ExecuteUbergraph_A_Pet_AttackCommand_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_AttackCommand_Parent_C::ExecuteUbergraph_A_Pet_AttackCommand_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.ExecuteUbergraph_A_Pet_AttackCommand_Parent");

	UA_Pet_AttackCommand_Parent_C_ExecuteUbergraph_A_Pet_AttackCommand_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
