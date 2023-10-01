// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPUsableComponent_Revive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPUsableComponent_Revive.BPUsableComponent_Revive_C.K2_CanBeUsed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FUsabilityQuery*        Query                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPUsableComponent_Revive_C::K2_CanBeUsed(struct FUsabilityQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPUsableComponent_Revive.BPUsableComponent_Revive_C.K2_CanBeUsed");

	UBPUsableComponent_Revive_C_K2_CanBeUsed_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
