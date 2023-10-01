// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_DLCSkill_Start_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.Notify_SpawnTrap
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_DLCSkill_Start_Parent_C::Notify_SpawnTrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.Notify_SpawnTrap");

	UAction_Beastmaster_DLCSkill_Start_Parent_C_Notify_SpawnTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_DLCSkill_Start_Parent_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.OnServerBegin");

	UAction_Beastmaster_DLCSkill_Start_Parent_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_DLCSkill_Start_Parent_C::ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent");

	UAction_Beastmaster_DLCSkill_Start_Parent_C_ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
