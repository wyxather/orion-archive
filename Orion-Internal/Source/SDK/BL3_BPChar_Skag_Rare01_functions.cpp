// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Skag_Rare01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Skag_Rare01.BPChar_Skag_Rare01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Skag_Rare01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Skag_Rare01.BPChar_Skag_Rare01_C.UserConstructionScript");

	ABPChar_Skag_Rare01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
