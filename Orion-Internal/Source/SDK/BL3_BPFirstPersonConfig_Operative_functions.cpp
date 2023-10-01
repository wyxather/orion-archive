// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFirstPersonConfig_Operative_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFirstPersonConfig_Operative.BPFirstPersonConfig_Operative_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPFirstPersonConfig_Operative_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFirstPersonConfig_Operative.BPFirstPersonConfig_Operative_C.UserConstructionScript");

	ABPFirstPersonConfig_Operative_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
