// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenuStandIn_EridianLog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPMenuStandIn_EridianLog.BPMenuStandIn_EridianLog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPMenuStandIn_EridianLog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPMenuStandIn_EridianLog.BPMenuStandIn_EridianLog_C.UserConstructionScript");

	ABPMenuStandIn_EridianLog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
