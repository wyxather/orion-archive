// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakGlobalDialogParametersProvider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C.InitDialogContext
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FDialogContext          Parameters                     (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UOakGlobalDialogParametersProvider_C::InitDialogContext(struct FDialogContext* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C.InitDialogContext");

	UOakGlobalDialogParametersProvider_C_InitDialogContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
