// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenuStandIn_EchoLog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPMenuStandIn_EchoLog.BPMenuStandIn_EchoLog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPMenuStandIn_EchoLog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPMenuStandIn_EchoLog.BPMenuStandIn_EchoLog_C.UserConstructionScript");

	ABPMenuStandIn_EchoLog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
