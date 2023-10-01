// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Tannis_Loop_BuildKey_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Tannis_Loop_BuildKey.Action_Tannis_Loop_BuildKey_C.VaultKeyCreated
// (BlueprintCallable, BlueprintEvent)

void UAction_Tannis_Loop_BuildKey_C::VaultKeyCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Tannis_Loop_BuildKey.Action_Tannis_Loop_BuildKey_C.VaultKeyCreated");

	UAction_Tannis_Loop_BuildKey_C_VaultKeyCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Tannis_Loop_BuildKey.Action_Tannis_Loop_BuildKey_C.ExecuteUbergraph_Action_Tannis_Loop_BuildKey
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Tannis_Loop_BuildKey_C::ExecuteUbergraph_Action_Tannis_Loop_BuildKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Tannis_Loop_BuildKey.Action_Tannis_Loop_BuildKey_C.ExecuteUbergraph_Action_Tannis_Loop_BuildKey");

	UAction_Tannis_Loop_BuildKey_C_ExecuteUbergraph_Action_Tannis_Loop_BuildKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
