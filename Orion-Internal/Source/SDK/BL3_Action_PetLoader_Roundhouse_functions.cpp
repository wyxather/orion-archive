// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Roundhouse_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.AN_DealDamage
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_Roundhouse_C::AN_DealDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.AN_DealDamage");

	UAction_PetLoader_Roundhouse_C_AN_DealDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.ExecuteUbergraph_Action_PetLoader_Roundhouse
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_Roundhouse_C::ExecuteUbergraph_Action_PetLoader_Roundhouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Roundhouse.Action_PetLoader_Roundhouse_C.ExecuteUbergraph_Action_PetLoader_Roundhouse");

	UAction_PetLoader_Roundhouse_C_ExecuteUbergraph_Action_PetLoader_Roundhouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
