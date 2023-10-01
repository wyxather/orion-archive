// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxProbesCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGbxProbeId             OutId                          (Parm, OutParm)

void UGbxProbeInterface::GetGbxProbeId(struct FGbxProbeId* OutId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId");

	UGbxProbeInterface_GetGbxProbeId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutId != nullptr)
		*OutId = params.OutId;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
