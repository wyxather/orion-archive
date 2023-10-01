// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_Vortex1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.Notify_AttackCommand
// (BlueprintCallable, BlueprintEvent)

void UA_PetSkag_Vortex1_C::Notify_AttackCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.Notify_AttackCommand");

	UA_PetSkag_Vortex1_C_Notify_AttackCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.ExecuteUbergraph_A_PetSkag_Vortex1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSkag_Vortex1_C::ExecuteUbergraph_A_PetSkag_Vortex1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSkag_Vortex1.A_PetSkag_Vortex1_C.ExecuteUbergraph_A_PetSkag_Vortex1");

	UA_PetSkag_Vortex1_C_ExecuteUbergraph_A_PetSkag_Vortex1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
