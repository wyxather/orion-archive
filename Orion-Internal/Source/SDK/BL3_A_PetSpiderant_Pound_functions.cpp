// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Pound_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UA_PetSpiderant_Pound_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.Notify_Melee");

	UA_PetSpiderant_Pound_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_Pound_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.OnBegin");

	UA_PetSpiderant_Pound_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.ExecuteUbergraph_A_PetSpiderant_Pound
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_Pound_C::ExecuteUbergraph_A_PetSpiderant_Pound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.ExecuteUbergraph_A_PetSpiderant_Pound");

	UA_PetSpiderant_Pound_C_ExecuteUbergraph_A_PetSpiderant_Pound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
