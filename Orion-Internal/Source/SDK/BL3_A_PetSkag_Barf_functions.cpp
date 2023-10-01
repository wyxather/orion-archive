// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_Barf_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSkag_Barf.A_PetSkag_Barf_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_Barf_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Barf.A_PetSkag_Barf_C.OnBegin");

	UA_PetSkag_Barf_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_Barf.A_PetSkag_Barf_C.VomitDamageNotify
// (BlueprintCallable, BlueprintEvent)

void UA_PetSkag_Barf_C::VomitDamageNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Barf.A_PetSkag_Barf_C.VomitDamageNotify");

	UA_PetSkag_Barf_C_VomitDamageNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_Barf.A_PetSkag_Barf_C.ExecuteUbergraph_A_PetSkag_Barf
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_Barf_C::ExecuteUbergraph_A_PetSkag_Barf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Barf.A_PetSkag_Barf_C.ExecuteUbergraph_A_PetSkag_Barf");

	UA_PetSkag_Barf_C_ExecuteUbergraph_A_PetSkag_Barf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
