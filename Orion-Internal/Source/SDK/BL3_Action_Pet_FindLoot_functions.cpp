// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_FindLoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.Notify_FoundLoot
// (BlueprintCallable, BlueprintEvent)

void UAction_Pet_FindLoot_C::Notify_FoundLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.Notify_FoundLoot");

	UAction_Pet_FindLoot_C_Notify_FoundLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.ExecuteUbergraph_Action_Pet_FindLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Pet_FindLoot_C::ExecuteUbergraph_Action_Pet_FindLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.ExecuteUbergraph_Action_Pet_FindLoot");

	UAction_Pet_FindLoot_C_ExecuteUbergraph_Action_Pet_FindLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
