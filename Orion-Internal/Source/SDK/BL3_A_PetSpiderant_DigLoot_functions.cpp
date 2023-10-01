// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_DigLoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.Notify_Loot
// (BlueprintCallable, BlueprintEvent)

void UA_PetSpiderant_DigLoot_C::Notify_Loot()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.Notify_Loot");

	UA_PetSpiderant_DigLoot_C_Notify_Loot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_DigLoot_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.OnBegin");

	UA_PetSpiderant_DigLoot_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.ExecuteUbergraph_A_PetSpiderant_DigLoot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_DigLoot_C::ExecuteUbergraph_A_PetSpiderant_DigLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.ExecuteUbergraph_A_PetSpiderant_DigLoot");

	UA_PetSpiderant_DigLoot_C_ExecuteUbergraph_A_PetSpiderant_DigLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
