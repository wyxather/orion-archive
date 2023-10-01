// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_AI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCont_AI.BPCont_AI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCont_AI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_AI.BPCont_AI_C.UserConstructionScript");

	ABPCont_AI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
