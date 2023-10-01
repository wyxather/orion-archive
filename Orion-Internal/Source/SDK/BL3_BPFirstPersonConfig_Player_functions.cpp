// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFirstPersonConfig_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFirstPersonConfig_Player.BPFirstPersonConfig_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPFirstPersonConfig_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFirstPersonConfig_Player.BPFirstPersonConfig_Player_C.UserConstructionScript");

	ABPFirstPersonConfig_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
